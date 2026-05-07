//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/tests/framework/testFixture.c";

object Player;
object Selector;

/////////////////////////////////////////////////////////////////////////////
void Setup()
{
    Selector = clone_object("/guilds/runeskald/selectors/craftRuneSelector.c");

    Player = clone_object("/lib/tests/support/services/mockPlayer.c");
    Player.Name("bob");
    Player.addCommands();

    Player.addSkillPoints(500);
    Player.advanceSkill("gem crafting", 5);
    Player.advanceSkill("local history", 5);
    Player.advanceSkill("spellcraft", 5);

    Player.addResearchPoints(20);
    ExpectTrue(Player.addResearchTree(
        "/guilds/runeskald/rune-crafting.c"));
    ExpectTrue(Player.initiateResearch(
        "/guilds/runeskald/rune-crafting/root.c"));
    ExpectTrue(Player.initiateResearch(
        "/guilds/runeskald/rune-crafting/basic-power-rune.c"));
    ExpectTrue(Player.initiateResearch(
        "/guilds/runeskald/rune-crafting/basic-ward-rune.c"));
    ExpectTrue(Player.initiateResearch(
        "/guilds/runeskald/rune-crafting/basic-blade-rune.c"));
    ExpectTrue(Player.initiateResearch(
        "/guilds/runeskald/rune-crafting/basic-storm-rune.c"));
    ExpectTrue(Player.initiateResearch(
        "/guilds/runeskald/rune-crafting/basic-frost-rune.c"));
    ExpectTrue(Player.initiateResearch(
        "/guilds/runeskald/rune-crafting/basic-flame-rune.c"));

    move_object(Selector, Player);
}

/////////////////////////////////////////////////////////////////////////////
void CleanUp()
{
    destruct(Player);
    destruct(Selector);
}

/////////////////////////////////////////////////////////////////////////////
void TopLevelMenuShowsBasicRunesWhenOnlyBasicResearched()
{
    Selector.initiateSelector(Player);
    string msg = Player.caughtMessage();
    ExpectSubStringMatch("basic power rune", msg);
    ExpectSubStringMatch("basic ward rune", msg);
    ExpectSubStringMatch("basic blade rune", msg);
    ExpectSubStringMatch("basic storm rune", msg);
    ExpectSubStringMatch("basic frost rune", msg);
    ExpectSubStringMatch("basic flame rune", msg);
}

/////////////////////////////////////////////////////////////////////////////
void TopLevelMenuDoesNotShowElderRunesWithoutElderResearch()
{
    Selector.initiateSelector(Player);
    string msg = Player.caughtMessage();
    ExpectFalse(sizeof(regexp(({ msg }), "elder.*rune")),
        "Elder runes should not appear without elder research");
}

/////////////////////////////////////////////////////////////////////////////
void ElderRunesAppearAfterElderResearchGranted()
{
    Player.advanceSkill("gem crafting", 5);
    Player.advanceSkill("spellcraft", 3);
    ExpectTrue(Player.initiateResearch(
        "/guilds/runeskald/rune-crafting/elder-rune-crafting.c"));
    ExpectTrue(Player.initiateResearch(
        "/guilds/runeskald/rune-crafting/elder-power-rune.c"));

    Selector.initiateSelector(Player);
    string msg = Player.caughtMessage();
    ExpectSubStringMatch("elder power rune", msg);
}

/////////////////////////////////////////////////////////////////////////////
void UnresearchedTypeAppearsDisabledInMenu()
{
    // Research the tier but not a specific type (e.g. power only).
    // Other basic types should appear greyed out.
    object sel2 = clone_object("/guilds/runeskald/selectors/craftRuneSelector.c");

    object p2 = clone_object("/lib/tests/support/services/mockPlayer.c");
    p2.Name("bob2");
    p2.addCommands();
    p2.addSkillPoints(500);
    p2.advanceSkill("gem crafting", 1);
    p2.advanceSkill("local history", 1);
    p2.addResearchPoints(10);
    ExpectTrue(p2.addResearchTree("/guilds/runeskald/rune-crafting.c"));
    ExpectTrue(p2.initiateResearch("/guilds/runeskald/rune-crafting/root.c"));
    ExpectTrue(p2.initiateResearch("/guilds/runeskald/rune-crafting/basic-power-rune.c"));

    move_object(sel2, p2);
    sel2.initiateSelector(p2);
    string msg = p2.caughtMessage();

    // power rune should be enabled; ward should be disabled
    ExpectSubStringMatch("basic power rune", msg);
    // The selector should still list ward but as choice disabled
    ExpectSubStringMatch("basic ward rune", msg);

    destruct(p2);
    destruct(sel2);
}

/////////////////////////////////////////////////////////////////////////////
void ExitOptionAlwaysPresent()
{
    Selector.initiateSelector(Player);
    ExpectSubStringMatch("Exit Craft Rune Menu", Player.caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void ChoosingExitClosesSelector()
{
    Selector.initiateSelector(Player);

    // Count menu items - exit is always last.
    string msg = Player.caughtMessage();
    // Determine exit option number by counting lines that start with [N]
    string *lines = explode(msg, "\n");
    int lastOption = 0;
    foreach (string line in lines)
    {
        int n;
        if (sscanf(line, "    [%d]", n) == 1 && n > lastOption)
        {
            lastOption = n;
        }
    }
    ExpectTrue(lastOption > 0);
    command(to_string(lastOption), Player);
    // Selector cleans up after exit - object should be destructed.
    ExpectFalse(objectp(Selector));
}

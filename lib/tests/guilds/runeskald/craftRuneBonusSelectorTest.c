//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/tests/framework/testFixture.c";

object Player;
object Selector;

/////////////////////////////////////////////////////////////////////////////
void Init()
{
    ignoreList += ({ "addGraniteMaterial", "addQuartziteMaterial",
        "addDiamondMaterial", "countRunesInInventory",
        "getRuneInInventory", "countMaterialInInventory",
        "findAndSelectCraftRune" });
}

/////////////////////////////////////////////////////////////////////////////
private void addGraniteMaterial(int qty)
{
    object mat = clone_object("/lib/instances/items/materials/stone/granite.c");
    mat.set("quantity", qty);
    move_object(mat, Player);
}

/////////////////////////////////////////////////////////////////////////////
private void addQuartziteMaterial(int qty)
{
    object mat = clone_object("/lib/instances/items/materials/stone/quartzite.c");
    mat.set("quantity", qty);
    move_object(mat, Player);
}

/////////////////////////////////////////////////////////////////////////////
private void addDiamondMaterial(int qty)
{
    object mat = clone_object("/lib/instances/items/materials/crystal/diamond.c");
    mat.set("quantity", qty);
    move_object(mat, Player);
}

/////////////////////////////////////////////////////////////////////////////
private int countRunesInInventory()
{
    return sizeof(filter(deep_inventory(Player),
        (: member(inherit_list($1), "/lib/items/rune.c") > -1 :)));
}

/////////////////////////////////////////////////////////////////////////////
private object getRuneInInventory()
{
    object *runes = filter(deep_inventory(Player),
        (: member(inherit_list($1), "/lib/items/rune.c") > -1 :));
    return sizeof(runes) ? runes[0] : 0;
}

/////////////////////////////////////////////////////////////////////////////
private int countMaterialInInventory(string blueprint)
{
    int total = 0;
    foreach (object m in filter(deep_inventory(Player),
        (: (member(inherit_list($1), "/lib/items/material.c") > -1) &&
           ($1.query("blueprint") == $2) :), blueprint))
    {
        total += m.query("quantity");
    }
    return total;
}

/////////////////////////////////////////////////////////////////////////////
// Scans the last caught menu message for the enabled "Craft Rune" option and
// issues that command. Returns the option number, or 0 if not found/disabled.
private int findAndSelectCraftRune()
{
    string msg = Player.caughtMessage();
    foreach (string line in explode(msg, "\n"))
    {
        int n;
        if (sscanf(line, "    [%d]", n) == 1 &&
            sizeof(regexp(({ line }), "Craft Rune")) &&
            !sizeof(regexp(({ line }), "31m")))
        {
            command(to_string(n), Player);
            return n;
        }
    }
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
void Setup()
{
    Selector = clone_object("/guilds/runeskald/selectors/craftRuneBonusSelector.c");
    Selector.setTier("basic");
    Selector.setRuneType("power");
    Selector.setMaterial("granite");
    Selector.setMaxBonuses(1);

    Player = clone_object("/lib/tests/support/services/mockPlayer.c");
    Player.Name("bob");
    Player.addCommands();

    addGraniteMaterial(5);

    move_object(Selector, Player);
}

/////////////////////////////////////////////////////////////////////////////
void CleanUp()
{
    destruct(Player);
    destruct(Selector);
}

// ---- Menu display tests --------------------------------------------------

/////////////////////////////////////////////////////////////////////////////
void MenuShowsBonusOptionsForPowerRune()
{
    Selector.initiateSelector(Player);
    string msg = Player.caughtMessage();
    ExpectSubStringMatch("Attack", msg);
    ExpectSubStringMatch("Damage", msg);
    ExpectSubStringMatch("Strength", msg);
}

/////////////////////////////////////////////////////////////////////////////
void MenuShowsCraftRuneOptionDisabledBeforeBonusChosen()
{
    Selector.initiateSelector(Player);
    string msg = Player.caughtMessage();
    ExpectSubStringMatch("Craft Rune", msg);
    // Craft Rune row must be coloured disabled (31m = red) when no bonus chosen.
    string *craftLines = regexp(({ msg }), "Craft Rune");
    ExpectTrue(sizeof(craftLines) > 0, "Craft Rune line present");
    ExpectSubStringMatch("31m", craftLines[0]);
}

/////////////////////////////////////////////////////////////////////////////
void MenuShowsCraftRuneEnabledAfterBonusChosen()
{
    Selector.initiateSelector(Player);
    command("1", Player);
    string msg = Player.caughtMessage();
    string *craftLines = regexp(({ msg }), "Craft Rune");
    ExpectTrue(sizeof(craftLines) > 0, "Craft Rune line present");
    // Should now be enabled (32m = green) since a bonus was chosen.
    ExpectSubStringMatch("32m", craftLines[0]);
}

/////////////////////////////////////////////////////////////////////////////
void MenuShowsWardBonusOptionsForWardRune()
{
    object sel = clone_object("/guilds/runeskald/selectors/craftRuneBonusSelector.c");
    sel.setTier("basic");
    sel.setRuneType("ward");
    sel.setMaterial("granite");
    sel.setMaxBonuses(1);

    object p = clone_object("/lib/tests/support/services/mockPlayer.c");
    p.Name("ward_test");
    p.addCommands();

    object mat = clone_object("/lib/instances/items/materials/stone/granite.c");
    mat.set("quantity", 2);
    move_object(mat, p);
    move_object(sel, p);

    sel.initiateSelector(p);
    string msg = p.caughtMessage();
    ExpectSubStringMatch("Armor Class", msg);
    ExpectSubStringMatch("Resist Fire", msg);
    ExpectSubStringMatch("Resist Cold", msg);

    destruct(p);
    destruct(sel);
}

/////////////////////////////////////////////////////////////////////////////
void MenuDescribesSelectedMaterial()
{
    Selector.initiateSelector(Player);
    ExpectSubStringMatch("granite", Player.caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void MenuShowsChosenBonusLabelAfterSelection()
{
    Selector.initiateSelector(Player);
    command("1", Player);
    ExpectSubStringMatch("Chosen", Player.caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void SelectingChosenBonusAgainDeselects()
{
    Selector.initiateSelector(Player);
    command("1", Player);
    ExpectSubStringMatch("Chosen", Player.caughtMessage());
    command("1", Player);
    ExpectFalse(sizeof(regexp(({ Player.caughtMessage() }), "Chosen")),
        "Bonus deselected");
}

/////////////////////////////////////////////////////////////////////////////
void ExitOptionAlwaysPresent()
{
    Selector.initiateSelector(Player);
    ExpectSubStringMatch("Exit", Player.caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void ExitDoesNotCraftRune()
{
    Selector.initiateSelector(Player);
    string msg = Player.caughtMessage();
    foreach (string line in explode(msg, "\n"))
    {
        int n;
        if (sscanf(line, "    [%d]", n) == 1 && sizeof(regexp(({ line }), "Exit")))
        {
            command(to_string(n), Player);
            break;
        }
    }
    ExpectEq(0, countRunesInInventory(), "No rune created on exit");
}

/////////////////////////////////////////////////////////////////////////////
void BasicTierShowsUnscaledBonusValues()
{
    // Basic multiplier = 1, so "Attack (+2)" stays "+2" in menu.
    Selector.initiateSelector(Player);
    ExpectSubStringMatch("+2", Player.caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void ElderTierScalesBonusValuesToDoubleInMenu()
{
    // Elder multiplier = 2: base "+2" becomes "+4" in menu display.
    object sel = clone_object("/guilds/runeskald/selectors/craftRuneBonusSelector.c");
    sel.setTier("elder");
    sel.setRuneType("power");
    sel.setMaterial("granite");
    sel.setMaxBonuses(2);

    object p = clone_object("/lib/tests/support/services/mockPlayer.c");
    p.Name("elder_test");
    p.addCommands();

    object mat = clone_object("/lib/instances/items/materials/stone/granite.c");
    mat.set("quantity", 3);
    move_object(mat, p);
    move_object(sel, p);

    sel.initiateSelector(p);
    ExpectSubStringMatch("+4", p.caughtMessage());

    destruct(p);
    destruct(sel);
}

/////////////////////////////////////////////////////////////////////////////
void BasicTierAllowsOnlyOneBonusSlot()
{
    Selector.initiateSelector(Player);
    command("1", Player);
    // After filling the single slot all other bonus entries should be disabled.
    string *disabledBonusLines = regexp(({ Player.caughtMessage() }), "31m.*\\+[0-9]");
    ExpectTrue(sizeof(disabledBonusLines) > 0,
        "Other bonus options are disabled after slot filled");
}

/////////////////////////////////////////////////////////////////////////////
void ElderTierAllowsTwoBonusSlots()
{
    object sel = clone_object("/guilds/runeskald/selectors/craftRuneBonusSelector.c");
    sel.setTier("elder");
    sel.setRuneType("power");
    sel.setMaterial("granite");
    sel.setMaxBonuses(2);

    object p = clone_object("/lib/tests/support/services/mockPlayer.c");
    p.Name("elder2");
    p.addCommands();

    object mat = clone_object("/lib/instances/items/materials/stone/granite.c");
    mat.set("quantity", 3);
    move_object(mat, p);
    move_object(sel, p);

    sel.initiateSelector(p);
    command("1", p);
    command("2", p);
    string *chosen = regexp(({ p.caughtMessage() }), "Chosen");
    ExpectTrue(sizeof(chosen) >= 2, "Two bonuses chosen for elder tier");

    destruct(p);
    destruct(sel);
}

// ---- Crafting flow tests -------------------------------------------------

/////////////////////////////////////////////////////////////////////////////
void CraftingConsumesMaterialFromInventory()
{
    ExpectEq(5, countMaterialInInventory("granite"));

    Selector.initiateSelector(Player);
    command("1", Player);
    int found = findAndSelectCraftRune();
    ExpectTrue(found > 0, "Craft Rune option was enabled and selected");

    ExpectEq(4, countMaterialInInventory("granite"),
        "One granite consumed after crafting");
}

/////////////////////////////////////////////////////////////////////////////
void CraftingProducesRuneInInventory()
{
    ExpectEq(0, countRunesInInventory());

    Selector.initiateSelector(Player);
    command("1", Player);
    findAndSelectCraftRune();

    ExpectEq(1, countRunesInInventory(), "Rune appears in inventory");
}

/////////////////////////////////////////////////////////////////////////////
void CraftedRuneHasCorrectTierAndType()
{
    Selector.initiateSelector(Player);
    command("1", Player);
    findAndSelectCraftRune();

    object rune = getRuneInInventory();
    ExpectTrue(objectp(rune), "Rune object exists");
    ExpectEq("basic", rune.query("rune tier"));
    ExpectEq("power", rune.query("rune type"));
}

/////////////////////////////////////////////////////////////////////////////
void CraftedRuneHasCorrectMaterialSet()
{
    Selector.initiateSelector(Player);
    command("1", Player);
    findAndSelectCraftRune();

    object rune = getRuneInInventory();
    ExpectTrue(objectp(rune));
    ExpectEq("granite", rune.query("material"));
}

/////////////////////////////////////////////////////////////////////////////
void CraftedRuneHasChosenBonusApplied()
{
    Selector.initiateSelector(Player);
    command("1", Player);
    findAndSelectCraftRune();

    object rune = getRuneInInventory();
    ExpectTrue(objectp(rune), "Rune exists");
    string *bonuses = rune.query("rune bonuses");
    ExpectTrue(pointerp(bonuses) && sizeof(bonuses) > 0,
        "Rune has at least one bonus stored");
}

/////////////////////////////////////////////////////////////////////////////
void CraftingWithoutMaterialFailsGracefully()
{
    foreach (object m in filter(deep_inventory(Player),
        (: member(inherit_list($1), "/lib/items/material.c") > -1 :)))
    {
        destruct(m);
    }

    Selector.initiateSelector(Player);
    command("1", Player);

    // Find the Craft Rune option number (may be disabled) and send it anyway.
    string msg = Player.caughtMessage();
    foreach (string line in explode(msg, "\n"))
    {
        int n;
        if (sscanf(line, "    [%d]", n) == 1 &&
            sizeof(regexp(({ line }), "Craft Rune")))
        {
            command(to_string(n), Player);
            break;
        }
    }

    ExpectSubStringMatch("no granite", Player.caughtMessage());
    ExpectEq(0, countRunesInInventory(), "No rune created without material");
}

// ---- Material property application tests --------------------------------

/////////////////////////////////////////////////////////////////////////////
void GraniteDefenseAddsResistElectricityToRune()
{
    // Granite: defense electricity: 3  ?  material resist electricity stored.
    // fuseRune() will translate this to "bonus resist electricity" on armor.
    Selector.initiateSelector(Player);
    command("1", Player);
    findAndSelectCraftRune();

    object rune = getRuneInInventory();
    ExpectTrue(objectp(rune));
    ExpectTrue(rune.query("material resist electricity") >= 3,
        "Granite defense electricity stored as material resist electricity on rune");
}

/////////////////////////////////////////////////////////////////////////////
void GraniteHasNoMaterialAttackBonus()
{
    // Granite has no "attack" key - no material attack key expected.
    Selector.initiateSelector(Player);
    command("1", Player);
    findAndSelectCraftRune();

    object rune = getRuneInInventory();
    ExpectFalse(rune.query("material attack physical"),
        "Granite should not add any material attack bonus to rune");
}

/////////////////////////////////////////////////////////////////////////////
void QuartziteAttackAddsPhysicalDamageToRune()
{
    // Quartzite: attack physical: 1 -> material attack physical +1 on rune.
    object sel = clone_object("/guilds/runeskald/selectors/craftRuneBonusSelector.c");
    sel.setTier("basic");
    sel.setRuneType("power");
    sel.setMaterial("quartzite");
    sel.setMaxBonuses(1);

    object p = clone_object("/lib/tests/support/services/mockPlayer.c");
    p.Name("qtest");
    p.addCommands();
    addQuartziteMaterial(3);
    move_object(sel, p);

    sel.initiateSelector(p);
    command("1", p);

    foreach (string line in explode(p.caughtMessage(), "\n"))
    {
        int n;
        if (sscanf(line, "    [%d]", n) == 1 &&
            sizeof(regexp(({ line }), "Craft Rune")) &&
            !sizeof(regexp(({ line }), "31m")))
        {
            command(to_string(n), p);
            break;
        }
    }

    object *runes = filter(deep_inventory(p),
        (: member(inherit_list($1), "/lib/items/rune.c") > -1 :));
    ExpectTrue(sizeof(runes) > 0, "Rune created from quartzite");
    ExpectTrue(runes[0].query("material attack physical") >= 1,
        "Quartzite attack physical stored as material attack physical on rune");

    destruct(p);
    destruct(sel);
}

/////////////////////////////////////////////////////////////////////////////
void QuartziteDefenseAddsResistPhysicalToRune()
{
    // Quartzite: defense physical: 1 -> material resist physical +1 on rune.
    object sel = clone_object("/guilds/runeskald/selectors/craftRuneBonusSelector.c");
    sel.setTier("basic");
    sel.setRuneType("ward");
    sel.setMaterial("quartzite");
    sel.setMaxBonuses(1);

    object p = clone_object("/lib/tests/support/services/mockPlayer.c");
    p.Name("qdeftest");
    p.addCommands();
    addQuartziteMaterial(3);
    move_object(sel, p);

    sel.initiateSelector(p);
    command("1", p);

    foreach (string line in explode(p.caughtMessage(), "\n"))
    {
        int n;
        if (sscanf(line, "    [%d]", n) == 1 &&
            sizeof(regexp(({ line }), "Craft Rune")) &&
            !sizeof(regexp(({ line }), "31m")))
        {
            command(to_string(n), p);
            break;
        }
    }

    object *runes = filter(deep_inventory(p),
        (: member(inherit_list($1), "/lib/items/rune.c") > -1 :));
    ExpectTrue(sizeof(runes) > 0, "Rune created from quartzite");
    ExpectTrue(runes[0].query("material resist physical") >= 1,
        "Quartzite defense physical stored as material resist physical on rune");

    destruct(p);
    destruct(sel);
}

/////////////////////////////////////////////////////////////////////////////
void ValueMultiplierOnDiamondScalesRuneValue()
{
    // Diamond: value multiplier 15.5 and attack physical: 4.
    // The diamond rune's value should far exceed the granite rune's.
    object selD = clone_object("/guilds/runeskald/selectors/craftRuneBonusSelector.c");
    selD.setTier("basic");
    selD.setRuneType("power");
    selD.setMaterial("diamond");
    selD.setMaxBonuses(1);

    object pD = clone_object("/lib/tests/support/services/mockPlayer.c");
    pD.Name("diamond_test");
    pD.addCommands();
    addDiamondMaterial(2);
    move_object(selD, pD);

    selD.initiateSelector(pD);
    command("1", pD);
    foreach (string line in explode(pD.caughtMessage(), "\n"))
    {
        int n;
        if (sscanf(line, "    [%d]", n) == 1 &&
            sizeof(regexp(({ line }), "Craft Rune")) &&
            !sizeof(regexp(({ line }), "31m")))
        {
            command(to_string(n), pD);
            break;
        }
    }

    // Craft a comparable granite rune for baseline comparison.
    Selector.initiateSelector(Player);
    command("1", Player);
    findAndSelectCraftRune();

    object *diamondRunes = filter(deep_inventory(pD),
        (: member(inherit_list($1), "/lib/items/rune.c") > -1 :));
    object graniteRune = getRuneInInventory();

    ExpectTrue(sizeof(diamondRunes) > 0, "Diamond rune created");
    ExpectTrue(objectp(graniteRune), "Granite rune created");
    ExpectTrue(diamondRunes[0].query("value") > graniteRune.query("value"),
        "Diamond rune value exceeds granite rune value (value multiplier)");

    destruct(pD);
    destruct(selD);
}

/////////////////////////////////////////////////////////////////////////////
void NoValueMultiplierMaterialUsesBaseValue()
{
    // Granite has no value multiplier - base calculation only (>= 50).
    Selector.initiateSelector(Player);
    command("1", Player);
    findAndSelectCraftRune();

    object rune = getRuneInInventory();
    ExpectTrue(objectp(rune));
    ExpectTrue(rune.query("value") >= 50,
        "Rune from non-multiplier material has positive base value");
}

//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/necromancy/raise-skeleton.c");
    addChild("/guilds/disciple-of-argloth/necromancy/raise-skeleton.c",
        "/guilds/disciple-of-argloth/necromancy/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/necromancy/animate-dead.c");
    addChild("/guilds/disciple-of-argloth/necromancy/animate-dead.c",
        "/guilds/disciple-of-argloth/necromancy/raise-skeleton.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/necromancy/summon-wraith.c");
    addChild("/guilds/disciple-of-argloth/necromancy/summon-wraith.c",
        "/guilds/disciple-of-argloth/necromancy/animate-dead.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/necromancy/raise-vampire.c");
    addChild("/guilds/disciple-of-argloth/necromancy/raise-vampire.c",
        "/guilds/disciple-of-argloth/necromancy/summon-wraith.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/necromancy/army-of-undead.c");
    addChild("/guilds/disciple-of-argloth/necromancy/army-of-undead.c",
        "/guilds/disciple-of-argloth/necromancy/raise-vampire.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Necromancy");
    Description("This research tree provides the fundamental arts of necromancy, "
        "including raising and commanding the undead.");
    Source("Disciple of Argloth");
    addResearchElement("/guilds/disciple-of-argloth/necromancy/root.c");
    TreeRoot("/guilds/disciple-of-argloth/necromancy/root.c");

    FirstLevel();
    SeventhLevel();
    FifteenthLevel();
    TwentyFifthLevel();
    ThirtySeventhLevel();
}

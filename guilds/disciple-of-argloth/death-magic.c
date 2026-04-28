//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/death/life-drain.c");
    addChild("/guilds/disciple-of-argloth/death/life-drain.c",
        "/guilds/disciple-of-argloth/death/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/death/death-bolt.c");
    addChild("/guilds/disciple-of-argloth/death/death-bolt.c",
        "/guilds/disciple-of-argloth/death/life-drain.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/death/soul-siphon.c");
    addChild("/guilds/disciple-of-argloth/death/soul-siphon.c",
        "/guilds/disciple-of-argloth/death/death-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/death/death-cloud.c");
    addChild("/guilds/disciple-of-argloth/death/death-cloud.c",
        "/guilds/disciple-of-argloth/death/soul-siphon.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/death/finger-of-death.c");
    addChild("/guilds/disciple-of-argloth/death/finger-of-death.c",
        "/guilds/disciple-of-argloth/death/death-cloud.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Death Magic");
    Description("This research tree provides mastery over death itself, "
        "with life-draining and death-dealing spells.");
    Source("Disciple of Argloth");
    addResearchElement("/guilds/disciple-of-argloth/death/root.c");
    TreeRoot("/guilds/disciple-of-argloth/death/root.c");

    FirstLevel();
    SeventhLevel();
    FifteenthLevel();
    TwentyFifthLevel();
    ThirtySeventhLevel();
}

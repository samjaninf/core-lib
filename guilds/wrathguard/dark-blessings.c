//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/wrathguard/blessings/curse-weakness.c");
    addChild("/guilds/wrathguard/blessings/curse-weakness.c",
        "/guilds/wrathguard/blessings/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/wrathguard/blessings/blessing-of-fury.c");
    addChild("/guilds/wrathguard/blessings/blessing-of-fury.c",
        "/guilds/wrathguard/blessings/curse-weakness.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/wrathguard/blessings/curse-of-agony.c");
    addChild("/guilds/wrathguard/blessings/curse-of-agony.c",
        "/guilds/wrathguard/blessings/blessing-of-fury.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement("/guilds/wrathguard/blessings/dark-empowerment.c");
    addChild("/guilds/wrathguard/blessings/dark-empowerment.c",
        "/guilds/wrathguard/blessings/curse-of-agony.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement("/guilds/wrathguard/blessings/seilyndrias-favor.c");
    addChild("/guilds/wrathguard/blessings/seilyndrias-favor.c",
        "/guilds/wrathguard/blessings/dark-empowerment.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Dark Blessings");
    Description("This research tree provides dark blessings and curses, "
        "empowering allies and weakening enemies through Seilyndria's favor.");
    Source("Wrathguard");
    addResearchElement("/guilds/wrathguard/blessings/root.c");
    TreeRoot("/guilds/wrathguard/blessings/root.c");

    FirstLevel();
    SeventhLevel();
    FifteenthLevel();
    TwentyThirdLevel();
    ThirtyThirdLevel();
}

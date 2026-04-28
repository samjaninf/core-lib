//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/wrathguard/destruction/dark-bolt.c");
    addChild("/guilds/wrathguard/destruction/dark-bolt.c",
        "/guilds/wrathguard/destruction/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/wrathguard/destruction/shadow-strike.c");
    addChild("/guilds/wrathguard/destruction/shadow-strike.c",
        "/guilds/wrathguard/destruction/dark-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/wrathguard/destruction/destructive-wave.c");
    addChild("/guilds/wrathguard/destruction/destructive-wave.c",
        "/guilds/wrathguard/destruction/shadow-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement("/guilds/wrathguard/destruction/annihilation.c");
    addChild("/guilds/wrathguard/destruction/annihilation.c",
        "/guilds/wrathguard/destruction/destructive-wave.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFirstLevel()
{
    addResearchElement("/guilds/wrathguard/destruction/obliterate.c");
    addChild("/guilds/wrathguard/destruction/obliterate.c",
        "/guilds/wrathguard/destruction/annihilation.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Destruction Magic");
    Description("This research tree provides raw destructive magical power, "
        "channeling Seilyndria's wrath into devastating attacks.");
    Source("Wrathguard");
    addResearchElement("/guilds/wrathguard/destruction/root.c");
    TreeRoot("/guilds/wrathguard/destruction/root.c");

    FirstLevel();
    SeventhLevel();
    ThirteenthLevel();
    TwentyFirstLevel();
    ThirtyFirstLevel();
}

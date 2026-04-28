//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/wrathguard/divine/gods-anger.c");
    addChild("/guilds/wrathguard/divine/gods-anger.c",
        "/guilds/wrathguard/divine/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/wrathguard/divine/smite-the-wicked.c");
    addChild("/guilds/wrathguard/divine/smite-the-wicked.c",
        "/guilds/wrathguard/divine/gods-anger.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement("/guilds/wrathguard/divine/cataclysm.c");
    addChild("/guilds/wrathguard/divine/cataclysm.c",
        "/guilds/wrathguard/divine/smite-the-wicked.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement("/guilds/wrathguard/divine/apocalypse.c");
    addChild("/guilds/wrathguard/divine/apocalypse.c",
        "/guilds/wrathguard/divine/cataclysm.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement("/guilds/wrathguard/divine/wrath-incarnate.c");
    addChild("/guilds/wrathguard/divine/wrath-incarnate.c",
        "/guilds/wrathguard/divine/apocalypse.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Divine Wrath");
    Description("This research tree represents the pinnacle of wrathful divine power, "
        "with ultimate destructive abilities that call upon Seilyndria's full fury.");
    Source("Wrathguard");
    addResearchElement("/guilds/wrathguard/divine/root.c");
    TreeRoot("/guilds/wrathguard/divine/root.c");

    FirstLevel();
    EleventhLevel();
    TwentyFirstLevel();
    ThirtyThirdLevel();
    FortyNinthLevel();
}

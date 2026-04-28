//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/wrathguard/zealot/fanaticism.c");
    addChild("/guilds/wrathguard/zealot/fanaticism.c",
        "/guilds/wrathguard/zealot/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/wrathguard/zealot/martyrdom.c");
    addChild("/guilds/wrathguard/zealot/martyrdom.c",
        "/guilds/wrathguard/zealot/fanaticism.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/wrathguard/zealot/zealous-fervor.c");
    addChild("/guilds/wrathguard/zealot/zealous-fervor.c",
        "/guilds/wrathguard/zealot/martyrdom.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFirstLevel()
{
    addResearchElement("/guilds/wrathguard/zealot/sacrificial-power.c");
    addChild("/guilds/wrathguard/zealot/sacrificial-power.c",
        "/guilds/wrathguard/zealot/zealous-fervor.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFifthLevel()
{
    addResearchElement("/guilds/wrathguard/zealot/ultimate-devotion.c");
    addChild("/guilds/wrathguard/zealot/ultimate-devotion.c",
        "/guilds/wrathguard/zealot/sacrificial-power.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Zealot");
    Description("This research tree represents fanatical devotion to Seilyndria, "
        "granting powerful buffs and sacrificial abilities.");
    Source("Wrathguard");
    addResearchElement("/guilds/wrathguard/zealot/root.c");
    TreeRoot("/guilds/wrathguard/zealot/root.c");

    FirstLevel();
    NinthLevel();
    NineteenthLevel();
    ThirtyFirstLevel();
    FortyFifthLevel();
}

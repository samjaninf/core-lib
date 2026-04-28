//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/wrathguard/combat/mace-training.c");
    addChild("/guilds/wrathguard/combat/mace-training.c",
        "/guilds/wrathguard/combat/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement("/guilds/wrathguard/combat/smiting-strike.c");
    addChild("/guilds/wrathguard/combat/smiting-strike.c",
        "/guilds/wrathguard/combat/mace-training.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/wrathguard/combat/divine-warrior.c");
    addChild("/guilds/wrathguard/combat/divine-warrior.c",
        "/guilds/wrathguard/combat/smiting-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/wrathguard/combat/wrathful-blows.c");
    addChild("/guilds/wrathguard/combat/wrathful-blows.c",
        "/guilds/wrathguard/combat/divine-warrior.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/wrathguard/combat/battle-priest.c");
    addChild("/guilds/wrathguard/combat/battle-priest.c",
        "/guilds/wrathguard/combat/wrathful-blows.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Combat Priest");
    Description("This research tree provides melee combat abilities for priests, "
        "allowing them to fight in close quarters while channeling divine power.");
    Source("Wrathguard");
    addResearchElement("/guilds/wrathguard/combat/root.c");
    TreeRoot("/guilds/wrathguard/combat/root.c");

    FirstLevel();
    FifthLevel();
    EleventhLevel();
    NineteenthLevel();
    TwentyNinthLevel();
}

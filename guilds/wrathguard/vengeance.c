//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/wrathguard/vengeance/retribution.c");
    addChild("/guilds/wrathguard/vengeance/retribution.c",
        "/guilds/wrathguard/vengeance/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/wrathguard/vengeance/eye-for-eye.c");
    addChild("/guilds/wrathguard/vengeance/eye-for-eye.c",
        "/guilds/wrathguard/vengeance/retribution.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/wrathguard/vengeance/vengeful-strike.c");
    addChild("/guilds/wrathguard/vengeance/vengeful-strike.c",
        "/guilds/wrathguard/vengeance/eye-for-eye.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/wrathguard/vengeance/wrath-aura.c");
    addChild("/guilds/wrathguard/vengeance/wrath-aura.c",
        "/guilds/wrathguard/vengeance/vengeful-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/wrathguard/vengeance/divine-retribution.c");
    addChild("/guilds/wrathguard/vengeance/divine-retribution.c",
        "/guilds/wrathguard/vengeance/wrath-aura.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Vengeance");
    Description("This research tree focuses on retribution and vengeance, "
        "with abilities that punish attackers and avenge fallen allies.");
    Source("Wrathguard");
    addResearchElement("/guilds/wrathguard/vengeance/root.c");
    TreeRoot("/guilds/wrathguard/vengeance/root.c");

    ThirdLevel();
    EleventhLevel();
    NineteenthLevel();
    TwentyNinthLevel();
    FortyFirstLevel();
}

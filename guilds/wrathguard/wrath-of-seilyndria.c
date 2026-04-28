//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/wrathguard/wrath/seilyndrias-fury.c");
    addChild("/guilds/wrathguard/wrath/seilyndrias-fury.c",
        "/guilds/wrathguard/wrath/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/wrathguard/wrath/divine-punishment.c");
    addChild("/guilds/wrathguard/wrath/divine-punishment.c",
        "/guilds/wrathguard/wrath/seilyndrias-fury.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/wrathguard/wrath/wrathful-presence.c");
    addChild("/guilds/wrathguard/wrath/wrathful-presence.c",
        "/guilds/wrathguard/wrath/divine-punishment.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/wrathguard/wrath/avatar-of-wrath.c");
    addChild("/guilds/wrathguard/wrath/avatar-of-wrath.c",
        "/guilds/wrathguard/wrath/wrathful-presence.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/wrathguard/wrath/goddess-rage.c");
    addChild("/guilds/wrathguard/wrath/goddess-rage.c",
        "/guilds/wrathguard/wrath/avatar-of-wrath.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Wrath of Seilyndria");
    Description("This research tree channels the goddess Seilyndria's divine fury, "
        "granting abilities that embody her wrathful nature.");
    Source("Wrathguard");
    addResearchElement("/guilds/wrathguard/wrath/root.c");
    TreeRoot("/guilds/wrathguard/wrath/root.c");

    ThirdLevel();
    NinthLevel();
    FifteenthLevel();
    TwentyFifthLevel();
    ThirtySeventhLevel();
}

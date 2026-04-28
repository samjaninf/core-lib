//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/wrathguard/fury/rage.c");
    addChild("/guilds/wrathguard/fury/rage.c",
        "/guilds/wrathguard/fury/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/wrathguard/fury/berserk.c");
    addChild("/guilds/wrathguard/fury/berserk.c",
        "/guilds/wrathguard/fury/rage.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/wrathguard/fury/reckless-fury.c");
    addChild("/guilds/wrathguard/fury/reckless-fury.c",
        "/guilds/wrathguard/fury/berserk.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/wrathguard/fury/unstoppable-rage.c");
    addChild("/guilds/wrathguard/fury/unstoppable-rage.c",
        "/guilds/wrathguard/fury/reckless-fury.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement("/guilds/wrathguard/fury/apocalyptic-fury.c");
    addChild("/guilds/wrathguard/fury/apocalyptic-fury.c",
        "/guilds/wrathguard/fury/unstoppable-rage.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Fury");
    Description("This research tree embodies uncontrolled rage and fury, "
        "granting powerful but dangerous offensive abilities.");
    Source("Wrathguard");
    addResearchElement("/guilds/wrathguard/fury/root.c");
    TreeRoot("/guilds/wrathguard/fury/root.c");

    FirstLevel();
    NinthLevel();
    SeventeenthLevel();
    TwentySeventhLevel();
    ThirtyNinthLevel();
}

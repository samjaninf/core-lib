//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/ancestral-blessing.c");

    addChild("/guilds/runeskald/ancestral-might/ancestral-blessing.c",
        "/guilds/runeskald/ancestral-might/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/ancestral-wrath.c");

    addChild("/guilds/runeskald/ancestral-might/ancestral-wrath.c",
        "/guilds/runeskald/ancestral-might/ancestral-blessing.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/war-mantle.c");

    addChild("/guilds/runeskald/ancestral-might/war-mantle.c",
        "/guilds/runeskald/ancestral-might/ancestral-wrath.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Ancestral Might");
    Source("Runeskald Guild");
    Description("This tree covers the runeskaldic ancestral tradition: "
        "invoking the blessings and wraths of fallen forebears, wearing "
        "spiritual war mantles, and drawing legendary power from the dead.");

    addResearchElement("/guilds/runeskald/ancestral-might/root.c");
    TreeRoot("/guilds/runeskald/ancestral-might/root.c");

    FirstLevel();
    FifthLevel();
    ThirteenthLevel();
}

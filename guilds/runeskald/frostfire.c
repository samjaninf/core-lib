//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/glacial-brand.c");
    addResearchElement("/guilds/runeskald/frostfire/runic-flame.c");

    addChild("/guilds/runeskald/frostfire/glacial-brand.c",
        "/guilds/runeskald/frostfire/root.c");
    addChild("/guilds/runeskald/frostfire/runic-flame.c",
        "/guilds/runeskald/frostfire/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/frostfire-burst.c");

    addChild("/guilds/runeskald/frostfire/frostfire-burst.c",
        "/guilds/runeskald/frostfire/glacial-brand.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/frostfire-aura.c");

    addChild("/guilds/runeskald/frostfire/frostfire-aura.c",
        "/guilds/runeskald/frostfire/frostfire-burst.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Frostfire");
    Source("Runeskald Guild");
    Description("This tree covers the runeskaldic frostfire tradition: "
        "glacial ice bolts, runic fire bolts, combined frostfire explosions, "
        "and a sustained frostfire aura that burns back those who strike the runeskald.");

    addResearchElement("/guilds/runeskald/frostfire/root.c");
    TreeRoot("/guilds/runeskald/frostfire/root.c");

    FirstLevel();
    NinthLevel();
    ThirteenthLevel();
}

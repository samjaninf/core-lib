//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/runeskald/elder-runes/fuse-rune.c");

    addChild("/guilds/runeskald/elder-runes/fuse-rune.c",
        "/guilds/runeskald/elder-runes/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/runeskald/elder-runes/rune-burst.c");

    addChild("/guilds/runeskald/elder-runes/rune-burst.c",
        "/guilds/runeskald/elder-runes/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/runeskald/elder-runes/elder-rune-blast.c");

    addChild("/guilds/runeskald/elder-runes/elder-rune-blast.c",
        "/guilds/runeskald/elder-runes/rune-burst.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/runeskald/elder-runes/ancient-rune-nova.c");

    addChild("/guilds/runeskald/elder-runes/ancient-rune-nova.c",
        "/guilds/runeskald/elder-runes/elder-rune-blast.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Elder Runes");
    Source("Runeskald Guild");
    Description("This tree covers the ritual binding of runes into equipment "
        "and the channelling of rune energy as devastating elemental attacks.");

    addResearchElement("/guilds/runeskald/elder-runes/root.c");
    TreeRoot("/guilds/runeskald/elder-runes/root.c");

    FirstLevel();
    ThirdLevel();
    NinthLevel();
    NineteenthLevel();
}

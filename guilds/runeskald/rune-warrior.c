//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/runeskald/rune-warrior/rune-gripped-blade.c");
    addResearchElement("/guilds/runeskald/rune-warrior/rune-bound-axe.c");
    addResearchElement("/guilds/runeskald/rune-warrior/rune-struck-hammer.c");
    addResearchElement("/guilds/runeskald/rune-warrior/paint-rune-of-strength.c");
    addResearchElement("/guilds/runeskald/rune-warrior/paint-rune-of-iron.c");

    addChild("/guilds/runeskald/rune-warrior/rune-gripped-blade.c",
        "/guilds/runeskald/rune-warrior/root.c");
    addChild("/guilds/runeskald/rune-warrior/rune-bound-axe.c",
        "/guilds/runeskald/rune-warrior/root.c");
    addChild("/guilds/runeskald/rune-warrior/rune-struck-hammer.c",
        "/guilds/runeskald/rune-warrior/root.c");
    addChild("/guilds/runeskald/rune-warrior/paint-rune-of-strength.c",
        "/guilds/runeskald/rune-warrior/root.c");
    addChild("/guilds/runeskald/rune-warrior/paint-rune-of-iron.c",
        "/guilds/runeskald/rune-warrior/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement("/guilds/runeskald/rune-warrior/rune-strike.c");

    addChild("/guilds/runeskald/rune-warrior/rune-strike.c",
        "/guilds/runeskald/rune-warrior/paint-rune-of-strength.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/runeskald/rune-warrior/rune-cleave.c");

    addChild("/guilds/runeskald/rune-warrior/rune-cleave.c",
        "/guilds/runeskald/rune-warrior/rune-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Rune Warrior");
    Source("Runeskald Guild");
    Description("This tree covers the runeskaldic warrior tradition: "
        "painting runes on flesh and steel, delivering rune-enhanced "
        "weapon strikes, and sweeping rune-lit arcs through groups of foes.");

    addResearchElement("/guilds/runeskald/rune-warrior/root.c");
    TreeRoot("/guilds/runeskald/rune-warrior/root.c");

    FirstLevel();
    FifthLevel();
    NinthLevel();
}

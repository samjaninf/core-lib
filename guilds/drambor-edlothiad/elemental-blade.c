//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/elemental/flame-blade.c");
    addChild("/guilds/drambor-edlothiad/elemental/flame-blade.c",
        "/guilds/drambor-edlothiad/elemental/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/elemental/frost-blade.c");
    addChild("/guilds/drambor-edlothiad/elemental/frost-blade.c",
        "/guilds/drambor-edlothiad/elemental/flame-blade.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/elemental/shock-blade.c");
    addChild("/guilds/drambor-edlothiad/elemental/shock-blade.c",
        "/guilds/drambor-edlothiad/elemental/frost-blade.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/elemental/elemental-mastery.c");
    addChild("/guilds/drambor-edlothiad/elemental/elemental-mastery.c",
        "/guilds/drambor-edlothiad/elemental/shock-blade.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/elemental/primal-blade.c");
    addChild("/guilds/drambor-edlothiad/elemental/primal-blade.c",
        "/guilds/drambor-edlothiad/elemental/elemental-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Elemental Blade");
    Description("This research tree teaches how to infuse weapons with elemental "
        "energy, adding fire, ice, lightning, or other elements to attacks.");
    Source("Drambor Edlothiad");
    addResearchElement("/guilds/drambor-edlothiad/elemental/root.c");
    TreeRoot("/guilds/drambor-edlothiad/elemental/root.c");

    FirstLevel();
    SeventhLevel();
    FifteenthLevel();
    TwentyFifthLevel();
    ThirtySeventhLevel();
}

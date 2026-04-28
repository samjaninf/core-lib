//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/blade/spellblade.c");
    addChild("/guilds/drambor-edlothiad/blade/spellblade.c",
        "/guilds/drambor-edlothiad/blade/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/blade/arcane-strike.c");
    addChild("/guilds/drambor-edlothiad/blade/arcane-strike.c",
        "/guilds/drambor-edlothiad/blade/spellblade.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/blade/mystic-blade.c");
    addChild("/guilds/drambor-edlothiad/blade/mystic-blade.c",
        "/guilds/drambor-edlothiad/blade/arcane-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/blade/battlemage-supremacy.c");
    addChild("/guilds/drambor-edlothiad/blade/battlemage-supremacy.c",
        "/guilds/drambor-edlothiad/blade/mystic-blade.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/blade/perfect-fusion.c");
    addChild("/guilds/drambor-edlothiad/blade/perfect-fusion.c",
        "/guilds/drambor-edlothiad/blade/battlemage-supremacy.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Blade and Magic");
    Description("This research tree teaches the fundamental art of combining "
        "swordplay with spellcasting, the core technique of the elven battlemage.");
    Source("Drambor Edlothiad");
    addResearchElement("/guilds/drambor-edlothiad/blade/root.c");
    TreeRoot("/guilds/drambor-edlothiad/blade/root.c");

    FirstLevel();
    SeventhLevel();
    FifteenthLevel();
    TwentyFifthLevel();
    ThirtySeventhLevel();
}

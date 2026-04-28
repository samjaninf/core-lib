//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/defense/mana-shield.c");
    addChild("/guilds/drambor-edlothiad/defense/mana-shield.c",
        "/guilds/drambor-edlothiad/defense/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/defense/spell-ward.c");
    addChild("/guilds/drambor-edlothiad/defense/spell-ward.c",
        "/guilds/drambor-edlothiad/defense/mana-shield.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/defense/mystic-barrier.c");
    addChild("/guilds/drambor-edlothiad/defense/mystic-barrier.c",
        "/guilds/drambor-edlothiad/defense/spell-ward.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/defense/arcane-aegis.c");
    addChild("/guilds/drambor-edlothiad/defense/arcane-aegis.c",
        "/guilds/drambor-edlothiad/defense/mystic-barrier.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/defense/invulnerability.c");
    addChild("/guilds/drambor-edlothiad/defense/invulnerability.c",
        "/guilds/drambor-edlothiad/defense/arcane-aegis.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Mystical Defense");
    Description("This research tree provides magical defensive techniques, "
        "including wards, shields, and protective enchantments.");
    Source("Drambor Edlothiad");
    addResearchElement("/guilds/drambor-edlothiad/defense/root.c");
    TreeRoot("/guilds/drambor-edlothiad/defense/root.c");

    ThirdLevel();
    NinthLevel();
    SeventeenthLevel();
    TwentySeventhLevel();
    FortyFirstLevel();
}

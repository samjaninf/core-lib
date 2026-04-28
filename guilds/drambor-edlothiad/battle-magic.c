//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/battle/magic-missile.c");
    addChild("/guilds/drambor-edlothiad/battle/magic-missile.c",
        "/guilds/drambor-edlothiad/battle/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/battle/chain-lightning.c");
    addChild("/guilds/drambor-edlothiad/battle/chain-lightning.c",
        "/guilds/drambor-edlothiad/battle/magic-missile.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/battle/war-magic.c");
    addChild("/guilds/drambor-edlothiad/battle/war-magic.c",
        "/guilds/drambor-edlothiad/battle/chain-lightning.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/battle/arcane-barrage.c");
    addChild("/guilds/drambor-edlothiad/battle/arcane-barrage.c",
        "/guilds/drambor-edlothiad/battle/war-magic.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/battle/meteor-storm.c");
    addChild("/guilds/drambor-edlothiad/battle/meteor-storm.c",
        "/guilds/drambor-edlothiad/battle/arcane-barrage.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Battle Magic");
    Description("This research tree focuses on combat-oriented spells designed "
        "for use in the heat of battle.");
    Source("Drambor Edlothiad");
    addResearchElement("/guilds/drambor-edlothiad/battle/root.c");
    TreeRoot("/guilds/drambor-edlothiad/battle/root.c");

    FirstLevel();
    NinthLevel();
    SeventeenthLevel();
    TwentySeventhLevel();
    ThirtyNinthLevel();
}

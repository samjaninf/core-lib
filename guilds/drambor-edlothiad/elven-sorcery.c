//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/sorcery/starlight.c");
    addChild("/guilds/drambor-edlothiad/sorcery/starlight.c",
        "/guilds/drambor-edlothiad/sorcery/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/sorcery/moonbeam.c");
    addChild("/guilds/drambor-edlothiad/sorcery/moonbeam.c",
        "/guilds/drambor-edlothiad/sorcery/starlight.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/sorcery/ancient-power.c");
    addChild("/guilds/drambor-edlothiad/sorcery/ancient-power.c",
        "/guilds/drambor-edlothiad/sorcery/moonbeam.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/sorcery/timeless-magic.c");
    addChild("/guilds/drambor-edlothiad/sorcery/timeless-magic.c",
        "/guilds/drambor-edlothiad/sorcery/ancient-power.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/sorcery/elder-magic.c");
    addChild("/guilds/drambor-edlothiad/sorcery/elder-magic.c",
        "/guilds/drambor-edlothiad/sorcery/timeless-magic.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Elven Sorcery");
    Description("This research tree provides ancient elven magical techniques, "
        "refined over millennia in the forests of Hillgarath.");
    Source("Drambor Edlothiad");
    addResearchElement("/guilds/drambor-edlothiad/sorcery/root.c");
    TreeRoot("/guilds/drambor-edlothiad/sorcery/root.c");

    ThirdLevel();
    NinthLevel();
    SeventeenthLevel();
    TwentySeventhLevel();
    FortyFirstLevel();
}

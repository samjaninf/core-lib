//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/heritage/elven-grace.c");
    addChild("/guilds/drambor-edlothiad/heritage/elven-grace.c",
        "/guilds/drambor-edlothiad/heritage/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/heritage/timeless-wisdom.c");
    addChild("/guilds/drambor-edlothiad/heritage/timeless-wisdom.c",
        "/guilds/drambor-edlothiad/heritage/elven-grace.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/heritage/fey-ancestry.c");
    addChild("/guilds/drambor-edlothiad/heritage/fey-ancestry.c",
        "/guilds/drambor-edlothiad/heritage/timeless-wisdom.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/heritage/immortal-heritage.c");
    addChild("/guilds/drambor-edlothiad/heritage/immortal-heritage.c",
        "/guilds/drambor-edlothiad/heritage/fey-ancestry.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/heritage/elder-blood.c");
    addChild("/guilds/drambor-edlothiad/heritage/elder-blood.c",
        "/guilds/drambor-edlothiad/heritage/immortal-heritage.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Elven Heritage");
    Description("This research tree draws upon the ancient heritage of the elves, "
        "granting passive bonuses and abilities tied to elven nature and longevity.");
    Source("Drambor Edlothiad");
    addResearchElement("/guilds/drambor-edlothiad/heritage/root.c");
    TreeRoot("/guilds/drambor-edlothiad/heritage/root.c");

    FirstLevel();
    EleventhLevel();
    TwentyFirstLevel();
    ThirtyThirdLevel();
    FortyNinthLevel();
}

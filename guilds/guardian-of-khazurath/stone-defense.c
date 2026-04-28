//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/defense/stone-skin.c");
    addChild("/guilds/guardian-of-khazurath/defense/stone-skin.c",
        "/guilds/guardian-of-khazurath/defense/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/defense/granite-defense.c");
    addChild("/guilds/guardian-of-khazurath/defense/granite-defense.c",
        "/guilds/guardian-of-khazurath/defense/stone-skin.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/defense/mountain-shield.c");
    addChild("/guilds/guardian-of-khazurath/defense/mountain-shield.c",
        "/guilds/guardian-of-khazurath/defense/granite-defense.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/defense/impenetrable-stone.c");
    addChild("/guilds/guardian-of-khazurath/defense/impenetrable-stone.c",
        "/guilds/guardian-of-khazurath/defense/mountain-shield.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/defense/fortress.c");
    addChild("/guilds/guardian-of-khazurath/defense/fortress.c",
        "/guilds/guardian-of-khazurath/defense/impenetrable-stone.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Stone Defense");
    Description("This research tree teaches defensive techniques inspired by stone, "
        "granting incredible durability and resistance.");
    Source("Guardian of Khazurath");
    addResearchElement("/guilds/guardian-of-khazurath/defense/root.c");
    TreeRoot("/guilds/guardian-of-khazurath/defense/root.c");

    FirstLevel();
    SeventhLevel();
    FifteenthLevel();
    TwentyFifthLevel();
    ThirtySeventhLevel();
}

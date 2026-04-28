//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/axe/cleave.c");
    addChild("/guilds/guardian-of-khazurath/axe/cleave.c",
        "/guilds/guardian-of-khazurath/axe/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/axe/mighty-swing.c");
    addChild("/guilds/guardian-of-khazurath/axe/mighty-swing.c",
        "/guilds/guardian-of-khazurath/axe/cleave.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/axe/devastating-blow.c");
    addChild("/guilds/guardian-of-khazurath/axe/devastating-blow.c",
        "/guilds/guardian-of-khazurath/axe/mighty-swing.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/axe/whirlwind-axes.c");
    addChild("/guilds/guardian-of-khazurath/axe/whirlwind-axes.c",
        "/guilds/guardian-of-khazurath/axe/devastating-blow.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/axe/dwarven-berserker.c");
    addChild("/guilds/guardian-of-khazurath/axe/dwarven-berserker.c",
        "/guilds/guardian-of-khazurath/axe/whirlwind-axes.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Axe Mastery");
    Description("This research tree provides mastery of the axe, "
        "the traditional weapon of dwarven warriors.");
    Source("Guardian of Khazurath");
    addResearchElement("/guilds/guardian-of-khazurath/axe/root.c");
    TreeRoot("/guilds/guardian-of-khazurath/axe/root.c");

    FirstLevel();
    SeventhLevel();
    FifteenthLevel();
    TwentyFifthLevel();
    ThirtySeventhLevel();
}

//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/resilience/hardy.c");
    addChild("/guilds/guardian-of-khazurath/resilience/hardy.c",
        "/guilds/guardian-of-khazurath/resilience/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/resilience/iron-constitution.c");
    addChild("/guilds/guardian-of-khazurath/resilience/iron-constitution.c",
        "/guilds/guardian-of-khazurath/resilience/hardy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/resilience/enduring.c");
    addChild("/guilds/guardian-of-khazurath/resilience/enduring.c",
        "/guilds/guardian-of-khazurath/resilience/iron-constitution.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/resilience/indomitable.c");
    addChild("/guilds/guardian-of-khazurath/resilience/indomitable.c",
        "/guilds/guardian-of-khazurath/resilience/enduring.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/resilience/immortal-fortress.c");
    addChild("/guilds/guardian-of-khazurath/resilience/immortal-fortress.c",
        "/guilds/guardian-of-khazurath/resilience/indomitable.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Dwarven Resilience");
    Description("This research tree embodies the legendary resilience of the dwarves, "
        "granting resistance to damage and harmful effects.");
    Source("Guardian of Khazurath");
    addResearchElement("/guilds/guardian-of-khazurath/resilience/root.c");
    TreeRoot("/guilds/guardian-of-khazurath/resilience/root.c");

    FirstLevel();
    NinthLevel();
    SeventeenthLevel();
    TwentySeventhLevel();
    ThirtyNinthLevel();
}

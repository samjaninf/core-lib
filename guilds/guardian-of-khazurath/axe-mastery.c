//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Axe Mastery");
    Description("This research tree provides mastery of the axe, "
        "the traditional weapon of dwarven warriors.");
    Source("Guardian of Khazurath");
    addResearchElement("/guilds/guardian-of-khazurath/axe/root.c");
    TreeRoot("/guilds/guardian-of-khazurath/axe/root.c");
}

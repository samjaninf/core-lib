//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Axe Mastery");
    addSpecification("source", "Guardian of Khazurath");
    addSpecification("description", "The dwarven affinity for the axe runs in the "
        "blood. From the moment a young dwarf can lift one, they begin to learn its "
        "weight, its balance, and the rhythm of cleaving stone and bone. This research "
        "tree represents the path of axe mastery passed down through Khazurath's "
        "weaponmasters since the founding.");
    addSpecification("scope", "self");
    addSpecification("research type", "tree root");

    addSpecification("bonus axe", 1);
    addSpecification("bonus great axe", 1);
}
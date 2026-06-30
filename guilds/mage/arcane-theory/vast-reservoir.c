//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Vast Reservoir");
    addSpecification("source", "mage");
    addSpecification("description", "The mage's arcane reservoir becomes vast.");

    addPrerequisite("level",
        (["type": "level", "guild": "mage", "value": 39]));
    addPrerequisite("/guilds/mage/arcane-theory/arcane-stamina.c",
        (["type": "research"]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus spell points", 50);
}
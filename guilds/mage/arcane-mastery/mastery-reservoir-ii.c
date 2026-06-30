//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Mastery Reservoir II");
    addSpecification("source", "mage");
    addSpecification("description", "The master mage's arcane reservoir becomes vast.");

    addPrerequisite("level",
        (["type": "level", "guild": "mage", "value": 50]));
    addPrerequisite("/guilds/mage/arcane-mastery/mastery-wisdom.c",
        (["type": "research"]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus spell points", 80);
}
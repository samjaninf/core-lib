//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Arcane Wisdom");
    addSpecification("source", "mage");
    addSpecification("description", "The mage's wisdom deepens through long arcane study.");

    addPrerequisite("level",
        (["type": "level", "guild": "mage", "value": 43]));
    addPrerequisite("/guilds/mage/arcane-theory/arcane-brilliance.c",
        (["type": "research"]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus wisdom", 2);
}
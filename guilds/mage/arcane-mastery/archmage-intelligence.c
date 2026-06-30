//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Archmage Intelligence");
    addSpecification("source", "mage");
    addSpecification("description", "The archmage's intelligence is raised to its pinnacle.");

    addPrerequisite("level",
        (["type": "level", "guild": "mage", "value": 70]));
    addPrerequisite("/guilds/mage/arcane-mastery/archmage-reservoir.c",
        (["type": "research"]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus intelligence", 3);
}
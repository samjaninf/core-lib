//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Arcane Reservoir V");
    addSpecification("source", "mage");
    addSpecification("description", "The mage's arcane reservoir becomes enormous.");

    addPrerequisite("level",
        (["type": "level", "guild": "mage", "value": 56]));
    addPrerequisite("/guilds/mage/higher-arcana/masterful-attunement.c",
        (["type": "research"]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus spell points", 80);
}
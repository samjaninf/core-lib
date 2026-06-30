//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Arcane Depth");
    addSpecification("source", "mage");
    addSpecification("description", "The mage's arcane depth expands through higher study.");

    addPrerequisite("level",
        (["type": "level", "guild": "mage", "value": 33]));
    addPrerequisite("/guilds/mage/higher-arcana/higher-stamina.c",
        (["type": "research"]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus spell points", 30);
}
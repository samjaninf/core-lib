//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Greater Constitution");
    addSpecification("source", "mage");
    addSpecification("description", "Higher arcana further toughens the mage's body.");

    addPrerequisite("level",
        (["type": "level", "guild": "mage", "value": 36]));
    addPrerequisite("/guilds/mage/higher-arcana/higher-endurance.c",
        (["type": "research"]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus hit points", 40);
}
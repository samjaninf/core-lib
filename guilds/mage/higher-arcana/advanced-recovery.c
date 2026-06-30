//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Advanced Recovery");
    addSpecification("source", "mage");
    addSpecification("description", "The mage recovers magical energy at an advanced rate.");

    addPrerequisite("level",
        (["type": "level", "guild": "mage", "value": 44]));
    addPrerequisite("/guilds/mage/higher-arcana/higher-wisdom.c",
        (["type": "research"]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus heal spell points rate", 4);
}
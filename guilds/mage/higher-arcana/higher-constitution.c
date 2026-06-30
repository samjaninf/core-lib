//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Higher Constitution");
    addSpecification("source", "mage");
    addSpecification("description", "The rigors of higher arcana harden the mage's constitution.");

    addPrerequisite("level",
        (["type": "level", "guild": "mage", "value": 26]));
    addPrerequisite("/guilds/mage/higher-arcana/higher-attunement.c",
        (["type": "research"]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus constitution", 1);
}
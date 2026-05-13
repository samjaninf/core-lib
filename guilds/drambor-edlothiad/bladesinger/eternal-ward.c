//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Eternal Ward");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research creates an eternal ward of harmonic energy.");

    addPrerequisite("/guilds/drambor-edlothiad/bladesinger/unbreakable-song.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 49]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus defense", 8);
    addSpecification("bonus armor class", 6);
    addSpecification("bonus dodge", 5);
}
//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Avatar of Grace");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research becomes the living embodiment of elven grace.");

    addPrerequisite("/guilds/drambor-edlothiad/heritage/transcendent-grace.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 61]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus dodge", 8);
    addSpecification("bonus dexterity", 4);
    addSpecification("bonus attack", 5);
}
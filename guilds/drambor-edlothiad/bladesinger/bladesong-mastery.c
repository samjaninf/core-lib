//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Bladesong Mastery");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research represents true mastery of the bladesong art.");

    addPrerequisite("/guilds/drambor-edlothiad/bladesinger/bladesong-of-the-ancients.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 25]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus attack", 4);
    addSpecification("bonus damage", 3);
    addSpecification("bonus long sword", 5);
}
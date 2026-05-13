//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Transcendent Grace");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research transcends mortal physical limitations.");

    addPrerequisite("/guilds/drambor-edlothiad/heritage/perfection-of-form.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 49]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus dodge", 6);
    addSpecification("bonus dexterity", 3);
    addSpecification("bonus attack", 4);
}
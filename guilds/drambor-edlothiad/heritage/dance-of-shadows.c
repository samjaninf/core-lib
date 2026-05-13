//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Dance of Shadows");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research allows movement as silent as shadow.");

    addPrerequisite("/guilds/drambor-edlothiad/heritage/preternatural-grace.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 23]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus dodge", 3);
    addSpecification("bonus hide", 3);
    addSpecification("bonus move silently", 3);
}
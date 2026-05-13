//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/sustainedResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Moonlight Veil");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "A veil of moonlight that conceals and protects.");
    addPrerequisite("/guilds/drambor-edlothiad/sorcery/elven-ward.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 7]));
    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 35);
    addSpecification("cooldown", 30);
    addSpecification("bonus defense", 3);
    addSpecification("bonus dodge", 2);
    addSpecification("command template", "moonlight veil");
    addSpecification("use ability activate message", "A shimmering veil of "
        "moonlight wraps around ##InitiatorName##.");
    addSpecification("use ability deactivate message", "The moonlight veil fades.");
}

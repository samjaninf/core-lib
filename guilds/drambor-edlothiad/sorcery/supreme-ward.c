//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/sustainedResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Supreme Elven Ward");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "The supreme elven ward, offering extraordinary protection.");
    addPrerequisite("/guilds/drambor-edlothiad/sorcery/eternal-ward.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 37]));
    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 120);
    addSpecification("cooldown", 90);
    addSpecification("bonus resist magical", 20);
    addSpecification("bonus resist evil", 15);
    addSpecification("bonus resist undead", 15);
    addSpecification("bonus defense", 12);
    addSpecification("bonus hit points", 75);
    addSpecification("command template", "supreme elven ward");
    addSpecification("use ability activate message", "A supreme ward of ancient "
        "elven power envelops ##InitiatorName##.");
    addSpecification("use ability deactivate message", "The supreme ward fades.");
}

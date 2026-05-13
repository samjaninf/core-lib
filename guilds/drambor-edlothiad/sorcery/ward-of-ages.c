//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/sustainedResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Ward of Ages");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "The ultimate elven protective ward.");
    addPrerequisite("/guilds/drambor-edlothiad/sorcery/supreme-ward.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 49]));
    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 150);
    addSpecification("cooldown", 120);
    addSpecification("bonus resist magical", 25);
    addSpecification("bonus resist evil", 20);
    addSpecification("bonus defense", 15);
    addSpecification("bonus hit points", 100);
    addSpecification("command template", "ward of ages");
    addSpecification("use ability activate message", "The Ward of Ages manifests "
        "around ##InitiatorName##, an impenetrable bastion of ancient protection.");
    addSpecification("use ability deactivate message", "The Ward of Ages crumbles.");
}

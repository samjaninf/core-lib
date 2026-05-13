//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/sustainedResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Star Shield");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "A shield of stellar energy.");
    addPrerequisite("/guilds/drambor-edlothiad/sorcery/moonlight-veil.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 13]));
    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 55);
    addSpecification("cooldown", 45);
    addSpecification("bonus defense", 5);
    addSpecification("bonus resist magical", 5);
    addSpecification("bonus dodge", 3);
    addSpecification("command template", "star shield");
    addSpecification("use ability activate message", "A shield of stellar "
        "energy coalesces around ##InitiatorName##.");
    addSpecification("use ability deactivate message", "The star shield fades.");
}

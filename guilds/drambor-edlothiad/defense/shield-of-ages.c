//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/sustainedResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Shield of Ages");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches the "
        "Shield of Ages defensive ward, providing substantial magical and physical protection.");

    addPrerequisite("/guilds/drambor-edlothiad/defense/arcane-aegis.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 27]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 100);
    addSpecification("stamina point cost", 50);
    addSpecification("cooldown", 60);
    addSpecification("bonus defense", 15);
    addSpecification("bonus resist magical", 12);

    addSpecification("command template", "shield of ages");
    addSpecification("use ability activate message", "A Shield of Ages "
        "materializes around ##InitiatorName##.");
    addSpecification("use ability deactivate message", "The Shield of Ages fades.");
}

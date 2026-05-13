//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/sustainedResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Eternal Ward");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "A ward drawing on eternal elven magic.");
    addPrerequisite("/guilds/drambor-edlothiad/sorcery/timeless-ward.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 25]));
    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 90);
    addSpecification("cooldown", 75);
    addSpecification("bonus resist magical", 15);
    addSpecification("bonus resist evil", 10);
    addSpecification("bonus resist undead", 10);
    addSpecification("bonus defense", 8);
    addSpecification("bonus hit points", 50);
    addSpecification("command template", "eternal ward");
    addSpecification("use ability activate message", "Runes of eternal power "
        "blaze around ##InitiatorName##, forming an unbreakable ward.");
    addSpecification("use ability deactivate message", "The eternal ward dissipates.");
}

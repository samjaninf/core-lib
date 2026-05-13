//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/sustainedResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Storm Conduit");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research represents the pinnacle of "
        "electrical blade mastery. The battlemage becomes a living conduit "
        "for storm energy, their blade a focus for devastating lightning.");

    addPrerequisite("/guilds/drambor-edlothiad/elemental/thunderstrike.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 47]));

    addSpecification("limited by", (["equipment": ({ "long sword",
        "hand and a half sword", "two-handed sword", "short sword", "dagger" }) ]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 100);
    addSpecification("stamina point cost", 50);
    addSpecification("cooldown", 90);
    addSpecification("bonus electricity enchantment", 15);
    addSpecification("bonus electricity attack", 15);
    addSpecification("bonus damage", 8);

    addSpecification("command template", "storm conduit");
    addSpecification("use ability activate message", "##InitiatorName## "
        "##Infinitive::become## a living conduit for storm energy as lightning "
        "engulfs ##InitiatorPossessive## blade in a continuous torrent.");
    addSpecification("use ability deactivate message", "The storm conduit "
        "releases its grip on ##InitiatorPossessive## blade.");
}

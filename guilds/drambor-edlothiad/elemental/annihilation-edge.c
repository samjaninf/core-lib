//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/sustainedResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Annihilation Edge");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research represents mastery of pure "
        "energy blade techniques. The battlemage sustains an enchantment "
        "of devastating arcane force that unmakes matter on contact.");

    addPrerequisite("/guilds/drambor-edlothiad/elemental/resonance-blade.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 53]));

    addSpecification("limited by", (["equipment": ({ "long sword",
        "hand and a half sword", "two-handed sword", "short sword", "dagger" }) ]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 100);
    addSpecification("stamina point cost", 50);
    addSpecification("cooldown", 90);
    addSpecification("bonus energy enchantment", 15);
    addSpecification("bonus energy attack", 15);
    addSpecification("bonus damage", 8);

    addSpecification("command template", "annihilation edge");
    addSpecification("use ability activate message", "##InitiatorPossessive::Name## "
        "blade pulses with annihilating force, reality warping around its edge.");
    addSpecification("use ability deactivate message", "The annihilation "
        "enchantment fades from ##InitiatorPossessive## blade.");
}

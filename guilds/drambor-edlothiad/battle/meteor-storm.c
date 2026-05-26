//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Meteor Storm");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches the meteor storm "
        "spell,  calling down a rain of flaming meteors from the sky.");
    addPrerequisite(
        "/guilds/drambor-edlothiad/battle/inferno.c",
        (["type": "research"]));
    addPrerequisite("level",
        (["type": "level",
            "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c",
            "value": 33
        ]));
    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 130);
    addSpecification("cooldown", 45);
    addSpecification("duration", 4);
    addSpecification("damage type", "fire");
    addSpecification("bonus fire attack", 30);
    addSpecification("bonus energy attack", 10);
    addSpecification("modifiers", ({
        (["type": "research",
            "research item": 
                "/guilds/drambor-edlothiad/battle/spell-penetration.c",
            "name": "spell-penetration",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25]),
        (["type": "research",
            "research item": 
                "/guilds/drambor-edlothiad/battle/spell-penetration-mastery.c",
            "name": "spell-penetration-mastery",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25]),
        (["type": "skill",
            "name": "spellcraft",
            "formula": "logarithmic",
            "rate": 1.75]),
        (["type": "skill",
            "name": "elemental fire",
            "formula": "additive",
            "rate": 0.15]),
        (["type": "level",
            "name": "level",
            "formula": "logarithmic",
            "rate": 1.20]),
        (["type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.10]),
    }));
    addSpecification("command template", "meteor storm");
    addSpecification("use ability message", "##InitiatorName## "
        "##Infinitive::call## down a devastating rain of flaming meteors.");
}
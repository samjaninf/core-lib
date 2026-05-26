//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Absolute Cold");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches the absolute cold "
        "spell,  flash-freezing a target to near absolute zero.");
    addPrerequisite(
        "/guilds/drambor-edlothiad/battle/glacial-cascade.c",
        (["type": "research"]));
    addPrerequisite("level",
        (["type": "level",
            "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c",
            "value": 35
        ]));
    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 120);
    addSpecification("cooldown", 40);
    addSpecification("duration", 4);
    addSpecification("damage type", "cold");
    addSpecification("bonus cold attack", 30);
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
            "name": "elemental water",
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
    addSpecification("command template", "absolute cold");
    addSpecification("use ability message", "##InitiatorName## "
        "##Infinitive::flash## ##TargetName## with absolute cold, frost "
        "crystallizing instantly across their form.");
}
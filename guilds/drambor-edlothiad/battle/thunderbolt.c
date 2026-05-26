//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Thunderbolt");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches a massive "
        "thunderbolt  that strikes with devastating electrical force.");
    addPrerequisite(
        "/guilds/drambor-edlothiad/battle/tempest.c",
        (["type": "research"]));
    addPrerequisite("level",
        (["type": "level",
            "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c",
            "value": 31
        ]));
    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 110);
    addSpecification("cooldown", 35);
    addSpecification("duration", 4);
    addSpecification("damage type", "electricity");
    addSpecification("bonus electricity attack", 28);
    addSpecification("modifiers", ({
        (["type": "research",
            "research item": 
                "/guilds/drambor-edlothiad/battle/spell-penetration.c",
            "name": "spell-penetration",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25]),
        (["type": "skill",
            "name": "spellcraft",
            "formula": "logarithmic",
            "rate": 1.75]),
        (["type": "skill",
            "name": "elemental air",
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
    addSpecification("command template", "thunderbolt");
    addSpecification("use ability message", "A massive thunderbolt crashes "
        "down upon ##TargetName## with devastating force.");
}
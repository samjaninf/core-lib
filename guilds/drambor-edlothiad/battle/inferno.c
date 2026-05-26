//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Inferno");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches a devastating "
        "wall of fire that engulfs the battlefield.");
    addPrerequisite(
        "/guilds/drambor-edlothiad/battle/fireball.c",
        (["type": "research"]));
    addPrerequisite("level",
        (["type": "level",
            "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c",
            "value": 23
        ]));
    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 90);
    addSpecification("cooldown", 30);
    addSpecification("duration", 4);
    addSpecification("damage type", "fire");
    addSpecification("bonus fire attack", 20);
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
            "rate": 1.50]),
        (["type": "skill",
            "name": "elemental fire",
            "formula": "additive",
            "rate": 0.15]),
        (["type": "level",
            "name": "level",
            "formula": "logarithmic",
            "rate": 1.15]),
        (["type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.08]),
    }));
    addSpecification("command template", "inferno");
    addSpecification("use ability message", "##InitiatorName## "
        "##Infinitive::summon## a devastating inferno that engulfs the "
            "area.");
}
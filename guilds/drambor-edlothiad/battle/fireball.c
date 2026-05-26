//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Fireball");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches the classic "
        "fireball  spell, hurling a ball of explosive flame.");
    addPrerequisite(
        "/guilds/drambor-edlothiad/battle/force-blast.c",
        (["type": "research"]));
    addPrerequisite("level",
        (["type": "level",
            "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c",
            "value": 11
        ]));
    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 50);
    addSpecification("cooldown", 15);
    addSpecification("duration", 4);
    addSpecification("damage type", "fire");
    addSpecification("bonus fire attack", 12);
    addSpecification("modifiers", ({
        (["type": "skill",
            "name": "spellcraft",
            "formula": "logarithmic",
            "rate": 1.25]),
        (["type": "skill",
            "name": "elemental fire",
            "formula": "additive",
            "rate": 0.10]),
        (["type": "level",
            "name": "level",
            "formula": "logarithmic",
            "rate": 1.10]),
        (["type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.05]),
    }));
    addSpecification("command template", "fireball");
    addSpecification("use ability message", "##InitiatorName## "
        "##Infinitive::hurl## a roaring fireball that explodes among the "
            "enemy.");
}
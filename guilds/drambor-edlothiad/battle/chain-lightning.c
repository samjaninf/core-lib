//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Chain Lightning");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches the chain "
        "lightning  spell, an arc of electricity that leaps between "
            "enemies.");
    addPrerequisite(
        "/guilds/drambor-edlothiad/battle/magic-missile.c",
        (["type": "research"]));
    addPrerequisite("level",
        (["type": "level",
            "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c",
            "value": 9
        ]));
    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 55);
    addSpecification("cooldown", 20);
    addSpecification("duration", 4);
    addSpecification("damage type", "electricity");
    addSpecification("bonus electricity attack", 12);
    addSpecification("modifiers", ({
        (["type": "skill",
            "name": "spellcraft",
            "formula": "logarithmic",
            "rate": 1.25]),
        (["type": "skill",
            "name": "elemental air",
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
    addSpecification("command template", "chain lightning");
    addSpecification("use ability message", "Arcs of lightning leap from "
        "##InitiatorPossessive## fingertips, chaining between nearby "
            "enemies.");
}
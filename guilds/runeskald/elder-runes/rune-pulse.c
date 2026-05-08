//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Rune Pulse");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald releases a pulse of raw "
        "rune energy in all directions, striking all nearby enemies with "
        "a moderate burst of force.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 2]));
    addPrerequisite("/guilds/runeskald/elder-runes/rune-burst.c",
        (["type": "research"]));

    addSpecification("scope", "area of effect");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "rune pulse");
    addSpecification("use message",
        "##InitiatorName## ##Infinitive::unleash## a pulse of rune force that rattles everything nearby.");

    addSpecification("spell point cost", 20);
    addSpecification("stamina point cost", 10);

    addSpecification("damage hit points", ({
        ([
            "probability": 80,
            "base damage": 15,
            "range": 15
        ]),
        ([
            "probability": 20,
            "base damage": 30,
            "range": 25
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "additive",
            "rate": 0.08
        ]),
        ([
            "type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.04
        ])
    }));
}

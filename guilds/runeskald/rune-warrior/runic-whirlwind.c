//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Runic Whirlwind");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald spins in a devastating "
        "runic whirlwind, striking all adjacent enemies with their weapon.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 11]));
    addPrerequisite("/guilds/runeskald/rune-warrior/rune-cleave.c",
        (["type": "research"]));

    addSpecification("scope", "area of effect");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "runic whirlwind");
    addSpecification("use message",
        "##InitiatorName## ##Infinitive::spin## in a blazing runic whirlwind, weapon carving through all nearby foes.");

    addSpecification("spell point cost", 40);
    addSpecification("stamina point cost", 30);

    addSpecification("damage hit points", ({
        ([
            "probability": 75,
            "base damage": 35,
            "range": 35
        ]),
        ([
            "probability": 25,
            "base damage": 65,
            "range": 65
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "skill",
            "name": "long sword",
            "formula": "additive",
            "rate": 0.08
        ]),
        ([
            "type": "attribute",
            "name": "strength",
            "formula": "additive",
            "rate": 0.07
        ]),
        ([
            "type": "research",
            "research item": "/guilds/runeskald/rune-warrior/paint-rune-of-strength.c",
            "name": "Paint Rune of Strength",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ])
    }));
}

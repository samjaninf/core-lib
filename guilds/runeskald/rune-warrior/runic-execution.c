//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Runic Execution");
    addSpecification("source", "runeskald");
    addSpecification("description", "A devastating single blow that channels "
        "the full power of all active body runes into one precise strike.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 14]));
    addPrerequisite("/guilds/runeskald/rune-warrior/rune-flurry.c",
        (["type": "research"]));
    addPrerequisite("/guilds/runeskald/rune-warrior/paint-rune-of-devastation.c",
        (["type": "research"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "runic execution ##Target##");
    addSpecification("use ability message",
        "##InitiatorName## ##Infinitive::channel## every painted rune into one thunderous execution strike against ##TargetName##.");

    addSpecification("spell point cost", 35);
    addSpecification("stamina point cost", 30);

    addSpecification("damage hit points", ({
        ([
            "probability": 65,
            "base damage": 80,
            "range": 90
        ]),
        ([
            "probability": 35,
            "base damage": 140,
            "range": 140
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "skill",
            "name": "long sword",
            "formula": "additive",
            "rate": 0.10
        ]),
        ([
            "type": "attribute",
            "name": "strength",
            "formula": "additive",
            "rate": 0.10
        ]),
        ([
            "type": "research",
            "research item": "/guilds/runeskald/rune-warrior/paint-rune-of-strength.c",
            "name": "Paint Rune of Strength",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.35
        ])
    }));
}

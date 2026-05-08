//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Runic Rampage");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald enters a runic rampage, "
        "lashing out at all enemies in the area with rune-lit weapon strikes.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 18]));
    addPrerequisite("/guilds/runeskald/rune-warrior/runic-execution.c",
        (["type": "research"]));
    addPrerequisite("/guilds/runeskald/rune-warrior/runic-whirlwind.c",
        (["type": "research"]));

    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "runic rampage");
    addSpecification("use ability message",
        "##InitiatorName## ##Infinitive::enter## a runic rampage, weapon flashing with rune-light as it carves through all nearby foes.");

    addSpecification("spell point cost", 50);
    addSpecification("stamina point cost", 40);

    addSpecification("damage hit points", ({
        ([
            "probability": 65,
            "base damage": 70,
            "range": 80
        ]),
        ([
            "probability": 35,
            "base damage": 120,
            "range": 130
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

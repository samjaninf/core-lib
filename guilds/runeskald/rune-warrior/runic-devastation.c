//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Runic Devastation");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald channels all the power "
        "of their body runes into a single devastating sweep, striking "
        "all enemies in range.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 15]));
    addPrerequisite("/guilds/runeskald/rune-warrior/runic-whirlwind.c",
        (["type": "research"]));
    addPrerequisite("/guilds/runeskald/rune-warrior/rune-surge.c",
        (["type": "research"]));

    addSpecification("scope", "area of effect");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "runic devastation");
    addSpecification("use message",
        "##InitiatorName## ##Infinitive::unleash## all the power of their runes in a sweeping devastation of everything nearby.");

    addSpecification("spell point cost", 35);
    addSpecification("stamina point cost", 30);

    addSpecification("damage hit points", ({
        ([
            "probability": 65,
            "base damage": 90,
            "range": 100
        ]),
        ([
            "probability": 35,
            "base damage": 165,
            "range": 150
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "attribute",
            "name": "strength",
            "formula": "additive",
            "rate": 0.12
        ]),
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "additive",
            "rate": 0.09
        ])
    }));
}

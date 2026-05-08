//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Fire Bolt");
    addSpecification("source", "runeskald");
    addSpecification("description", "A concentrated bolt of runic fire that "
        "deals more fire damage than a basic ember rune.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 2]));
    addPrerequisite("/guilds/runeskald/frostfire/runic-flame.c",
        (["type": "research"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "fire bolt ##Target##");
    addSpecification("use message",
        "##InitiatorName## ##Infinitive::hurl## a searing bolt of runic fire at ##TargetName##.");

    addSpecification("spell point cost", 18);
    addSpecification("stamina point cost", 6);

    addSpecification("damage hit points", ({
        ([
            "probability": 80,
            "base damage": 22,
            "range": 25
        ]),
        ([
            "probability": 20,
            "base damage": 42,
            "range": 38
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
            "rate": 0.05
        ]),
        ([
            "type": "research",
            "research item": "/guilds/runeskald/frostfire/runic-flame.c",
            "name": "Runic Flame",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.10
        ])
    }));
}

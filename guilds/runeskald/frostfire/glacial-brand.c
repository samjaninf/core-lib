//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Glacial Brand");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald hurls a rune-formed "
        "shard of glacial ice at a single enemy, dealing cold damage and "
        "briefly slowing the target.");

    addPrerequisite("/guilds/runeskald/frostfire/root.c",
        (["type": "research"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "glacial brand ##Target##");
    addSpecification("use message",
        "##InitiatorName## ##Infinitive::hurl## a shard of glacial rune-ice at ##TargetName##.");

    addSpecification("spell point cost", 20);
    addSpecification("stamina point cost", 5);

    addSpecification("damage hit points", ({
        ([
            "probability": 80,
            "base damage": 18,
            "range": 22
        ]),
        ([
            "probability": 20,
            "base damage": 38,
            "range": 35
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "additive",
            "rate": 0.07
        ]),
        ([
            "type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.05
        ])
    }));
}

//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Runic Flame");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald ignites a rune in midair, "
        "releasing a bolt of runic fire at a single target.");

    addPrerequisite("/guilds/runeskald/frostfire/root.c",
        (["type": "research"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "runic flame ##Target##");
    addSpecification("use message",
        "##InitiatorName## ##Infinitive::ignite## a rune, releasing a bolt of runic fire at ##TargetName##.");

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

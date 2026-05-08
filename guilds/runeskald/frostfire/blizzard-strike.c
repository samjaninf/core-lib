//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Blizzard Strike");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald launches a barrage of "
        "razor-sharp ice shards that rakes all nearby enemies with "
        "freezing damage.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 9]));
    addPrerequisite("/guilds/runeskald/frostfire/frost-chain.c",
        (["type": "research"]));

    addSpecification("scope", "area of effect");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "invoke blizzard strike");
    addSpecification("use ability message",
        "##InitiatorName## ##Infinitive::launch## a barrage of razor ice shards that rakes everything nearby.");

    addSpecification("spell point cost", 35);
    addSpecification("stamina point cost", 14);

    addSpecification("damage hit points", ({
        ([
            "probability": 70,
            "base damage": 52,
            "range": 58
        ]),
        ([
            "probability": 30,
            "base damage": 98,
            "range": 92
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.09
        ]),
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "additive",
            "rate": 0.09
        ])
    }));
}

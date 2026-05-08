//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Ice Shard");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald conjures a shard of rune-ice "
        "and drives it into a target, dealing cold damage.");

    addPrerequisite("/guilds/runeskald/frostfire/root.c",
        (["type": "research"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "ice shard ##Target##");
    addSpecification("use ability message",
        "##InitiatorName## ##Infinitive::conjure## a rune-ice shard and drives it into ##TargetName##.");

    addSpecification("spell point cost", 12);
    addSpecification("stamina point cost", 5);

    addSpecification("damage hit points", ({
        ([
            "probability": 80,
            "base damage": 14,
            "range": 16
        ]),
        ([
            "probability": 20,
            "base damage": 28,
            "range": 28
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "additive",
            "rate": 0.06
        ]),
        ([
            "type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.04
        ])
    }));
}

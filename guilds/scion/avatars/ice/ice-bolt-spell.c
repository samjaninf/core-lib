//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Ice Bolt");
    addSpecification("description", "This is a persona research item.");
    addSpecification("effect", "combat");
    addSpecification("scope", "targeted");
    addSpecification("research type", "granted");
    addSpecification("spell point cost", 100);
    addSpecification("damage type", "cold");

    addSpecification("damage hit points", ({ 
        ([
            "probability": 90,
            "base damage": 50,
            "range": 50
        ]),
        ([
            "probability": 10,
            "base damage": 100,
            "range": 100
        ])
    }));
    addSpecification("modifiers", ({ 
    ([
        "type":"skill",
        "name": "elemental water",
        "formula": "additive",
        "rate": 1.10
    ]), 
    ([
        "type":"skill",
        "name": "spellcraft",
        "formula": "additive",
        "rate": 1.05
    ]), 
    ([
        "type":"skill",
        "name": "evocation",
        "formula": "additive",
        "rate": 1.10
    ]),
    ([
        "type":"skill",
        "name": "physics",
        "formula": "additive",
        "rate": 1.05
    ]),
    ([
        "type":"skill",
        "name": "magical essence",
        "formula": "logarithmic",
        "base value" : 1,
        "rate" : 1.05
    ]),
    ([
        "type":"level",
        "name" : "level",
        "formula" : "logarithmic",
        "rate" : 1.05
    ]),
    ([
        "type":"attribute",
        "name": "intelligence",
        "formula": "logarithmic",
        "base value": 1,
        "rate": 1.2
    ]) }));
    addSpecification("cooldown", 45);
    addSpecification("command template", "icebolt at ##Target##");
    addSpecification("use ability message", "Shards of ice "
        "fly from ##InitiatorPossessive::Name## "
        "clawed hands into ##TargetName##.");
}

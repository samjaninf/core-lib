//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Gash");
    addSpecification("source", "fighter");
    addSpecification("description", "This research provides the user with the "
        "knowledge of a gashing blade technique that causes damage to "
        "an enemy.");

    addPrerequisite("/guilds/fighter/polearms/root.c",
        (["type":"research"]));

    addSpecification("limited by", (["equipment":({ "pole arm" })]));

    addPrerequisite("level",
        (["type":"level",
            "guild": "fighter",
            "value": 3
        ]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);

    addSpecification("damage hit points", ({ ([
            "probability": 90,
            "base damage": 10,
            "range": 15
        ]),
        ([
            "probability": 10,
            "base damage": 25,
            "range": 50
        ])
    }));

    addSpecification("damage type", "slash");

    addSpecification("modifiers", ({ 
        ([
            "type": "research",
            "research item": "/guilds/fighter/polearms/forceful-thrust.c",
            "name": "Forceful Thrust",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/fighter/polearms/fools-bayonet.c",
            "name": "Fool's Bayonet",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/fighter/polearms/hooking-thrust.c",
            "name": "Hooking Thrust",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/fighter/polearms/perforation.c",
            "name": "Perforation",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/fighter/polearms/transfix.c",
            "name": "Transfix",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/fighter/polearms/piercing-blow.c",
            "name": "Piercing Blow",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/fighter/polearms/penetration.c",
            "name": "Penetration",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/fighter/polearms/slicing-stroke.c",
            "name": "Slicing Stroke",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/fighter/polearms/lunging-strike.c",
            "name": "Lunging Strike",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/fighter/polearms/master-skewer.c",
            "name": "Master Skewer",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.5
        ]),
        ([
            "type": "deferred attack",
            "name": "deferred attack",
            "trait": "/guilds/fighter/techniques/calculated-attack.c",
            "formula": "multiplicative",
            "rate": 0.01
        ]),
        ([
            "type": "weapon damage",
            "name" : "polearm damage",
            "types" : ({ "pole arm" }),
            "formula" : "additive",
            "rate" : 0.75
        ]),
        ([
            "type": "skill",
            "name" : "pole arm",
            "formula" : "additive",
            "rate" : 0.5
        ]), 
        ([
            "type": "skill",
            "name": "anatomy and physiology",
            "formula": "additive",
            "rate": 0.10
        ]),
        ([
            "type": "skill",
            "name": "acrobatics",
            "formula": "additive",
            "rate": 0.05
        ]),
        ([
            "type": "skill",
            "name": "dancing",
            "formula": "additive",
            "rate": 0.05
        ]),
        ([
            "type": "skill",
            "name": "physics",
            "formula": "additive",
            "rate": 0.10
        ]),
        ([
            "type": "skill",
            "name": "mathematics",
            "formula": "additive",
            "rate": 0.10
        ]),
        ([
            "type": "attribute",
            "name": "dexterity",
            "formula": "additive",
            "rate": 0.25
        ]),
        ([
            "type": "attribute",
            "name": "strength",
            "formula": "additive",
            "rate": 0.25
        ]),
        ([
            "type": "attribute",
            "name": "wisdom",
            "formula": "additive",
            "rate": 0.15
        ]),
    }));

    addSpecification("stamina point cost", 50);
    addSpecification("stamina point cost modifiers", ([
        "/guilds/fighter/polearms/polemasters-reserve.c": 5,
        "/guilds/fighter/polearms/polemasters-call.c": 5,
        "/guilds/fighter/polearms/polemasters-might.c": 5,
        "/guilds/fighter/polearms/polemasters-fury.c": 5
    ]));

    addSpecification("cooldown", 30);
    addSpecification("cooldown group", "fighter weapon level 3");
    addSpecification("cooldown modifiers", ([
        "/guilds/fighter/polearms/polemasters-boon.c": 5,
        "/guilds/fighter/polearms/polemasters-speed.c": 5,
        "/guilds/fighter/polearms/polemasters-endurance.c": 5,
        "/guilds/fighter/polearms/polemasters-strength.c": 5,
    ]));

    addSpecification("event handler", "gashEvent");
    addSpecification("command template", "gash [at ##Target##]");
    addSpecification("use ability message",  "##InitiatorName## "
        "##Infinitive::gash## ##InitiatorPossessive## "
        "##InitiatorWeapon## at ##TargetName## aggressively.");
}

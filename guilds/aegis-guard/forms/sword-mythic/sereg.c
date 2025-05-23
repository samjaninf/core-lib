//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Sereg");
    addSpecification("source", "Aegis Guard");
    addSpecification("description", "This research provides the user with the "
        "knowledge of a technique that allows one to project a hail of "
        "destructive magic known to the Aegis Guard as sereg. "
        "It is a form that can either be done by itself or as part of a "
        "combination attack.");
    addSpecification("usage summary", "A technique projecting a destructive "
        "energy wave");

    addPrerequisite("/guilds/aegis-guard/forms/sword-mythic/mythic-root.c",
        (["type":"research"]));

    addSpecification("limited by", (["equipment":({ "dagger", "short sword",
        "long sword", "hand and a half sword", "two-handed sword" })]));

    addPrerequisite("level",
        (["type":"level",
            "guild": "Aegis Guard",
            "value": 15
        ]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);

    addSpecification("damage hit points", ({ ([
            "probability": 80,
            "base damage": 50,
            "range": 50
        ]),
        ([
            "probability": 20,
            "base damage": 100,
            "range": 100
        ])
    }));

    addSpecification("damage type", "disease");

    addSpecification("modifiers", ({ 
        ([
            "type": "research",
            "research item": "/guilds/aegis-guard/forms/sword-mythic/delu-anwar.c",
            "name": "Delu Anwar",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.15
        ]),
        ([
            "type": "research",
            "research item": "/guilds/aegis-guard/forms/sword-mythic/delu-celair.c",
            "name": "Delu Celair",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.15
        ]),
        ([
            "type": "research",
            "research item": "/guilds/aegis-guard/forms/sword-mythic/delu-edlothia.c",
            "name": "Delu Edlothia",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.15
        ]),
        ([
            "type": "research",
            "research item": "/guilds/aegis-guard/forms/sword-mythic/delu-eiliant.c",
            "name": "Delu Eiliant",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.15
        ]),
        ([
            "type": "research",
            "research item": "/guilds/aegis-guard/forms/sword-mythic/delu-manadh.c",
            "name": "Delu Manadh",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/aegis-guard/forms/sword-mythic/delu-dagnir.c",
            "name": "Delu Dagnir",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "skill",
            "name": "body",
            "formula": "logarithmic",
            "rate": 1.10
        ]),
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "logarithmic",
            "rate": 1.05
        ]),
        ([
            "type": "skill",
            "name": "magical essence",
            "formula": "additive",
            "rate": 0.10
        ]),
        ([
            "type": "skill",
            "name": "transformation",
            "formula": "additive",
            "rate": 0.10
        ]), 
        ([
            "type": "skill",
            "name": "manipulation",
            "formula": "logarithmic",
            "rate": 1.025
        ]), 
        ([
            "type": "skill",
            "name": "destruction",
            "formula": "logarithmic",
            "rate": 1.025
        ]), 
        ([
            "type":"attribute",
            "name": "constitution",
            "formula": "additive",
            "rate": 0.25
        ]), 
        ([
            "type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.5
        ]),
        ([
            "type": "attribute",
            "name": "wisdom",
            "formula": "additive",
            "rate": 0.5
        ]),
    }));

    addSpecification("spell point cost", 150);
    addSpecification("spell point cost modifiers", ([
        "/guilds/aegis-guard/forms/sword-mythic/tur-celair.c": 15,
        "/guilds/aegis-guard/forms/sword-mythic/tur-edlothia.c": 15,
        "/guilds/aegis-guard/forms/sword-mythic/tur-manadh.c": 10,
        "/guilds/aegis-guard/forms/sword-mythic/tur-dagnir.c": 10
    ]));

    addSpecification("cooldown", 60);
    addSpecification("cooldown modifiers", ([
        "/guilds/aegis-guard/forms/sword-mythic/braig-celair.c": 10,
        "/guilds/aegis-guard/forms/sword-mythic/braig-edlothia.c": 10,
        "/guilds/aegis-guard/forms/sword-mythic/braig-manadh.c": 10,
        "/guilds/aegis-guard/forms/sword-mythic/braig-dagnir.c": 10,
    ]));

    addSpecification("event handler", "seregEvent");
    addSpecification("command template", "sereg [at ##Target##]");
    addSpecification("use ability message",  "##InitiatorPossessive::Name## "
        "##Infinitive::point## ##InitiatorPossessive## "
        "##InitiatorWeapon## at ##TargetName##, sending a hail of crimson "
        "bolts at ##TargetObjective##.");
    addSpecification("use combination message", "##Infinitive::summon## "
        "a hail of crimson bolts");
}

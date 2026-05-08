//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Rune Lunge");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald lunges forward with "
        "rune-enhanced momentum, delivering a single powerful strike "
        "from unexpected range.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 7]));
    addPrerequisite("/guilds/runeskald/rune-warrior/rune-thrust.c",
        (["type": "research"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "rune lunge ##Target##");
    addSpecification("use ability message",
        "##InitiatorName## ##Infinitive::lunge## forward with rune-amplified speed, blade driving at ##TargetName##.");

    addSpecification("spell point cost", 22);
    addSpecification("stamina point cost", 18);

    addSpecification("damage hit points", ({
        ([
            "probability": 75,
            "base damage": 30,
            "range": 35
        ]),
        ([
            "probability": 25,
            "base damage": 60,
            "range": 60
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "skill",
            "name": "long sword",
            "formula": "additive",
            "rate": 0.08
        ]),
        ([
            "type": "attribute",
            "name": "dexterity",
            "formula": "additive",
            "rate": 0.07
        ]),
        ([
            "type": "research",
            "research item": "/guilds/runeskald/rune-warrior/paint-rune-of-strength.c",
            "name": "Paint Rune of Strength",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ])
    }));
}

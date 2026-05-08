//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Rune Thrust");
    addSpecification("source", "runeskald");
    addSpecification("description", "A rune-guided weapon thrust that drives "
        "the weapon into a gap in the target's defenses with unnatural precision.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 4]));
    addPrerequisite("/guilds/runeskald/rune-warrior/paint-rune-of-speed.c",
        (["type": "research"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "rune thrust ##Target##");
    addSpecification("use ability message",
        "##InitiatorName## ##Infinitive::drive## a rune-guided thrust past ##TargetName##'s guard.");

    addSpecification("spell point cost", 15);
    addSpecification("stamina point cost", 12);

    addSpecification("damage hit points", ({
        ([
            "probability": 75,
            "base damage": 20,
            "range": 22
        ]),
        ([
            "probability": 25,
            "base damage": 40,
            "range": 35
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "skill",
            "name": "long sword",
            "formula": "additive",
            "rate": 0.07
        ]),
        ([
            "type": "attribute",
            "name": "dexterity",
            "formula": "additive",
            "rate": 0.06
        ]),
        ([
            "type": "research",
            "research item": "/guilds/runeskald/rune-warrior/paint-rune-of-strength.c",
            "name": "Paint Rune of Strength",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.15
        ])
    }));
}

//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Rune Hammer Strike");
    addSpecification("source", "runeskald");
    addSpecification("description", "A devastating downward blow channelling "
        "rune energy through a hammer or blunt weapon, dealing heavy damage.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 5]));
    addPrerequisite("/guilds/runeskald/rune-warrior/rune-struck-hammer.c",
        (["type": "research"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "rune hammer strike ##Target##");
    addSpecification("use ability message",
        "##InitiatorName## ##Infinitive::bring## a rune-empowered hammer blow down on ##TargetName##.");

    addSpecification("spell point cost", 20);
    addSpecification("stamina point cost", 18);

    addSpecification("damage hit points", ({
        ([
            "probability": 75,
            "base damage": 28,
            "range": 30
        ]),
        ([
            "probability": 25,
            "base damage": 55,
            "range": 50
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "skill",
            "name": "hammer",
            "formula": "additive",
            "rate": 0.08
        ]),
        ([
            "type": "attribute",
            "name": "strength",
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

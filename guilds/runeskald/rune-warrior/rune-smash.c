//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Rune Smash");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald channels rune energy into "
        "a devastating overhead smash, dealing heavy damage.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 7]));
    addPrerequisite("/guilds/runeskald/rune-warrior/rune-bash.c",
        (["type": "research"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "rune smash ##Target##");
    addSpecification("use ability message",
        "##InitiatorName## ##Infinitive::bring## a rune-empowered smash down on ##TargetName## with bone-crushing force.");

    addSpecification("spell point cost", 22);
    addSpecification("stamina point cost", 20);

    addSpecification("damage hit points", ({
        ([
            "probability": 75,
            "base damage": 35,
            "range": 35
        ]),
        ([
            "probability": 25,
            "base damage": 65,
            "range": 65
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
            "name": "strength",
            "formula": "additive",
            "rate": 0.08
        ]),
        ([
            "type": "research",
            "research item": "/guilds/runeskald/rune-warrior/paint-rune-of-fury.c",
            "name": "Paint Rune of Fury",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ])
    }));
}

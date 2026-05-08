//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Rune Surge");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald releases a surge of rune "
        "energy from their body runes into a single explosive strike at "
        "one target.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 12]));
    addPrerequisite("/guilds/runeskald/rune-warrior/rune-flurry.c",
        (["type": "research"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "rune surge ##Target##");
    addSpecification("use message",
        "##InitiatorName## ##Infinitive::release## a surge of rune energy from their painted runes into ##TargetName##.");

    addSpecification("spell point cost", 30);
    addSpecification("stamina point cost", 22);

    addSpecification("damage hit points", ({
        ([
            "probability": 65,
            "base damage": 70,
            "range": 80
        ]),
        ([
            "probability": 35,
            "base damage": 130,
            "range": 120
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "attribute",
            "name": "strength",
            "formula": "additive",
            "rate": 0.10
        ]),
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "additive",
            "rate": 0.08
        ])
    }));
}

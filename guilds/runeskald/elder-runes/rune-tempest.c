//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Rune Tempest");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald calls down a tempest of "
        "rune energy that lashes across the entire area, striking all "
        "nearby enemies with runic lightning.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 16]));
    addPrerequisite("/guilds/runeskald/elder-runes/rune-inferno.c",
        (["type": "research"]));

    addSpecification("scope", "area of effect");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "invoke rune tempest");
    addSpecification("use ability message",
        "##InitiatorName## ##Infinitive::call## down a tempest of rune lightning that tears through the surrounding area.");

    addSpecification("spell point cost", 52);
    addSpecification("stamina point cost", 20);

    addSpecification("damage hit points", ({
        ([
            "probability": 65,
            "base damage": 90,
            "range": 100
        ]),
        ([
            "probability": 35,
            "base damage": 165,
            "range": 155
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.13
        ]),
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "additive",
            "rate": 0.13
        ])
    }));
}

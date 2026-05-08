//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Rune Shatter");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald violently shatters a "
        "ward-rune previously inscribed on their body, releasing its stored "
        "energy as a burst of force against all nearby enemies.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 7]));
    addPrerequisite("/guilds/runeskald/elder-runes/rune-of-warding.c",
        (["type": "research"]));

    addSpecification("scope", "area of effect");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "rune shatter");
    addSpecification("use message",
        "##InitiatorName## ##Infinitive::shatter## a ward-rune in a burst of protective force that blasts all nearby foes.");

    addSpecification("spell point cost", 30);
    addSpecification("stamina point cost", 15);

    addSpecification("damage hit points", ({
        ([
            "probability": 75,
            "base damage": 30,
            "range": 30
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
            "name": "spellcraft",
            "formula": "additive",
            "rate": 0.12
        ]),
        ([
            "type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.07
        ]),
        ([
            "type": "research",
            "research item": "/guilds/runeskald/elder-runes/rune-of-warding.c",
            "name": "Rune of Warding",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.15
        ])
    }));
}

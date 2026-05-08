//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Ember Rune");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald hurls a smouldering ember-rune "
        "at a target, dealing fire damage.");

    addPrerequisite("/guilds/runeskald/frostfire/root.c",
        (["type": "research"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "ember rune ##Target##");
    addSpecification("use ability message",
        "##InitiatorName## ##Infinitive::hurl## a smouldering ember-rune at ##TargetName##.");

    addSpecification("spell point cost", 12);
    addSpecification("stamina point cost", 5);

    addSpecification("damage hit points", ({
        ([
            "probability": 80,
            "base damage": 14,
            "range": 16
        ]),
        ([
            "probability": 20,
            "base damage": 28,
            "range": 28
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "additive",
            "rate": 0.06
        ]),
        ([
            "type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.04
        ])
    }));
}

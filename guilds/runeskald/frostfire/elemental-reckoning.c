//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Elemental Reckoning");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald unleashes a massive dual "
        "elemental blast that tears through all nearby enemies with both "
        "frost and fire simultaneously.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 18]));
    addPrerequisite("/guilds/runeskald/frostfire/frostfire-cataclysm.c",
        (["type": "research"]));
    addPrerequisite("/guilds/runeskald/frostfire/frost-fire-aegis.c",
        (["type": "research"]));

    addSpecification("scope", "area of effect");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "invoke elemental reckoning");
    addSpecification("use message",
        "##InitiatorName## ##Infinitive::unleash## a devastating wave of frost and fire that tears through the entire area.");

    addSpecification("spell point cost", 58);
    addSpecification("stamina point cost", 25);

    addSpecification("damage hit points", ({
        ([
            "probability": 60,
            "base damage": 130,
            "range": 140
        ]),
        ([
            "probability": 40,
            "base damage": 230,
            "range": 210
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.14
        ]),
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "additive",
            "rate": 0.14
        ]),
        ([
            "type": "research",
            "research item": "/guilds/runeskald/frostfire/frostfire-mastery.c",
            "name": "Frostfire Mastery",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.20
        ])
    }));
}

//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Primal Rune Burst");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald shatters a primal rune "
        "with overwhelming force, releasing energy that dwarfs even the "
        "elder rune blast.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 22]));
    addPrerequisite("/guilds/runeskald/elder-runes/ancient-rune-blast.c",
        (["type": "research"]));
    addPrerequisite("/guilds/runeskald/rune-crafting/primal-rune-crafting.c",
        (["type": "research"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "primal rune burst ##Target##");
    addSpecification("use message",
        "##InitiatorName## shatters a primal rune with a thunderous concussion, engulfing ##TargetName## in primordial force.");

    addSpecification("spell point cost", 65);
    addSpecification("stamina point cost", 25);

    addSpecification("damage hit points", ({
        ([
            "probability": 65,
            "base damage": 180,
            "range": 180
        ]),
        ([
            "probability": 35,
            "base damage": 300,
            "range": 280
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "additive",
            "rate": 0.25
        ]),
        ([
            "type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.12
        ]),
        ([
            "type": "research",
            "research item": "/guilds/runeskald/elder-runes/elder-rune-blast.c",
            "name": "Elder Rune Blast",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ])
    }));
}

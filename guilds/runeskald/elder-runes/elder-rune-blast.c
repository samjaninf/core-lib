//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Elder Rune Blast");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald shatters an elder storm, "
        "frost, or flame rune, unleashing a devastating blast of elemental "
        "power against a single enemy. The destruction of such a costly "
        "rune produces an effect far exceeding normal spellcasting.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 9]));
    addPrerequisite("/guilds/runeskald/elder-runes/rune-burst.c",
        (["type": "research"]));
    addPrerequisite("/guilds/runeskald/rune-crafting/elder-storm-rune.c",
        (["type": "research"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "elder rune blast ##Target##");
    addSpecification("use ability message",
        "##InitiatorName## shatters an elder rune with a thunderous crack, "
        "blasting ##TargetName## with overwhelming elemental force.");
    addSpecification("failure message",
        "##InitiatorName## attempts an elder rune blast but the rune resists destruction.");

    addSpecification("spell point cost", 25);
    addSpecification("stamina point cost", 10);

    addSpecification("damage hit points", ({
        ([
            "probability": 70,
            "base damage": 70,
            "range": 80
        ]),
        ([
            "probability": 30,
            "base damage": 120,
            "range": 150
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "additive",
            "rate": 0.20
        ]),
        ([
            "type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.08
        ]),
        ([
            "type": "research",
            "research item": "/guilds/runeskald/elder-runes/rune-burst.c",
            "name": "Rune Burst",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.15
        ])
    }));
}

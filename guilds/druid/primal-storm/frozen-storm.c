//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Frozen Storm");
    addSpecification("source", "druid");
    addSpecification("description", "This research grants the druid knowledge of the frozen storm spell, merging blizzard and cyclone into a lethal vortex.");

    addPrerequisite("/guilds/druid/primal-storm/root.c",
        ([ "type": "research" ]));

    addPrerequisite("/guilds/druid/primal-storm/frost-nova.c",
        ([ "type": "research" ]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 44);
    addSpecification("damage type", "cold");
    addSpecification("damage hit points", ({ ([
        "probability": 80,
            "base damage": 28,
            "range": 24
        ]),
        ([
        "probability": 20,
            "base damage": 42,
            "range": 36
        ])
    }));
    addSpecification("modifiers", ({
    ([
        "type": "research",
        "research item": "/guilds/druid/primal-storm/winter-mastery.c",
        "name": "winter-mastery",
        "formula": "multiplicative",
        "base value": 1,
        "rate": 1.25
    ]),
    ([
        "type": "research",
        "research item": "/guilds/druid/primal-storm/eye-of-the-storm.c",
        "name": "eye-of-the-storm",
        "formula": "multiplicative",
        "base value": 1,
        "rate": 1.25
    ]),
    ([
        "type": "research",
        "research item": "/guilds/druid/primal-storm/storm-mastery.c",
        "name": "storm-mastery",
        "formula": "multiplicative",
        "base value": 1,
        "rate": 1.25
    ]),
    ([
        "type": "skill",
        "name": "nature",
        "formula": "additive",
        "rate": 0.15
    ]),
    ([
        "type": "skill",
        "name": "spellcraft",
        "formula": "logarithmic",
        "rate": 1.25
    ]),
    ([
        "type": "level",
        "name": "level",
        "formula": "logarithmic",
        "rate": 1.05
    ]),
    ([
        "type": "attribute",
        "name": "wisdom",
        "formula": "logarithmic",
        "base value": 1,
        "rate": 1.15
    ]),
    ([
        "type": "attribute",
        "name": "intelligence",
        "formula": "logarithmic",
        "base value": 1,
        "rate": 1.10
    ]) }));
    addSpecification("cooldown", 26);
    addSpecification("command template", "frozenstorm ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::throw## ##InitiatorPossessive## arms wide and a storm of razor ice and killing wind ##Infinitive::surge## around ##TargetName##.");
}

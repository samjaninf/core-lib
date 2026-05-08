//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Runic Flesh");
    addSpecification("source", "runeskald");
    addSpecification("description", "Through sustained inscription of minor "
        "runes across the body, the runeskald toughens their flesh, gaining "
        "a passive bonus to maximum hit points.");

    addPrerequisite("/guilds/runeskald/runic-binding/bind-rune-of-warding.c",
        (["type": "research"]));

    addSpecification("research type", "points");
    addSpecification("research cost", 1);

    addSpecification("bonus hit points", 35);

    addSpecification("modifiers", ({
        ([
            "type": "attribute",
            "name": "constitution",
            "formula": "additive",
            "rate": 0.06
        ]),
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "additive",
            "rate": 0.04
        ])
    }));
}

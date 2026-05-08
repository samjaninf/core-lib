//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Runic Battle Fury");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald ignites the fury rune, "
        "unleashing a sustained battle-state that greatly increases attack "
        "and damage at the cost of some defense.");

    addPrerequisite("/guilds/runeskald/runic-binding/runic-striking.c",
        (["type": "research"]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "invoke runic battle fury");
    addSpecification("use message",
        "##InitiatorName## ##Infinitive::ignite## the fury rune, eyes blazing with runic fire.");

    addSpecification("spell point cost", 30);
    addSpecification("stamina point cost", 15);

    addSpecification("bonus attack", 6);
    addSpecification("bonus damage", 8);
    addSpecification("penalty armor class", 3);
    addSpecification("duration", 30);

    addSpecification("modifiers", ({
        ([
            "type": "attribute",
            "name": "strength",
            "formula": "additive",
            "rate": 0.07
        ]),
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "additive",
            "rate": 0.05
        ])
    }));
}

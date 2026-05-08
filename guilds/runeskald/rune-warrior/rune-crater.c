//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Rune Crater");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald delivers a thunderous "
        "rune-charged downward blow that deals heavy damage and knocks "
        "nearby enemies off balance.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 8]));
    addPrerequisite("/guilds/runeskald/rune-warrior/rune-smash.c",
        (["type": "research"]));

    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "rune crater");
    addSpecification("use ability message",
        "##InitiatorName## ##Infinitive::slam## a rune-charged weapon into the ground, sending a shockwave through nearby enemies.");

    addSpecification("spell point cost", 22);
    addSpecification("stamina point cost", 25);

    addSpecification("damage hit points", ({
        ([
            "probability": 70,
            "base damage": 50,
            "range": 55
        ]),
        ([
            "probability": 30,
            "base damage": 95,
            "range": 90
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "attribute",
            "name": "strength",
            "formula": "additive",
            "rate": 0.09
        ]),
        ([
            "type": "skill",
            "name": "hammer",
            "formula": "additive",
            "rate": 0.07
        ])
    }));
}

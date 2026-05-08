//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Rune Lash");
    addSpecification("source", "runeskald");
    addSpecification("description", "The runeskald cracks a whip of pure "
        "runic force at a target, dealing spiritual damage and briefly "
        "slowing their reactions.");

    addPrerequisite("level",
        (["type": "level", "guild": "runeskald", "value": 5]));
    addPrerequisite("/guilds/runeskald/elder-runes/rune-bolt.c",
        (["type": "research"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("command template", "invoke rune lash ##Target##");
    addSpecification("use message",
        "##InitiatorName## ##Infinitive::crack## a whip of searing runic force at ##TargetName##.");

    addSpecification("spell point cost", 24);
    addSpecification("stamina point cost", 8);

    addSpecification("damage hit points", ({
        ([
            "probability": 75,
            "base damage": 32,
            "range": 35
        ]),
        ([
            "probability": 25,
            "base damage": 62,
            "range": 58
        ])
    }));

    addSpecification("modifiers", ({
        ([
            "type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.07
        ]),
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "additive",
            "rate": 0.07
        ])
    }));
}

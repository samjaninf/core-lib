//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Devastating Charge");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "You unleash a truly devastating mounted "
        "charge that combines perfect technique, maximum momentum, and "
        "overwhelming force into a single devastating impact.");

    addPrerequisite("guilds/werric-knight/mounted/mounted-superiority.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":40]));

    addSpecification("limited by", (["equipment"]));
    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 180);
    addSpecification("stamina point cost", 150);
    addSpecification("command template", "devastating charge at ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::unleash:: "
        "a devastating charge at ##TargetName##!");

    addSpecification("damage hit points", ({ ([
        "probability":65,
        "base damage":140,
        "range":110
    ]),
    ([
        "probability":35,
        "base damage":210,
        "range":140
    ]) }));
    addSpecification("damage type", "physical");
    
    addSpecification("modifiers", ({
        ([
            "type":"research",
            "research item":"/guilds/werric-knight/mounted/cavalry-tactics.c",
            "name":"Cavalry Tactics",
            "formula":"multiplicative",
            "base value":1,
            "rate":1.25
        ]),
        ([
            "type":"weapon damage",
            "name":"weapon",
            "types":({"long sword", "hand and a half sword", "pole arm"}),
            "formula":"additive",
            "rate":1.0
        ]),
        ([
            "type":"attribute",
            "name":"strength",
            "formula":"additive",
            "rate":0.25
        ]),
        ([
            "type":"skill",
            "name":"riding",
            "formula":"additive",
            "rate":0.10
        ])
    }));
}
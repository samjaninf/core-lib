//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Mounted Strike");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "You deliver a powerful mounted strike from "
        "an advantageous position, using height, momentum, and perfect timing "
        "to maximize impact.");

    addPrerequisite("guilds/werric-knight/mounted/expert-rider.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":19]));

    addSpecification("limited by", (["equipment"]));
    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 60);
    addSpecification("stamina point cost", 65);
    addSpecification("command template", "mounted strike at ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::deliver:: "
        "a powerful mounted strike to ##TargetName##!");

    addSpecification("damage hit points", ({ ([
        "probability":75,
        "base damage":85,
        "range":70
    ]),
    ([
        "probability":25,
        "base damage":135,
        "range":95
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
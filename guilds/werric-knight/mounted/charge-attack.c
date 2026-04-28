//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Charge Attack");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "You execute a devastating charge attack, "
        "leveraging your mount's momentum to deliver tremendous impact.");

    addPrerequisite("guilds/werric-knight/mounted/mounted-defense.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":5]));

    addSpecification("limited by", (["equipment"]));
    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 60);
    addSpecification("stamina point cost", 50);
    addSpecification("command template", "charge ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::charge:: "
        "at ##TargetName## with devastating momentum!");

    addSpecification("damage hit points", ({ ([
        "probability":80,
        "base damage":50,
        "range":50
    ]),
    ([
        "probability":20,
        "base damage":85,
        "range":65
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
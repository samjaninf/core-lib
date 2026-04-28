//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Apocalyptic Charge");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "Your charge becomes apocalyptic in power—a "
        "devastating assault that seems to shake the very ground. This is mounted "
        "combat elevated to its ultimate destructive expression.");

    addPrerequisite("guilds/werric-knight/mounted/master-of-horse.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":60]));

    addSpecification("limited by", (["equipment"]));
    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 300);
    addSpecification("stamina point cost", 200);
    addSpecification("spell point cost", 100);
    addSpecification("command template", "apocalyptic charge at ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::unleash:: "
        "an apocalyptic charge at ##TargetName##!");

    addSpecification("damage hit points", ({ ([
        "probability":60,
        "base damage":180,
        "range":140
    ]),
    ([
        "probability":30,
        "base damage":270,
        "range":180
    ]),
    ([
        "probability":10,
        "base damage":380,
        "range":200
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
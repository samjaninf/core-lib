//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Thundering Charge");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "Your charge becomes thunderous and "
        "overwhelming. The sound of hoofbeats and the sight of your approach "
        "strike fear into enemies as you barrel toward them with unstoppable force.");

    addPrerequisite("guilds/werric-knight/mounted/cavalry-tactics.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":25]));

    addSpecification("limited by", (["equipment"]));
    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 120);
    addSpecification("stamina point cost", 100);
    addSpecification("command template", "thundering charge at ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::unleash:: "
        "a thundering charge at ##TargetName##!");

    addSpecification("damage hit points", ({ ([
        "probability":70,
        "base damage":110,
        "range":90
    ]),
    ([
        "probability":30,
        "base damage":170,
        "range":120
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
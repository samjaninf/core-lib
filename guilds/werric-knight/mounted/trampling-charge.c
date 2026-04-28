//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Trampling Charge");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "You and your mount trample through enemy "
        "lines, using your combined weight and momentum to devastate everything "
        "in your path.");

    addPrerequisite("guilds/werric-knight/mounted/mounted-agility.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":15]));

    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 90);
    addSpecification("stamina point cost", 75);
    addSpecification("command template", "trampling charge");
    addSpecification("use ability message", "##InitiatorName## and ##InitiatorPossessive## "
        "mount ##Infinitive::trample:: through enemy lines!");

    addSpecification("damage hit points", ({ ([
        "probability":75,
        "base damage":70,
        "range":60
    ]),
    ([
        "probability":25,
        "base damage":110,
        "range":80
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
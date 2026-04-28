//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Divine Wrath");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "You call down divine wrath upon your enemies, "
        "striking them with overwhelming holy power.");

    addPrerequisite("guilds/werric-knight/light/channel-divinity.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":20]));

    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 120);
    addSpecification("spell point cost", 80);
    addSpecification("command template", "divine wrath");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::call:: "
        "down divine wrath upon ##InitiatorPossessive## enemies!");

    addSpecification("damage hit points", ({ ([
        "probability":75,
        "base damage":90,
        "range":75
    ]),
    ([
        "probability":25,
        "base damage":140,
        "range":100
    ]) }));
    addSpecification("damage type", "holy");
    
    addSpecification("modifiers", ({
        ([
            "type":"research",
            "research item":"/guilds/werric-knight/light/radiant-power.c",
            "name":"Radiant Power",
            "formula":"multiplicative",
            "base value":1,
            "rate":1.25
        ]),
        ([
            "type":"research",
            "research item":"/guilds/werric-knight/light/divine-mastery.c",
            "name":"Divine Mastery",
            "formula":"multiplicative",
            "base value":1,
            "rate":1.25
        ]),
        ([
            "type":"attribute",
            "name":"wisdom",
            "formula":"additive",
            "rate":0.25
        ]),
        ([
            "type":"attribute",
            "name":"charisma",
            "formula":"additive",
            "rate":0.15
        ])
    }));
}
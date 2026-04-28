//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Holy Strike");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "You infuse your weapon with holy light and "
        "strike with divine power, dealing enhanced damage especially against "
        "evil creatures.");

    addPrerequisite("guilds/werric-knight/light/healing-touch.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":13]));

    addSpecification("limited by", (["equipment"]));
    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 60);
    addSpecification("spell point cost", 50);
    addSpecification("stamina point cost", 40);
    addSpecification("command template", "holy strike at ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::strike:: "
        "##TargetName## with holy power!");

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
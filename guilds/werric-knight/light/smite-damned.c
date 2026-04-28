//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Smite the Damned");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "You unleash the ultimate smiting power, "
        "calling down apocalyptic holy wrath upon the damned and wicked.");

    addPrerequisite("guilds/werric-knight/light/divine-judgment.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":60]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 300);
    addSpecification("spell point cost", 250);
    addSpecification("command template", "smite damned at ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::smite:: "
        "the damned ##TargetName## with apocalyptic holy wrath!");

    addSpecification("damage hit points", ({ ([
        "probability":60,
        "base damage":200,
        "range":150
    ]),
    ([
        "probability":30,
        "base damage":300,
        "range":180
    ]),
    ([
        "probability":10,
        "base damage":420,
        "range":200
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
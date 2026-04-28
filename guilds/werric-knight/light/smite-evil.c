//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Smite Evil");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "You call upon divine power to smite evil "
        "with holy light. This attack is particularly effective against undead "
        "and demonic creatures.");

    addPrerequisite("guilds/werric-knight/light/minor-heal.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":5]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 45);
    addSpecification("spell point cost", 30);
    addSpecification("command template", "smite ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::smite:: "
        "##TargetName## with holy light!");

    addSpecification("damage hit points", ({ ([
        "probability":80,
        "base damage":40,
        "range":40
    ]),
    ([
        "probability":20,
        "base damage":65,
        "range":50
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
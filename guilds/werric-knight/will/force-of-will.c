//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Force of Will");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "You can manifest your will as a tangible force, "
        "striking your enemy not with steel but with the sheer weight of your "
        "determination. This attack bypasses physical defenses entirely, targeting "
        "the opponent's resolve and breaking it through the overwhelming superiority "
        "of your discipline.");

    addPrerequisite("guilds/werric-knight/will/beyond-mortal-limits.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":21]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 90);
    addSpecification("spell point cost", 100);
    addSpecification("stamina point cost", 75);
    addSpecification("command template", "force of will at ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::manifest:: "
        "##InitiatorPossessive## will as tangible force, striking ##TargetName## with "
        "overwhelming determination!");

    addSpecification("damage type", "mental");
    addSpecification("damage hit points", ({ ([
        "probability":75,
        "base damage":100,
        "range":80
    ]),
    ([
        "probability":25,
        "base damage":150,
        "range":100
    ]) }));
    
    addSpecification("modifiers", ({
        ([
            "type":"attribute",
            "name":"willpower",
            "formula":"additive",
            "rate":0.35
        ])
    }));
}
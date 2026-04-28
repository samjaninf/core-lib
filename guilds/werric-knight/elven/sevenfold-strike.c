//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Sevenfold Strike");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "This advanced elven technique delivers seven "
        "strikes in the time most warriors need for one. Each strike targets a "
        "different vital point, the sequence designed to overwhelm any defense through "
        "sheer speed and precision. It is said that Daedrun could execute this technique "
        "so swiftly that all seven strikes sounded as a single note.");

    addPrerequisite("guilds/werric-knight/elven/perfect-balance.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":19]));

    addSpecification("limited by", (["equipment"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 100);
    addSpecification("stamina point cost", 110);
    addSpecification("command template", "sevenfold strike at ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::unleash:: "
        "the Sevenfold Strike, ##InitiatorPossessive## blade striking ##TargetName## "
        "seven times in the span of a heartbeat!");

    addSpecification("damage type", "physical");
    addSpecification("damage hit points", ({ ([
        "probability":70,
        "base damage":115,
        "range":95
    ]),
    ([
        "probability":30,
        "base damage":175,
        "range":125
    ]) }));
    
    addSpecification("modifiers", ({
        ([
            "type":"weapon damage",
            "name":"sword",
            "types":({"dagger", "short sword", "long sword", "hand and a half sword"}),
            "formula":"additive",
            "rate":1.0
        ]),
        ([
            "type":"attribute",
            "name":"dexterity",
            "formula":"additive",
            "rate":0.30
        ]),
        ([
            "type":"attribute",
            "name":"strength",
            "formula":"additive",
            "rate":0.15
        ])
    }));
}
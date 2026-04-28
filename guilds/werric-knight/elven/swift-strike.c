//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Swift Strike");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "This elven technique emphasizes speed over "
        "power, delivering rapid strikes before your opponent can react. It was "
        "Daedrun who taught Werra that sometimes the fastest blade wins, not the "
        "strongest.");

    addPrerequisite("guilds/werric-knight/elven/graceful-movement.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":3]));

    addSpecification("limited by", (["equipment"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 40);
    addSpecification("stamina point cost", 45);
    addSpecification("command template", "swift strike at ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::strike## "
        "##TargetName## with elven swiftness, ##InitiatorPossessive## blade moving "
        "faster than the eye can follow!");

    addSpecification("damage type", "physical");
    addSpecification("damage hit points", ({ ([
        "probability":85,
        "base damage":45,
        "range":40
    ]),
    ([
        "probability":15,
        "base damage":70,
        "range":50
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
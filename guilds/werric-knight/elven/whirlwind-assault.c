//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Whirlwind Assault");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "This devastating technique combines the speed "
        "of elven martial arts with human combat effectiveness. You become a whirlwind "
        "of motion, your blade striking multiple enemies in a single fluid sequence "
        "that seems to defy the laws of physics.");

    addPrerequisite("guilds/werric-knight/elven/hybrid-mastery.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":9]));

    addSpecification("limited by", (["equipment"]));

    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 90);
    addSpecification("stamina point cost", 85);
    addSpecification("command template", "whirlwind assault");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::become## "
        "a whirlwind of graceful destruction, ##InitiatorPossessive## blade striking "
        "all nearby enemies with blinding speed!");

    addSpecification("damage type", "physical");
    addSpecification("damage hit points", ({ ([
        "probability":80,
        "base damage":75,
        "range":65
    ]),
    ([
        "probability":20,
        "base damage":115,
        "range":85
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
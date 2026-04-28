//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Blade of the Wind");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "This is the ultimate expression of elven speed "
        "and precision—a strike so swift that it seems your blade becomes the wind "
        "itself. Daedrun demonstrated this technique only once, cleaving through a "
        "boulder without the stone realizing it had been cut until the wind shifted "
        "and it fell in two perfect halves.");

    addPrerequisite("guilds/werric-knight/elven/elven-grace.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":25]));

    addSpecification("limited by", (["equipment"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 150);
    addSpecification("stamina point cost", 140);
    addSpecification("spell point cost", 75);
    addSpecification("command template", "blade of wind at ##Target##");
    addSpecification("use ability message", "##InitiatorName##'s blade becomes the "
        "wind itself, cutting ##TargetName## with impossible speed and precision!");

    addSpecification("damage type", "physical");
    addSpecification("damage hit points", ({ ([
        "probability":60,
        "base damage":140,
        "range":110
    ]),
    ([
        "probability":30,
        "base damage":210,
        "range":140
    ]),
    ([
        "probability":10,
        "base damage":290,
        "range":160
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
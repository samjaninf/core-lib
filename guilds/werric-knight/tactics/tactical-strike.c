//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Tactical Strike");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "You deliver a strike calculated for maximum "
        "tactical impact—targeting not just to wound but to disrupt enemy plans, "
        "create openings for allies, and shift battlefield momentum. This is warfare "
        "as chess, where every move serves a larger strategic purpose.");

    addPrerequisite("guilds/werric-knight/tactics/offensive-formation.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":17]));

    addSpecification("limited by", (["equipment"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 90);
    addSpecification("stamina point cost", 95);
    addSpecification("command template", "tactical strike at ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::deliver## "
        "a calculated tactical strike to ##TargetName##, disrupting their position!");

    addSpecification("damage type", "physical");
    addSpecification("damage hit points", ({ ([
        "probability":70,
        "base damage":95,
        "range":80
    ]),
    ([
        "probability":30,
        "base damage":145,
        "range":100
    ]) }));
    
    addSpecification("modifiers", ({
        ([
            "type":"attribute",
            "name":"intelligence",
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
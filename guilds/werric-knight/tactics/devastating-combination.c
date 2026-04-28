//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Devastating Combination");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "You have mastered the art of combining multiple "
        "tactical principles into a single, overwhelming assault. Positioning, timing, "
        "coordination, and exploitation of weakness all come together in a strike "
        "that is far greater than the sum of its parts.");

    addPrerequisite("guilds/werric-knight/tactics/strategic-genius.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":21]));

    addSpecification("limited by", (["equipment"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 120);
    addSpecification("stamina point cost", 120);
    addSpecification("command template", "devastating combination on ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::execute## "
        "a devastating tactical combination, overwhelming ##TargetName## with "
        "perfectly coordinated strikes!");

    addSpecification("damage type", "physical");
    addSpecification("damage hit points", ({ ([
        "probability":65,
        "base damage":110,
        "range":90
    ]),
    ([
        "probability":35,
        "base damage":170,
        "range":120
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
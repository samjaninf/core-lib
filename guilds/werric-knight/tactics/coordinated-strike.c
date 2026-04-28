//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Coordinated Strike");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "You have learned to coordinate your attacks "
        "with nearby allies, striking in perfect synchronization for maximum effect. "
        "This is the fundamental technique of Hillgarath's combat doctrine—that "
        "disciplined warriors fighting as one are worth ten times their number "
        "fighting alone.");

    addPrerequisite("guilds/werric-knight/tactics/battlefield-awareness.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":3]));

    addSpecification("limited by", (["equipment"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 45);
    addSpecification("stamina point cost", 50);
    addSpecification("command template", "coordinated strike at ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::coordinate## "
        "with nearby allies, launching a synchronized strike at ##TargetName##!");

    addSpecification("damage type", "physical");
    addSpecification("damage hit points", ({ ([
        "probability":85,
        "base damage":40,
        "range":40
    ]),
    ([
        "probability":15,
        "base damage":65,
        "range":45
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
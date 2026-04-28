//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Flanking Maneuver");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "You have mastered the art of flanking—striking "
        "from an unexpected angle to bypass enemy defenses. This technique requires "
        "quick thinking and perfect timing, but when executed properly, it can turn "
        "a defended position into a death trap.");

    addPrerequisite("guilds/werric-knight/tactics/tactical-mind.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":5]));

    addSpecification("limited by", (["equipment"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 60);
    addSpecification("stamina point cost", 60);
    addSpecification("command template", "flank ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::maneuver## "
        "into a flanking position and ##Infinitive::strike## ##TargetName## from "
        "an unexpected angle!");

    addSpecification("damage type", "physical");
    addSpecification("damage hit points", ({ ([
        "probability":80,
        "base damage":55,
        "range":50
    ]),
    ([
        "probability":20,
        "base damage":85,
        "range":60
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
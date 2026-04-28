//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Press the Advantage");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "When you sense the enemy weakening, you know "
        "to press the advantage without mercy. This aggressive follow-up can turn "
        "a minor success into a decisive victory, as momentum shifts irreversibly "
        "in your favor.");

    addPrerequisite("guilds/werric-knight/tactics/master-tactician.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":13]));

    addSpecification("limited by", (["equipment"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 80);
    addSpecification("stamina point cost", 85);
    addSpecification("command template", "press advantage on ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::sense## "
        "##TargetName##'s weakening and ##Infinitive::press## the advantage with "
        "aggressive follow-up strikes!");

    addSpecification("damage type", "physical");
    addSpecification("damage hit points", ({ ([
        "probability":75,
        "base damage":85,
        "range":70
    ]),
    ([
        "probability":25,
        "base damage":130,
        "range":90
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
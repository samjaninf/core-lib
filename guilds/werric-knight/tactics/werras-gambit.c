//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Werra's Gambit");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "You execute the legendary tactical maneuver "
        "that won King Werra the Battle of Five Armies. This high-risk, high-reward "
        "strike commits everything to a single decisive blow—the kind of bold move "
        "that either wins wars or loses them. When executed with proper timing, "
        "it cannot fail.");

    addPrerequisite("guilds/werric-knight/tactics/perfect-coordination.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":29]));

    addSpecification("limited by", (["equipment"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 240);
    addSpecification("stamina point cost", 175);
    addSpecification("spell point cost", 100);
    addSpecification("command template", "werras gambit at ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::execute## "
        "Werra's Gambit, the legendary all-or-nothing strike that ##Infinitive::commit## "
        "everything to defeating ##TargetName##!");

    addSpecification("damage type", "physical");
    addSpecification("damage hit points", ({ ([
        "probability":50,
        "base damage":150,
        "range":120
    ]),
    ([
        "probability":35,
        "base damage":225,
        "range":150
    ]),
    ([
        "probability":15,
        "base damage":325,
        "range":175
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
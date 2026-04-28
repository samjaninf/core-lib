//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Phantom Strike");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "This elven technique is so swift that it appears "
        "your blade strikes from two places simultaneously. The effect is disorienting "
        "to opponents and devastating in practice—by the time they react to the feint, "
        "the real strike has already landed.");

    addPrerequisite("guilds/werric-knight/elven/eneldhor-technique.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":13]));

    addSpecification("limited by", (["equipment"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 75);
    addSpecification("stamina point cost", 85);
    addSpecification("command template", "phantom strike at ##Target##");
    addSpecification("use ability message", "##InitiatorName##'s blade seems to blur, "
        "striking ##TargetName## from two places at once in a phantom strike!");

    addSpecification("damage type", "physical");
    addSpecification("damage hit points", ({ ([
        "probability":75,
        "base damage":90,
        "range":75
    ]),
    ([
        "probability":25,
        "base damage":140,
        "range":100
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
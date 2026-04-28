//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Dancing Blade");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "This flowing technique makes your blade seem "
        "to dance through the air, striking from multiple angles in rapid succession. "
        "It is said that when Daedrun demonstrated this technique, his blade wove "
        "patterns so intricate they resembled elven calligraphy written in steel.");

    addPrerequisite("guilds/werric-knight/elven/elven-precision.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":5]));

    addSpecification("limited by", (["equipment"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 55);
    addSpecification("stamina point cost", 60);
    addSpecification("command template", "dancing blade at ##Target##");
    addSpecification("use ability message", "##InitiatorName##'s blade ##Infinitive::dance:: "
        "through the air, striking ##TargetName## from multiple angles in rapid succession!");

    addSpecification("damage type", "physical");
    addSpecification("damage hit points", ({ ([
        "probability":80,
        "base damage":60,
        "range":55
    ]),
    ([
        "probability":20,
        "base damage":95,
        "range":70
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
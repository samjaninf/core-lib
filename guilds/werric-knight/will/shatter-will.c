//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Shatter Will");
    addSpecification("source", "Werric Knight");
    addSpecification("description", "You can project your superior will directly "
        "into an opponent's mind, shattering their resolve through sheer force of "
        "determination. Those struck by this technique often find themselves unable "
        "to continue fighting, their confidence destroyed by the overwhelming weight "
        "of your conviction.");

    addPrerequisite("guilds/werric-knight/will/absolute-determination.c",
        (["type":"research"]));
    addPrerequisite("/guilds/werric-knight/werric-knight.c",
        (["type":"guild", "level":27]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 120);
    addSpecification("spell point cost", 125);
    addSpecification("stamina point cost", 100);
    addSpecification("command template", "shatter will of ##Target##");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::project:: "
        "overwhelming will at ##TargetName##, shattering ##TargetPossessive## resolve!");

    addSpecification("damage type", "psionic");
    addSpecification("damage hit points", ({ ([
        "probability":70,
        "base damage":50,
        "range":85
    ]),
    ([
        "probability":30,
        "base damage":100,
        "range":170
    ]) }));

    addSpecification("modifiers", ({
        ([
            "type":"research",
            "research item":"/guilds/werric-knight/will/willpower-manifestation.c",
            "name":"Willpower Manifestation",
            "formula":"multiplicative",
            "base value":1,
            "rate":1.25
        ]),
        ([
            "type":"skill",
            "name":"intimidation",
            "formula":"additive",
            "rate":0.10
        ]),
        ([
            "type":"skill",
            "name":"philosophy",
            "formula":"additive",
            "rate":0.10
        ]),
        ([
            "type":"attribute",
            "name":"wisdom",
            "formula":"additive",
            "rate":0.15
        ]),
        ([
            "type":"attribute",
            "name":"charisma",
            "formula":"additive",
            "rate":0.25
        ])
    }));
}

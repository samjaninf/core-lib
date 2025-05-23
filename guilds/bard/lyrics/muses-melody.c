//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Muse's Melody");
    addSpecification("source", "bard");
    addSpecification("composite research",
        "/guilds/bard/compositions/root.c");
    addSpecification("composite type", "lyric");
    addSpecification("composite class", "lyric");
    addSpecification("default composite description",
        "My weary eyes have seen the pains of this wretched life...");

    addSpecification("description", "This skill provides the user with the "
        "knowledge of creating basic healing lyrics for songs. These "
        "provide a boost to all allies' rates of healing.");

    addPrerequisite("level", 
        (["type": "level", 
          "guild": "bard",
          "value": 3 ]));
    addPrerequisite("singing",
        ([  "type": "skill",
            "value": 5
        ]));
    addPrerequisite("/guilds/bard/lyrics/inspiring-lyrics.c",
        (["type":"research"]));

    addSpecification("modifiers", ({ 
        ([
            "type": "research",
            "research item": "/guilds/bard/lyrics/silver-tongue.c",
            "name": "Silver Tongue",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 2.0
        ]),
        ([
            "type": "research",
            "research item": "/guilds/bard/compositions/aaba.c",
            "name": "AABA",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.1
        ]),
        ([
            "type": "skill",
            "name": "singing",
            "formula": "additive",
            "rate": 0.05
        ]),
        ([
            "type": "skill",
            "name": "dancing",
            "formula": "additive",
            "rate": 0.05
        ]), 
        ([
            "type":"attribute",
            "name": "charisma",
            "formula": "additive",
            "rate": 0.05
        ]), 
    }));

    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);

    addSpecification("spell point cost", 25);

    addSpecification("bonus heal hit points rate", 25);
    addSpecification("bonus heal spell points rate", 25);
    addSpecification("bonus heal stamina rate", 25);

    addSpecification("duration", 20);

    addSpecification("event handler", "inspiringLyricEvent");
    addSpecification("use composite message", "##InitiatorName## ##Infinitive::sing##, '##CompositeSegment##'");
}

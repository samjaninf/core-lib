//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/guilds/baseGuild.c";

/////////////////////////////////////////////////////////////////////////////
public void SetupGuild()
{
    guildName("Wrathguard");
    addPreferredSkillType("magic");

    prohibitedGuildCombinations(({ "Scion of Dhuras", "fighter", "monk",
        "Aegis Guard", "Drambor Edlothiad", "Guardian of Khazurath",
        "Werric Knight", "Hand of Bilanx", "Children of Ilyrth",
        "Disciple of Ferianth", "druid" }));

    addRank("acolyte", ([
        "name": "acolyte",
        "title": "the Wrathguard",
        "pretitle": "Acolyte",
        "next rank": "priest of wrath",
        "delay for next promotion": 1200
    ]));

    addRank("priest of wrath", ([
        "name": "priest of wrath",
        "title": "the Wrathguard",
        "pretitle": "Priest of Wrath",
        "previous rank": "acolyte",
        "next rank": "high priest",
        "delay for next promotion": 3600
    ]));

    addRank("high priest", ([
        "name": "high priest",
        "title": "the Wrathguard",
        "pretitle": "High Priest",
        "previous rank": "priest of wrath",
        "next rank": "avatar of destruction",
        "delay for next promotion": 7200
    ]));

    addRank("avatar of destruction", ([
        "name": "avatar of destruction",
        "title": ", Avatar of Destruction",
        "pretitle": "Avatar",
        "previous rank": "high priest"
    ]));

    setDefaultRank("acolyte");

    addCriteria("hit points", ([
        "type": "modifier",
        "apply": "3 every level",
        "begin at level": 1
    ]));

    addCriteria("spell points", ([
        "type": "modifier",
        "apply": "6 every level",
        "begin at level": 1
    ]));

    addCriteria("stamina points", ([
        "type": "modifier",
        "apply": "2 every level",
        "begin at level": 1
    ]));

    addCriteria("weapon attack", ([
        "type": "attack",
        "apply": "1 every 15 levels"
    ]));

    addCriteria("attribute points", ([
        "type": "attribute points",
        "apply": "1 every 5 levels"
    ]));

    addCriteria("skill points", ([
        "type": "skill points",
        "apply": "5 every level"
    ]));

    addCriteria("initial research points", ([
        "type": "research points",
        "apply": "5 at level 1"
    ]));

    addCriteria("research points", ([
        "type": "research points",
        "apply": "1 every level"
    ]));

    addCriteria("supplemental research points", ([
        "type": "research points",
        "apply": "2 every 5 levels"
    ]));

    addCriteria("destruction magic", ([
        "type": "research tree",
        "apply": "at level 1",
        "research tree": "/guilds/wrathguard/destruction-magic.c"
    ]));

    addCriteria("wrath of seilyndria", ([
        "type": "research tree",
        "apply": "at level 1",
        "research tree": "/guilds/wrathguard/wrath-of-seilyndria.c"
    ]));

    addCriteria("combat priest", ([
        "type": "research tree",
        "apply": "at level 1",
        "research tree": "/guilds/wrathguard/combat-priest.c"
    ]));

    addCriteria("dark blessings", ([
        "type": "research tree",
        "apply": "at level 3",
        "research tree": "/guilds/wrathguard/dark-blessings.c"
    ]));

    addCriteria("fury", ([
        "type": "research tree",
        "apply": "at level 3",
        "research tree": "/guilds/wrathguard/fury.c"
    ]));

    addCriteria("vengeance", ([
        "type": "research tree",
        "apply": "at level 5",
        "research tree": "/guilds/wrathguard/vengeance.c"
    ]));

    addCriteria("zealot", ([
        "type": "research tree",
        "apply": "at rank priest of wrath",
        "research tree": "/guilds/wrathguard/zealot.c"
    ]));

    addCriteria("divine wrath", ([
        "type": "research tree",
        "apply": "at rank high priest",
        "research tree": "/guilds/wrathguard/divine-wrath.c"
    ]));
}

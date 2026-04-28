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

    addCriteria("hit points", ([
        "type": "modifier",
        "apply" : "3 every level",
        "begin at level" : 1
    ]));

    addCriteria("spell points", ([
        "type": "modifier",
        "apply" : "6 every level",
        "begin at level" : 1
    ]));

    addCriteria("stamina points", ([
        "type": "modifier",
        "apply" : "2 every level",
        "begin at level" : 1
    ]));

    addCriteria("weapon attack", ([
        "type":"attack",
        "apply" : "1 every 15 levels"
    ]));

    addCriteria("attribute points", ([
        "type":"attribute points",
        "apply": "1 every 5 levels"
    ]));

    addCriteria("skill points", ([
        "type":"skill points",
        "apply" : "5 every level"
    ]));

    addCriteria("initial research points", ([
        "type":"research points",
        "apply": "at level 1"
    ]));

    addCriteria("research points", ([
        "type":"research points",
        "apply" : "1 every level"
    ]));

    addCriteria("research points", ([
        "type":"research points",
        "apply" : "1 every 5 levels"
    ]));

    addCriteria("bonus spell points", ([
        "type": "bonus modifier",
        "apply" : "10 at level 5",
        "types" : ({ "spell points" }),
        "begin at level" : 5
    ]));

    addResearchTree("/guilds/wrathguard/destruction-magic.c");
    addResearchTree("/guilds/wrathguard/wrath-of-seilyndria.c");
    addResearchTree("/guilds/wrathguard/combat-priest.c");
    addResearchTree("/guilds/wrathguard/dark-blessings.c");
    addResearchTree("/guilds/wrathguard/fury.c");
    addResearchTree("/guilds/wrathguard/vengeance.c");
    addResearchTree("/guilds/wrathguard/zealot.c");
    addResearchTree("/guilds/wrathguard/divine-wrath.c");

    addRank("acolyte", ([
        "title" : "Acolyte",
        "new rank prerequisite" : ([ "level" : 1 ]),
        "spell point bonus" : 25,
        "description" : "You have joined the Wrathguard, servants of Seilyndria's wrath."
    ]));

    addRank("priest of wrath", ([
        "title" : "Priest of Wrath",
        "new rank prerequisite" : ([ "level" : 15, "guilds/wrathguard/wrath-of-seilyndria.c":15 ]),
        "spell point bonus" : 50,
        "hit point bonus" : 25,
        "description" : "You channel the destructive power of the goddess."
    ]));

    addRank("high priest", ([
        "title" : "High Priest",
        "new rank prerequisite" : ([ "level" : 30, "guilds/wrathguard/divine-wrath.c":25 ]),
        "spell point bonus" : 75,
        "hit point bonus" : 50,
        "weapon attack bonus" : 2,
        "description" : "Your mastery of wrath magic is nearly complete."
    ]));

    addRank("avatar of destruction", ([
        "title" : "Avatar of Destruction",
        "new rank prerequisite" : ([ "level" : 50, "guilds/wrathguard/zealot.c":40 ]),
        "spell point bonus" : 100,
        "hit point bonus" : 75,
        "weapon attack bonus" : 3,
        "description" : "You are the living embodiment of Seilyndria's destructive fury."
    ]));
}

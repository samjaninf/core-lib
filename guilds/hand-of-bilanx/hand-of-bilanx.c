//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/guilds/baseGuild.c";

/////////////////////////////////////////////////////////////////////////////
public void SetupGuild()
{
    guildName("Hand of Bilanx");
    addPreferredSkillType("magic");

    prohibitedGuildCombinations(({ "Scion of Dhuras", "fighter", "monk",
        "Aegis Guard", "Drambor Edlothiad", "Guardian of Khazurath",
        "Werric Knight", "Wrathguard", "Disciple of Argloth",
        "League of Assassins", "necromancer" }));

    addCriteria("hit points", ([
        "type": "modifier",
        "apply" : "4 every level",
        "begin at level" : 1
    ]));

    addCriteria("spell points", ([
        "type": "modifier",
        "apply" : "4 every level",
        "begin at level" : 1
    ]));

    addCriteria("stamina points", ([
        "type": "modifier",
        "apply" : "4 every level",
        "begin at level" : 1
    ]));

    addCriteria("weapon attack", ([
        "type":"attack",
        "apply" : "1 every 12 levels"
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

    addCriteria("balanced bonus", ([
        "type": "bonus modifier",
        "apply" : "8 at level 8",
        "types" : ({ "hit points", "spell points", "stamina points" }),
        "begin at level" : 8
    ]));

    addResearchTree("/guilds/hand-of-bilanx/equilibrium.c");
    addResearchTree("/guilds/hand-of-bilanx/balance-magic.c");
    addResearchTree("/guilds/hand-of-bilanx/harmony.c");
    addResearchTree("/guilds/hand-of-bilanx/duality.c");
    addResearchTree("/guilds/hand-of-bilanx/restoration.c");
    addResearchTree("/guilds/hand-of-bilanx/neutrality.c");
    addResearchTree("/guilds/hand-of-bilanx/cosmic-order.c");
    addResearchTree("/guilds/hand-of-bilanx/perfect-balance.c");

    addRank("seeker", ([
        "title" : "Seeker",
        "new rank prerequisite" : ([ "level" : 1 ]),
        "hit point bonus" : 20,
        "spell point bonus" : 20,
        "stamina point bonus" : 20,
        "description" : "You seek the path of perfect balance."
    ]));

    addRank("adept of balance", ([
        "title" : "Adept of Balance",
        "new rank prerequisite" : ([ "level" : 15, "guilds/hand-of-bilanx/equilibrium.c":15 ]),
        "hit point bonus" : 40,
        "spell point bonus" : 40,
        "stamina point bonus" : 40,
        "description" : "You understand the fundamental principles of cosmic balance."
    ]));

    addRank("master of duality", ([
        "title" : "Master of Duality",
        "new rank prerequisite" : ([ "level" : 30, "guilds/hand-of-bilanx/duality.c":25 ]),
        "hit point bonus" : 60,
        "spell point bonus" : 60,
        "stamina point bonus" : 60,
        "weapon attack bonus" : 2,
        "description" : "You have mastered the dual nature of existence."
    ]));

    addRank("hand of bilanx", ([
        "title" : "Hand of Bilanx",
        "new rank prerequisite" : ([ "level" : 50, "guilds/hand-of-bilanx/perfect-balance.c":40 ]),
        "hit point bonus" : 80,
        "spell point bonus" : 80,
        "stamina point bonus" : 80,
        "weapon attack bonus" : 3,
        "description" : "You embody the perfect balance, a true Hand of the god Bilanx."
    ]));
}

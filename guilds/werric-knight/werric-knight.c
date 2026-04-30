//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/guilds/baseGuild.c";

/////////////////////////////////////////////////////////////////////////////
public void SetupGuild()
{
    guildName("Werric Knight");
    addPreferredSkillType("combat");

    prohibitedGuildCombinations(({ "Scion of Dhuras", "fighter", "monk", "Aegis Guard",
        "Drambor Edlothiad", "Guardian of Khazurath", "Wrathguard",
        "Disciple of Argloth", "Hand of Bilanx", "League of Assassins",
        "ranger", "rogue" }));

    addCriteria("hit points", ([
        "type": "modifier",
        "apply" : "5 every level",
        "begin at level" : 1
    ]));
    addCriteria("spell points", ([
        "type": "modifier",
        "apply" : "2 every level",
        "begin at level" : 1
    ]));
    addCriteria("stamina points", ([
        "type": "modifier",
        "apply" : "3 every level",
        "begin at level" : 1
    ]));

    addCriteria("weapon attack", ([
        "type":"attack",
        "apply" : "1 every 10 levels"
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

    addCriteria("bonus hit points", ([
        "type": "bonus modifier",
        "apply" : "5 at level 5",
        "types" : ({ "hit points" }),
        "begin at level" : 5
    ]));

    addCriteria("bonus stamina", ([
        "type": "bonus modifier",
        "apply" : "3 at level 10",
        "types" : ({ "stamina points" }),
        "begin at level" : 10
    ]));

    addResearchTree("/guilds/werric-knight/sword-mastery.c");
    addResearchTree("/guilds/werric-knight/shield-mastery.c");
    addResearchTree("/guilds/werric-knight/oath-bound.c");
    addResearchTree("/guilds/werric-knight/light-magic.c");
    addResearchTree("/guilds/werric-knight/defensive-tactics.c");
    addResearchTree("/guilds/werric-knight/mounted-combat.c");
    addResearchTree("/guilds/werric-knight/discipline.c");
    addResearchTree("/guilds/werric-knight/knightly-virtues.c");
    addResearchTree("/guilds/werric-knight/elven-martial-arts.c");
    addResearchTree("/guilds/werric-knight/tactical-warfare.c");
    addResearchTree("/guilds/werric-knight/unbroken-will.c");
    addResearchTree("/guilds/werric-knight/defender-of-crown.c");
    addResearchTree("/guilds/werric-knight/lord-marshal.c");

    addRank("initiate", ([
        "title" : "Initiate",
        "new rank prerequisite" : ([ "level" : 1 ]),
        "hit point bonus" : 25,
        "stamina point bonus" : 15,
        "description" : "You have taken the first step on the path of the Werric Knight."
    ]));

    addRank("sworn knight", ([
        "title" : "Sworn Knight",
        "new rank prerequisite" : ([ "level" : 15, "guilds/werric-knight/oath-bound.c":15 ]),
        "hit point bonus" : 50,
        "stamina point bonus" : 25,
        "weapon attack bonus" : 2,
        "description" : "You have sworn the Oath of Werric and become a true knight."
    ]));

    addRank("knight commander", ([
        "title" : "Knight Commander",
        "new rank prerequisite" : ([ "level" : 30, "guilds/werric-knight/discipline.c":25 ]),
        "hit point bonus" : 75,
        "stamina point bonus" : 35,
        "weapon attack bonus" : 3,
        "description" : "Your discipline and skill have earned you command authority."
    ]));

    addRank("lord marshal", ([
        "title" : "Lord Marshal",
        "new rank prerequisite" : ([ "level" : 50, "guilds/werric-knight/knightly-virtues.c":40 ]),
        "hit point bonus" : 100,
        "stamina point bonus" : 50,
        "weapon attack bonus" : 5,
        "description" : "You stand among the greatest knights of Werric, a Lord Marshal of the Order."
    ]));
}

    addCriteria("research points", ([
        "type":"research points",
        "apply": "1 every level"
    ]));

    addCriteria("supplemental research points", ([
        "type":"research points",
        "apply": "2 every 5 levels"
    ]));
}

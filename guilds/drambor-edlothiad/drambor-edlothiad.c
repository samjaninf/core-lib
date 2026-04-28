//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/guilds/baseGuild.c";

/////////////////////////////////////////////////////////////////////////////
public void SetupGuild()
{
    guildName("Drambor Edlothiad");
    addPreferredSkillType("combat");
    prohibitedGuildCombinations(({ "Scion of Dhuras", "fighter", "monk", 
        "Disciple of Argloth", "Guardian of Khazurath",
        "League of Assassins", "phaedra", "ranger", "rogue", "Werric Knight",
        "Wrathguard", "necromancer", "Aegis Guard", "Hand of Bilanx" }));

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
        "apply" : "10 at level 10",
        "types" : ({ "hit points" }),
        "begin at level" : 10
    ]));

    addCriteria("bonus spell points", ([
        "type": "bonus modifier",
        "apply" : "10 at level 10",
        "types" : ({ "spell points" }),
        "begin at level" : 10
    ]));

    addResearchTree("/guilds/drambor-edlothiad/blade-and-magic.c");
    addResearchTree("/guilds/drambor-edlothiad/elven-sorcery.c");
    addResearchTree("/guilds/drambor-edlothiad/battle-magic.c");
    addResearchTree("/guilds/drambor-edlothiad/arcane-warrior.c");
    addResearchTree("/guilds/drambor-edlothiad/elemental-blade.c");
    addResearchTree("/guilds/drambor-edlothiad/mystical-defense.c");
    addResearchTree("/guilds/drambor-edlothiad/elven-heritage.c");
}

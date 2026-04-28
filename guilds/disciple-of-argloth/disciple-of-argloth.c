//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/guilds/baseGuild.c";

/////////////////////////////////////////////////////////////////////////////
public void SetupGuild()
{
    guildName("Disciple of Argloth");
    addPreferredSkillType("magic");

    prohibitedGuildCombinations(({ "Scion of Dhuras", "fighter", "monk", 
        "Drambor Edlothiad", "Guardian of Khazurath", "Children of Ilyrth",
        "League of Assassins", "phaedra", "ranger", "rogue", "Werric Knight",
        "Wrathguard", "necromancer", "Aegis Guard", "Disciple of Ferianth",
        "druid", "Hand of Bilanx" }));

    addCriteria("hit points", ([
        "type": "modifier",
        "apply" : "4 every level",
        "begin at level" : 1
    ]));

    addCriteria("spell points", ([
        "type": "modifier",
        "apply" : "5 every level",
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
        "apply" : "15 at level 10",
        "types" : ({ "spell points" }),
        "begin at level" : 10
    ]));

    addResearchTree("/guilds/disciple-of-argloth/necromancy.c");
    addResearchTree("/guilds/disciple-of-argloth/corrupted-knowledge.c");
    addResearchTree("/guilds/disciple-of-argloth/dark-scholar.c");
    addResearchTree("/guilds/disciple-of-argloth/death-magic.c");
    addResearchTree("/guilds/disciple-of-argloth/shadow-arts.c");
    addResearchTree("/guilds/disciple-of-argloth/forbidden-lore.c");
    addResearchTree("/guilds/disciple-of-argloth/obsession.c");
}

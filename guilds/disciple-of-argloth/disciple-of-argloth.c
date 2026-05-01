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

    addRank("acolyte", ([
        "name": "acolyte",
        "title": "the Disciple of Argloth",
        "pretitle": "Acolyte",
        "next rank": "death scholar",
        "delay for next promotion": 1200
    ]));

    addRank("death scholar", ([
        "name": "death scholar",
        "title": "the Disciple of Argloth",
        "pretitle": "Death Scholar",
        "previous rank": "acolyte",
        "next rank": "necromancer adept",
        "delay for next promotion": 3600
    ]));

    addRank("necromancer adept", ([
        "name": "necromancer adept",
        "title": "the Disciple of Argloth",
        "pretitle": "Necromancer Adept",
        "previous rank": "death scholar",
        "next rank": "high necromancer",
        "delay for next promotion": 7200
    ]));

    addRank("high necromancer", ([
        "name": "high necromancer",
        "title": ", High Necromancer of Argloth",
        "pretitle": "High Necromancer",
        "previous rank": "necromancer adept"
    ]));

    setDefaultRank("acolyte");

    addCriteria("hit points", ([
        "type": "modifier",
        "apply": "4 every level",
        "begin at level": 1
    ]));

    addCriteria("spell points", ([
        "type": "modifier",
        "apply": "5 every level",
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

    addCriteria("necromancy", ([
        "type": "research tree",
        "apply": "at level 1",
        "research tree": "/guilds/disciple-of-argloth/necromancy.c"
    ]));

    addCriteria("corrupted knowledge", ([
        "type": "research tree",
        "apply": "at level 1",
        "research tree": "/guilds/disciple-of-argloth/corrupted-knowledge.c"
    ]));

    addCriteria("dark scholar", ([
        "type": "research tree",
        "apply": "at level 1",
        "research tree": "/guilds/disciple-of-argloth/dark-scholar.c"
    ]));

    addCriteria("death magic", ([
        "type": "research tree",
        "apply": "at level 3",
        "research tree": "/guilds/disciple-of-argloth/death-magic.c"
    ]));

    addCriteria("shadow arts", ([
        "type": "research tree",
        "apply": "at level 3",
        "research tree": "/guilds/disciple-of-argloth/shadow-arts.c"
    ]));

    addCriteria("forbidden lore", ([
        "type": "research tree",
        "apply": "at rank death scholar",
        "research tree": "/guilds/disciple-of-argloth/forbidden-lore.c"
    ]));

    addCriteria("obsession", ([
        "type": "research tree",
        "apply": "at rank necromancer adept",
        "research tree": "/guilds/disciple-of-argloth/obsession.c"
    ]));
}

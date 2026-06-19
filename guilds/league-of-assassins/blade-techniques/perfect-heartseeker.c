//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Perfect Heartseeker");
    addSpecification("source", "League of Assassins");
    addSpecification("description", "This research achieves the pinnacle of "
        "the heartseeker form. The assassin's lunge becomes a blur of "
        "motion that bypasses conventional defenses entirely.");

    addPrerequisite("level",
        (["type": "level",
            "guild": "League of Assassins",
            "value": 41
        ]));
    addPrerequisite("/guilds/league-of-assassins/blade-techniques/"
        "improved-heartseeker.c",
        (["type": "research"]));

    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("affected research", ([
        "Heartseeker": 25,
        "Bladestorm": 15
    ]));
    addSpecification("affected research type", "percentage");
}

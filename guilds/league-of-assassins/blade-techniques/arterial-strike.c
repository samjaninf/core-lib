//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Arterial Strike");
    addSpecification("source", "League of Assassins");
    addSpecification("description", "This research provides the user with "
        "a precise understanding of arterial placement. By targeting major "
        "blood vessels, the assassin dramatically improves the crippling "
        "potential of their heartseeker technique and its variants.");

    addPrerequisite("level",
        (["type": "level",
            "guild": "League of Assassins",
            "value": 35
        ]));
    addPrerequisite("/guilds/league-of-assassins/blade-techniques/"
        "improved-heartseeker.c",
        (["type": "research"]));

    addSpecification("research type", "points");
    addSpecification("research cost", 1);

    addSpecification("affected research type", "percentage");
    addSpecification("affected research", ([
        "Heartseeker": 15,
        "Improved Heartseeker": 20,
        "Perfect Heartseeker": 20
    ]));

    addSpecification("related research", ({
        "/guilds/league-of-assassins/blade-techniques/heartseeker.c",
        "/guilds/league-of-assassins/blade-techniques/improved-heartseeker.c",
        "/guilds/league-of-assassins/blade-techniques/perfect-heartseeker.c"
    }));
}

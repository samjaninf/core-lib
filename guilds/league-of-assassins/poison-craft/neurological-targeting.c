//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Neurological Targeting");
    addSpecification("source", "League of Assassins");
    addSpecification("description", "This research provides the user with "
        "an understanding of how toxins attack the nervous system. "
        "The assassin learns to apply poisons in ways that maximize "
        "neurological disruption, enhancing the slowing and "
        "enfeebling effects of all their techniques.");

    addPrerequisite("level",
        (["type": "level",
            "guild": "League of Assassins",
            "value": 45
        ]));
    addPrerequisite("/guilds/league-of-assassins/poison-craft/"
        "assassins-poison-mastery.c",
        (["type": "research"]));

    addSpecification("research type", "points");
    addSpecification("research cost", 1);

    addSpecification("affected research type", "percentage");
    addSpecification("affected research", ([
        "Sleep Draught": 10,
        "Improved Sleep Draught": 10,
        "Perfect Sleep Draught": 15,
        "Contact Poison": 10,
        "Improved Contact Poison": 10,
        "Perfect Wasting Blight": 15
    ]));

    addSpecification("related research", ({
        "/guilds/league-of-assassins/poison-craft/sleep-draught.c",
        "/guilds/league-of-assassins/poison-craft/perfect-sleep-draught.c",
        "/guilds/league-of-assassins/poison-craft/contact-poison.c",
        "/guilds/league-of-assassins/poison-craft/perfect-wasting-blight.c"
    }));
}

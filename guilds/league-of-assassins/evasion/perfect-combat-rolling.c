//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

protected void Setup()
{
    addSpecification("name", "Perfect Combat Rolling");
    addSpecification("source", "League of Assassins");
    addSpecification("description", "This research represents true mastery "
        "of combat rolling, allowing the assassin to chain defensive "
        "maneuvers with minimal cost.");
    addPrerequisite("level",
        (["type":"level","guild":"League of Assassins","value":25]));
    addPrerequisite("/guilds/league-of-assassins/evasion/improved-combat-rolling.c",
        (["type":"research"]));
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("affected research type", "percentage");
    addSpecification("affected research", (["combat rolling": 35]));
    addSpecification("related research", ({
        "/guilds/league-of-assassins/evasion/combat-rolling.c",
        "/guilds/league-of-assassins/evasion/improved-combat-rolling.c"
    }));
}

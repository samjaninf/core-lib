//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

protected void Setup()
{
    addSpecification("name", "Perfect Final Reckoning");
    addSpecification("source", "League of Assassins");
    addSpecification("description", "This research refines the "
        "final reckoning technique, amplifying its impact "
        "through improved blade control and anatomical targeting.");
    addPrerequisite("level",
        (["type":"level","guild":"League of Assassins","value":55]));
    addPrerequisite(
        "/guilds/league-of-assassins/assassin-path/improved-final-reckoning.c",
        (["type":"research"]));
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("affected research type", "percentage");
    addSpecification("affected research", (["Final Reckoning": 25]));
    addSpecification("related research", ({
        "/guilds/league-of-assassins/assassin-path/improved-final-reckoning.c",
        "/guilds/league-of-assassins/assassin-path/final-reckoning.c"
    }));
}

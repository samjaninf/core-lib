//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

protected void Setup()
{
    addSpecification("name", "Supreme Evasion Theory");
    addSpecification("source", "League of Assassins");
    addSpecification("description", "This research represents the complete "
        "theoretical framework of the League's evasion doctrine, "
        "covering all aspects from the simplest sidestep to the "
        "most advanced ghost form.");
    addPrerequisite("level",
        (["type":"level","guild":"League of Assassins","value":55]));
    addPrerequisite("/guilds/league-of-assassins/evasion/supreme-evasion.c",
        (["type":"research"]));
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("related research", ({
        "/guilds/league-of-assassins/evasion/supreme-evasion.c",
        "/guilds/league-of-assassins/evasion/ghost-form.c",
        "/guilds/league-of-assassins/evasion/wind-dancer.c"
    }));
}

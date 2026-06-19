//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

protected void Setup()
{
    addSpecification("name", "Perfect Shadow Volley");
    addSpecification("source", "League of Assassins");
    addSpecification("description", "This research represents mastery of "
        "the shadow volley technique. The assassin strikes from "
        "every angle simultaneously, making defense nearly "
        "impossible for any opponent.");
    addPrerequisite("level",
        (["type":"level","guild":"League of Assassins","value":35]));
    addPrerequisite(
        "/guilds/league-of-assassins/shadow-mastery/improved-shadow-volley.c",
        (["type":"research"]));
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("affected research type", "percentage");
    addSpecification("affected research", (["shadow volley": 25]));
    addSpecification("related research", ({
        "/guilds/league-of-assassins/shadow-mastery/shadow-volley.c",
        "/guilds/league-of-assassins/shadow-mastery/improved-shadow-volley.c"
    }));
}

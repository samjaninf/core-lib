//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

protected void Setup()
{
    addSpecification("name", "Perfect Feint");
    addSpecification("source", "League of Assassins");
    addSpecification("description", "This research represents mastery of "
        "the feint, making it indistinguishable from a real attack "
        "until the last possible moment.");
    addPrerequisite("level",
        (["type":"level","guild":"League of Assassins","value":13]));
    addPrerequisite("/guilds/league-of-assassins/deception-techniques/improved-feint.c",
        (["type":"research"]));
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("affected research type", "percentage");
    addSpecification("affected research", (["feint": 40]));
    addSpecification("related research", ({
        "/guilds/league-of-assassins/deception-techniques/feint.c",
        "/guilds/league-of-assassins/deception-techniques/improved-feint.c"
    }));
}

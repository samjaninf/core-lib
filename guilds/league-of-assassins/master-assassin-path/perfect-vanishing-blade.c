//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

protected void Setup()
{
    addSpecification("name", "Perfect Vanishing Blade");
    addSpecification("source", "League of Assassins");
    addSpecification("description", "This research refines the vanishing blade technique.");
    addPrerequisite("level",(["type":"level","guild":"League of Assassins","value":65]));
    addPrerequisite(
        "/guilds/league-of-assassins/master-assassin-path/improved-vanishing-blade.c",
        (["type":"research"]));
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("affected research type", "percentage");
    addSpecification("affected research", (["Vanishing Blade": 25]));
    addSpecification("related research", ({
        "/guilds/league-of-assassins/master-assassin-path/improved-vanishing-blade.c",
        "/guilds/league-of-assassins/master-assassin-path/vanishing-blade.c"
    }));
}
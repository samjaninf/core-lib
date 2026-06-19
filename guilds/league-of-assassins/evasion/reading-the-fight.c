//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

protected void Setup()
{
    addSpecification("name", "Reading the Fight");
    addSpecification("source", "League of Assassins");
    addSpecification("description", "This research covers the analytical "
        "skill of reading an opponent's intentions from subtle cues "
        "in stance, balance, and eye movement. The assassin who "
        "knows where the next blow is going can avoid it with "
        "minimal effort.");
    addPrerequisite("level",
        (["type":"level","guild":"League of Assassins","value":21]));
    addPrerequisite("/guilds/league-of-assassins/evasion/danger-sense.c",
        (["type":"research"]));
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("related research", ({
        "/guilds/league-of-assassins/evasion/danger-sense.c",
        "/guilds/league-of-assassins/evasion/defensive-awareness.c"
    }));
}

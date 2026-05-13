//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Sorcery Mastery");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "Further mastery of elven sorcery.");
    addPrerequisite("/guilds/drambor-edlothiad/sorcery/sorcery-amplification.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 21]));
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("affected research", ([
        "Starlight": 25, "Moonbeam": 25, "Moonfire": 25,
        "Eldritch Star": 25, "Celestial Lance": 25,
        "Ancient Power": 25, "Elder Star": 25,
    ]));
    addSpecification("affected research type", "percentage");
}

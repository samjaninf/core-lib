//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Sorcery Transcendence");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "Transcendent mastery of all sorcery.");
    addPrerequisite("/guilds/drambor-edlothiad/sorcery/sorcery-supremacy.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 51]));
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("affected research", ([
        "Starlight": 25, "Moonbeam": 25, "Moonfire": 25,
        "Eldritch Star": 25, "Celestial Lance": 25,
        "Ancient Power": 25, "Elder Star": 25, "Primordial Light": 25,
        "Star of Creation": 25,
    ]));
    addSpecification("affected research type", "percentage");
}

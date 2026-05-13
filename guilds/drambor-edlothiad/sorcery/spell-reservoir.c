//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Spell Reservoir");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "Teaches maintenance of an internal spell reservoir.");
    addPrerequisite("/guilds/drambor-edlothiad/sorcery/ancient-knowledge.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 5]));
    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus spell points", 20);
    addSpecification("bonus magical essence", 2);
}

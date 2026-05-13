//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Immortal Knowledge");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "Knowledge accumulated across immortal lifetimes.");
    addPrerequisite("/guilds/drambor-edlothiad/sorcery/transcendent-knowledge.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 55]));
    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus spellcraft", 18);
    addSpecification("bonus magical essence", 15);
    addSpecification("bonus spell points", 125);
}

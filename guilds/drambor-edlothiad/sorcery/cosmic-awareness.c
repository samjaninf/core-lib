//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Cosmic Awareness");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "Awareness of cosmic magical forces.");
    addPrerequisite("/guilds/drambor-edlothiad/sorcery/astral-mastery.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 53]));
    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus spellcraft", 15);
    addSpecification("bonus magical essence", 12);
    addSpecification("bonus spell points", 80);
}

//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Eternal Wisdom");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "The eternal wisdom of the eldest elven sorcerers.");
    addPrerequisite("/guilds/drambor-edlothiad/sorcery/immortal-knowledge.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 63]));
    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus spellcraft", 20);
    addSpecification("bonus magical essence", 18);
    addSpecification("bonus spell points", 150);
}

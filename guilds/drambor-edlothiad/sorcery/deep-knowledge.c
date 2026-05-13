//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Deep Knowledge");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "Profound understanding of magical theory.");
    addPrerequisite("/guilds/drambor-edlothiad/sorcery/arcane-lore.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 17]));
    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus spellcraft", 6);
    addSpecification("bonus magical essence", 5);
    addSpecification("bonus spell points", 35);
}

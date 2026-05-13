//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Arcane Vigor");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research infuses the body with arcane vigor.");

    addPrerequisite("/guilds/drambor-edlothiad/spellsword/grand-spell-sword.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 35]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus hit points", 50);
    addSpecification("bonus spell points", 50);
    addSpecification("bonus stamina points", 30);
}
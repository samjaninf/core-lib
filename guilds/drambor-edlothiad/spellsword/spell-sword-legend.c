//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Spell Sword Legend");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research becomes a legend of the spell sword tradition.");

    addPrerequisite("/guilds/drambor-edlothiad/spellsword/apex-predator.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 57]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus attack", 7);
    addSpecification("bonus damage", 7);
    addSpecification("bonus spellcraft", 7);
}
//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Ice Storm");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches the ice storm spell, "
        "summoning a barrage of freezing hail and ice shards.");
    addPrerequisite("/guilds/drambor-edlothiad/battle/force-blast.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 13]));
    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 55);
    addSpecification("cooldown", 18);
    addSpecification("duration", 4);
    addSpecification("damage type", "cold");
    addSpecification("bonus cold attack", 12);
    addSpecification("modifiers", ({
        (["type": "skill", "name": "spellcraft", "formula": "logarithmic", "rate": 1.25]),
        (["type": "skill", "name": "elemental water", "formula": "additive", "rate": 0.10]),
        (["type": "level", "name": "level", "formula": "logarithmic", "rate": 1.10]),
        (["type": "attribute", "name": "intelligence", "formula": "additive", "rate": 0.05]),
    }));
    addSpecification("command template", "ice storm");
    addSpecification("use ability message", "##InitiatorName## "
        "##Infinitive::summon## a howling ice storm, pelting the area with shards of ice.");
}

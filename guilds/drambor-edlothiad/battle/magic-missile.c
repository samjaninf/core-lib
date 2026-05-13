//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Magic Missile");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches the classic magic missile "
        "spell, launching multiple tracking bolts of force.");
    addPrerequisite("/guilds/drambor-edlothiad/battle/arcane-bolt.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 3]));
    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 30);
    addSpecification("cooldown", 8);
    addSpecification("duration", 4);
    addSpecification("damage type", "magical");
    addSpecification("bonus magical attack", 8);
    addSpecification("modifiers", ({
        (["type": "skill", "name": "spellcraft", "formula": "logarithmic", "rate": 1.25]),
        (["type": "level", "name": "level", "formula": "logarithmic", "rate": 1.10]),
        (["type": "attribute", "name": "intelligence", "formula": "additive", "rate": 0.05]),
    }));
    addSpecification("command template", "magic missile");
    addSpecification("use ability message", "##InitiatorName## "
        "##Infinitive::launch## a volley of magic missiles at ##TargetName##.");
}

//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Force Blast");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches a concentrated blast "
        "of arcane force that can stagger opponents.");
    addPrerequisite("/guilds/drambor-edlothiad/battle/magic-missile.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 7]));
    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 40);
    addSpecification("cooldown", 12);
    addSpecification("duration", 4);
    addSpecification("damage type", "energy");
    addSpecification("bonus energy attack", 10);
    addSpecification("modifiers", ({
        (["type": "skill", "name": "spellcraft", "formula": "logarithmic", "rate": 1.25]),
        (["type": "level", "name": "level", "formula": "logarithmic", "rate": 1.10]),
        (["type": "attribute", "name": "intelligence", "formula": "additive", "rate": 0.05]),
    }));
    addSpecification("command template", "force blast");
    addSpecification("use ability message", "##InitiatorName## "
        "##Infinitive::unleash## a concentrated blast of arcane force at ##TargetName##.");
}

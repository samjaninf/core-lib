//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Arcane Bolt");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches a basic bolt of arcane "
        "energy that can be hurled at enemies during combat.");
    addPrerequisite("/guilds/drambor-edlothiad/battle/root.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 1]));
    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 20);
    addSpecification("cooldown", 6);
    addSpecification("duration", 4);
    addSpecification("damage type", "magical");
    addSpecification("bonus magical attack", 5);
    addSpecification("modifiers", ({
        (["type": "skill", "name": "spellcraft", "formula": "logarithmic", "rate": 1.25]),
        (["type": "level", "name": "level", "formula": "logarithmic", "rate": 1.05]),
        (["type": "attribute", "name": "intelligence", "formula": "additive", "rate": 0.05]),
    }));
    addSpecification("command template", "arcane bolt");
    addSpecification("use ability message", "##InitiatorName## "
        "##Infinitive::hurl## a bolt of arcane energy at ##TargetName##.");
}

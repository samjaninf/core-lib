//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Arcane Cataclysm");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches the ultimate battle "
        "magic: an arcane cataclysm that devastates everything in range "
        "with raw magical annihilation.");
    addPrerequisite("/guilds/drambor-edlothiad/battle/reality-tear.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 61]));
    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 250);
    addSpecification("cooldown", 90);
    addSpecification("duration", 4);
    addSpecification("damage type", "magical");
    addSpecification("bonus magical attack", 50);
    addSpecification("bonus energy attack", 25);
    addSpecification("modifiers", ({
        (["type": "research", "research item": "/guilds/drambor-edlothiad/battle/spell-penetration-supremacy.c", "name": "spell-penetration-supremacy", "formula": "multiplicative", "base value": 1, "rate": 1.25]),
        (["type": "research", "research item": "/guilds/drambor-edlothiad/battle/spell-penetration-transcendence.c", "name": "spell-penetration-transcendence", "formula": "multiplicative", "base value": 1, "rate": 1.25]),
        (["type": "skill", "name": "spellcraft", "formula": "logarithmic", "rate": 2.5]),
        (["type": "level", "name": "level", "formula": "logarithmic", "rate": 1.30]),
        (["type": "attribute", "name": "intelligence", "formula": "additive", "rate": 0.15]),
    }));
    addSpecification("command template", "arcane cataclysm");
    addSpecification("use ability message", "##InitiatorName## "
        "##Infinitive::unleash## an arcane cataclysm of unimaginable power, "
        "raw magical annihilation consuming everything.");
}

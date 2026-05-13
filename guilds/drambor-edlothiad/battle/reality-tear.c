//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Reality Tear");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches the battlemage to "
        "tear reality itself, creating a rift of annihilating energy.");
    addPrerequisite("/guilds/drambor-edlothiad/battle/annihilating-barrage.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 51]));
    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 180);
    addSpecification("cooldown", 60);
    addSpecification("duration", 4);
    addSpecification("damage type", "energy");
    addSpecification("bonus energy attack", 40);
    addSpecification("modifiers", ({
        (["type": "research", "research item": "/guilds/drambor-edlothiad/battle/spell-penetration-supremacy.c", "name": "spell-penetration-supremacy", "formula": "multiplicative", "base value": 1, "rate": 1.25]),
        (["type": "research", "research item": "/guilds/drambor-edlothiad/battle/spell-penetration-transcendence.c", "name": "spell-penetration-transcendence", "formula": "multiplicative", "base value": 1, "rate": 1.25]),
        (["type": "skill", "name": "spellcraft", "formula": "logarithmic", "rate": 2.0]),
        (["type": "level", "name": "level", "formula": "logarithmic", "rate": 1.25]),
        (["type": "attribute", "name": "intelligence", "formula": "additive", "rate": 0.10]),
    }));
    addSpecification("command template", "reality tear");
    addSpecification("use ability message", "##InitiatorName## "
        "##Infinitive::tear## open a rift in reality, annihilating energy "
        "pouring through the gap.");
}

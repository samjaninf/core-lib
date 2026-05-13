//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "War Magic");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches devastating war magic "
        "designed for large-scale battlefield destruction.");
    addPrerequisite("/guilds/drambor-edlothiad/battle/chain-lightning.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 17]));
    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 80);
    addSpecification("cooldown", 30);
    addSpecification("duration", 4);
    addSpecification("damage type", "magical");
    addSpecification("bonus magical attack", 15);
    addSpecification("bonus energy attack", 10);
    addSpecification("modifiers", ({
        (["type": "research", "research item": "/guilds/drambor-edlothiad/battle/spell-penetration.c", "name": "spell-penetration", "formula": "multiplicative", "base value": 1, "rate": 1.25]),
        (["type": "skill", "name": "spellcraft", "formula": "logarithmic", "rate": 1.50]),
        (["type": "level", "name": "level", "formula": "logarithmic", "rate": 1.15]),
        (["type": "attribute", "name": "intelligence", "formula": "additive", "rate": 0.10]),
    }));
    addSpecification("command template", "war magic");
    addSpecification("use ability message", "##InitiatorName## "
        "##Infinitive::unleash## devastating war magic, arcane explosions "
        "erupting across the battlefield.");
}

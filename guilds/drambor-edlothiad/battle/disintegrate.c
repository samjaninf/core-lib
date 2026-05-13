//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Disintegrate");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches the disintegrate spell, "
        "a focused beam of energy that reduces matter to dust.");
    addPrerequisite("/guilds/drambor-edlothiad/battle/arcane-barrage.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 27]));
    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 100);
    addSpecification("cooldown", 35);
    addSpecification("duration", 4);
    addSpecification("damage type", "energy");
    addSpecification("bonus energy attack", 25);
    addSpecification("modifiers", ({
        (["type": "research", "research item": "/guilds/drambor-edlothiad/battle/spell-penetration.c", "name": "spell-penetration", "formula": "multiplicative", "base value": 1, "rate": 1.25]),
        (["type": "research", "research item": "/guilds/drambor-edlothiad/battle/spell-penetration-mastery.c", "name": "spell-penetration-mastery", "formula": "multiplicative", "base value": 1, "rate": 1.25]),
        (["type": "skill", "name": "spellcraft", "formula": "logarithmic", "rate": 1.75]),
        (["type": "level", "name": "level", "formula": "logarithmic", "rate": 1.20]),
        (["type": "attribute", "name": "intelligence", "formula": "additive", "rate": 0.10]),
    }));
    addSpecification("command template", "disintegrate");
    addSpecification("use ability message", "A focused beam of annihilating energy "
        "lances from ##InitiatorPossessive## hands toward ##TargetName##.");
}

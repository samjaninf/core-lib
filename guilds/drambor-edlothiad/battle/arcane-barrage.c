//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Arcane Barrage");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches a rapid barrage of "
        "arcane projectiles that pummel a target.");
    addPrerequisite("/guilds/drambor-edlothiad/battle/war-magic.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 21]));
    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 70);
    addSpecification("cooldown", 20);
    addSpecification("duration", 4);
    addSpecification("damage type", "magical");
    addSpecification("bonus magical attack", 18);
    addSpecification("modifiers", ({
        (["type": "research", "research item": "/guilds/drambor-edlothiad/battle/spell-penetration.c", "name": "spell-penetration", "formula": "multiplicative", "base value": 1, "rate": 1.25]),
        (["type": "skill", "name": "spellcraft", "formula": "logarithmic", "rate": 1.50]),
        (["type": "level", "name": "level", "formula": "logarithmic", "rate": 1.15]),
        (["type": "attribute", "name": "intelligence", "formula": "additive", "rate": 0.08]),
    }));
    addSpecification("command template", "arcane barrage");
    addSpecification("use ability message", "A rapid barrage of arcane projectiles "
        "streaks from ##InitiatorPossessive## hands toward ##TargetName##.");
}

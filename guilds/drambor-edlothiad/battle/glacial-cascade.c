//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Glacial Cascade");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches a cascading wall of "
        "glacial ice that freezes everything in its path.");
    addPrerequisite("/guilds/drambor-edlothiad/battle/ice-storm.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 25]));
    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 95);
    addSpecification("cooldown", 30);
    addSpecification("duration", 4);
    addSpecification("damage type", "cold");
    addSpecification("bonus cold attack", 20);
    addSpecification("modifiers", ({
        (["type": "research", "research item": "/guilds/drambor-edlothiad/battle/spell-penetration.c", "name": "spell-penetration", "formula": "multiplicative", "base value": 1, "rate": 1.25]),
        (["type": "skill", "name": "spellcraft", "formula": "logarithmic", "rate": 1.50]),
        (["type": "skill", "name": "elemental water", "formula": "additive", "rate": 0.15]),
        (["type": "level", "name": "level", "formula": "logarithmic", "rate": 1.15]),
        (["type": "attribute", "name": "intelligence", "formula": "additive", "rate": 0.08]),
    }));
    addSpecification("command template", "glacial cascade");
    addSpecification("use ability message", "A cascading wall of glacial ice "
        "surges forth from ##InitiatorName##, freezing everything in its path.");
}

//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Storm of Ages");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches a devastating "
        "storm  that combines fire, ice, and lightning into a single "
            "cataclysm.");
    addPrerequisite(
        "/guilds/drambor-edlothiad/battle/thunderbolt.c",
        (["type": "research"]));
    addPrerequisite("level",
        (["type": "level",
            "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c",
            "value": 45
        ]));
    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 160);
    addSpecification("cooldown", 60);
    addSpecification("duration", 4);
    addSpecification("damage type", "energy");
    addSpecification("bonus fire attack", 15);
    addSpecification("bonus cold attack", 15);
    addSpecification("bonus electricity attack", 15);
    addSpecification("modifiers", ({
        (["type": "research",
            "research item": 
                "/guilds/drambor-edlothiad/battle/spell-penetration-supremacy.c",
            "name": "spell-penetration-supremacy",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25]),
        (["type": "skill",
            "name": "spellcraft",
            "formula": "logarithmic",
            "rate": 2.0]),
        (["type": "level",
            "name": "level",
            "formula": "logarithmic",
            "rate": 1.25]),
        (["type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.10]),
    }));
    addSpecification("command template", "storm of ages");
    addSpecification("use ability message", "##InitiatorName## "
        "##Infinitive::call## forth the Storm of Ages, fire, ice, and "
            "lightning "
        "merging into a single devastating cataclysm.");
}
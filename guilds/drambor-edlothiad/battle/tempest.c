//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Tempest");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research teaches the tempest spell, "
        " a whirlwind of electrical and wind energy.");
    addPrerequisite(
        "/guilds/drambor-edlothiad/battle/chain-lightning.c",
        (["type": "research"]));
    addPrerequisite("level",
        (["type": "level",
            "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c",
            "value": 21
        ]));
    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 85);
    addSpecification("cooldown", 25);
    addSpecification("duration", 4);
    addSpecification("damage type", "electricity");
    addSpecification("bonus electricity attack", 18);
    addSpecification("modifiers", ({
        (["type": "skill",
            "name": "spellcraft",
            "formula": "logarithmic",
            "rate": 1.50]),
        (["type": "skill",
            "name": "elemental air",
            "formula": "additive",
            "rate": 0.15]),
        (["type": "level",
            "name": "level",
            "formula": "logarithmic",
            "rate": 1.15]),
        (["type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.08]),
    }));
    addSpecification("command template", "tempest");
    addSpecification("use ability message", "##InitiatorName## "
        "##Infinitive::summon## a howling tempest of wind and lightning.");
}
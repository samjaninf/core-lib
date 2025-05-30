//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Breach Defense");
    addSpecification("source", "fighter");

    addSpecification("description", "This skill provides the user with the "
        "knowledge of a maneuver that greatly improves their timing for their "
        "next attack with a melee weapon.");

    addPrerequisite("level", 
        (["type": "level", 
          "guild": "fighter",
          "value": 19 ]));

    addSpecification("limited by", (["equipment":({ "long sword",
        "hand and a half sword", "two-handed sword", "axe",
        "dagger", "short sword", "hammer", "mace", "flail",
        "staff", "pole arm" })]));

    addPrerequisite("/guilds/fighter/techniques/press-attack.c",
        (["type":"research"]));

    addSpecification("modifiers", ({ 
        ([
            "type": "weapon damage",
            "name" : "weapons",
            "types" : ({ "long sword", "hand and a half sword", 
                "two-handed sword", "axe", "dagger", "short sword", 
                "hammer", "mace", "flail", "staff", "pole arm" }),
            "formula" : "additive",
            "rate" : 1.5
        ]),
        ([
            "type": "highest skill",
            "name": "weapon skills",
            "skills": ({ "long sword", "hand and a half sword", 
                "two-handed sword", "axe", "dagger", "short sword", 
                "hammer", "mace", "flail", "staff", "pole arm" }),
            "formula" : "logarithmic",
            "rate" : 1.25
        ]), 
        ([
            "type": "skill",
            "name": "anatomy and physiology",
            "formula": "additive",
            "rate": 0.10
        ]),
        ([
            "type": "skill",
            "name": "physics",
            "formula": "additive",
            "rate": 0.10
        ]),
        ([
            "type": "attribute",
            "name": "strength",
            "formula": "additive",
            "rate": 0.25
        ]),
        ([
            "type": "attribute",
            "name": "dexterity",
            "formula": "additive",
            "rate": 0.25
        ]),
        ([
            "type": "attribute",
            "name": "wisdom",
            "formula": "additive",
            "rate": 0.25
        ]),
    }));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("cooldown", 30);

    addSpecification("stamina point cost", 150);

    addSpecification("bonus attack", 100);
    addSpecification("bonus damage", 50);
    addSpecification("duration", 3);

    addSpecification("event handler", "breachDefenseEvent");
    addSpecification("command template", "breach defense");
    addSpecification("use ability message", "##InitiatorName## "
        "skillfully ##Infinitive::shatter## ##TargetName##'s guard "
        "and presses ##InitiatorPossessive## attack.");
}

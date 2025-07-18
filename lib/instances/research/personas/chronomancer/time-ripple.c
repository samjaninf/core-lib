//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Time Ripple");
    addSpecification("description", "This is a persona research item.");
    addSpecification("scope", "targeted");
    addSpecification("research type", "granted");
    addSpecification("spell point cost", 5);
    addSpecification("damage type", "temporal");
    addSpecification("damage hit points", ({ ([
        "probability":100,
        "base damage" : 25,
        "range" : 25
    ]) }));
    addSpecification("modifiers", ({ ([
        "type":"skill",
        "name" : "time",
        "formula" : "additive",
        "rate" : 1.25
    ]), ([
        "type":"attribute",
        "name" : "intelligence",
        "formula" : "logarithmic",
        "base value" : 5,
        "rate" : 1.2
    ]) }));
    addSpecification("cooldown", 4);
    addSpecification("command template", "time ripple at ##Target##");
    addSpecification("use ability message", "##InitiatorName## "
        "##Infinitive::gesture## and a shimmering distortion ripples "
        "through time, striking ##TargetName##.");
}

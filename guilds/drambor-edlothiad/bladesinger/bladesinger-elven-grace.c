//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
//                      See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Elven Grace");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research provides the "
        "user with a channeling of elven grace "
        "through every movement. The bladesinger "
        "learns to infuse the natural fluidity of "
        "elven motion with harmonic resonance, "
        "creating a dance-like combat style that "
        "is nearly impossible to predict or "
        "counter effectively.");

    addPrerequisite(
        "/guilds/drambor-edlothiad/bladesinger/"
        "resonant-ward.c",
        (["type": "research"]));
    addPrerequisite("level",
        (["type": "level",
            "guild": "/guilds/drambor-edlothiad/"
                "drambor-edlothiad.c",
            "value": 15
        ]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus dodge", 4);
    addSpecification("bonus dexterity", 1);
}

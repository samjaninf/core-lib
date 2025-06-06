//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Fool's Strike");
    addSpecification("source", "fighter");
    addSpecification("description", "This skill provides the user with "
        "knowledge of a feint attack that enhances the fighter's "
        "combat abilities.");

    addPrerequisite("level",
        (["type":"level",
            "guild": "fighter",
            "value": 15
        ]));
    addPrerequisite("/guilds/fighter/axes/strike-the-blood.c",
        (["type":"research"]));

    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("affected research", ([
        "Chop": 25,
        "Thrash": 25,
        "Sweeping Hew": 25,
        "Hack": 25,
        "Punishing Hack": 25,
    ]));
    addSpecification("affected research type", "percentage");
}

//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Shield Thrusting");
    addSpecification("source", "fighter");
    addSpecification("description", "This skill provides the user with "
        "knowledge that enhances the fighter's abilities that use shields "
        "as offensive weapons.");

    addPrerequisite("level",
        (["type":"level",
            "guild": "fighter",
            "value": 33
        ]));
    addPrerequisite("/guilds/fighter/shields/breaking-through.c",
        (["type":"research"]));

    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("affected research", ([
        "Shield Bash": 50,
        "Shield Strike": 50,
    ]));
    addSpecification("affected research type", "percentage");
}

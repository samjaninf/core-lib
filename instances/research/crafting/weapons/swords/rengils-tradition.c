//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        passiveResearchItem::reset(arg);
        addSpecification("name", "Rengil's Tradition");
        addSpecification("source", "crafting");
        addSpecification("description", "This skill provides the user with the "
            "techniques mastered by the great smith Rengil.");
        addSpecification("research type", "points");
        addSpecification("research cost", 1);

        addPrerequisite("lib/instances/research/crafting/weapons/swords/craftLongSwords.c", 
            (["type":"research"]));
        addPrerequisite("lib/instances/research/crafting/weapons/common/folding.c",
            (["type":"research"]));
        addPrerequisite("lib/instances/research/crafting/weapons/common/austempering.c",
            (["type":"research"]));
        addPrerequisite("lib/instances/research/crafting/weapons/common/differential-hardening.c",
            (["type":"research"]));

        addSpecification("limited by", (["crafting type":"sword"]));

        addSpecification("bonus crafting value multiplier", 30);
        addSpecification("bonus crafting encumberance reduction", 10);
        addSpecification("bonus crafting weight reduction", 10);
        addSpecification("bonus crafting weapon class", 1);
        addSpecification("bonus crafting defense class", 1);
        addSpecification("bonus blacksmithing", 3);
        addSpecification("bonus metal crafting", 3);
        addSpecification("bonus weapon smithing", 3);
    }
}

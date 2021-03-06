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
        addSpecification("name", "Kheled's Fury");
        addSpecification("source", "crafting");
        addSpecification("description", "This skill provides the user with the "
            "amazing techniques mastered by the great dwarven smith Kheled.");
        addSpecification("research type", "points");
        addSpecification("research cost", 1);

        addPrerequisite("lib/instances/research/crafting/weapons/axes/kheleds-legacy.c", 
            (["type":"research"]));

        addSpecification("limited by", (["crafting type":"axe"]));

        addSpecification("bonus crafting value multiplier", 30);
        addSpecification("bonus crafting weapon class", 1);
        addSpecification("bonus crafting defense class", 1);
        addSpecification("bonus crafting attack", 2);
    }
}

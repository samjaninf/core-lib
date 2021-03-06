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
        addSpecification("name", "Annealing - Armor");
        addSpecification("source", "crafting");
        addSpecification("description", "This skill provides the user with the "
            "knowledge of annealing metal - a heat treatment that reduces a "
            "metal's hardness and making it much easier to work.");
        addSpecification("research type", "points");
        addSpecification("research cost", 1);

        addSpecification("limited by", (["crafting type":({ "chainmail", 
            "plate armor", "splint armor", "scale armor", "helmet" })]));

        addSpecification("penalty to crafting armor class", 1);
    }
}

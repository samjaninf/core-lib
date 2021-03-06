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
        addSpecification("name", "Folding - Armor");
        addSpecification("source", "crafting");
        addSpecification("description", "This skill provides the user with the "
            "knowledge of folding metal - a treatment wherein the metal is "
            "hammered thin folded upon itself - typically with a thin dusting "
            "of a powdered strengthening agent such as carbon or saltpeter "
            "placed between the layers. This is done multiple times; the "
            "resultant lamellar metal being much stronger than non-folded "
            "metal.");
        addSpecification("research type", "points");
        addSpecification("research cost", 1);

        addPrerequisite("lib/instances/research/crafting/armor/common/annealing.c",
            (["type":"research"]));
        addSpecification("limited by", (["crafting type":({ "plate armor", 
            "splint armor", "scale armor", "helmet" })]));

        addSpecification("bonus crafting value multiplier", 15);
        addSpecification("bonus crafting armor class", 1);
    }
}

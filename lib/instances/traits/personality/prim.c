//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/traits/baseTrait.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("type", "personality");
    addSpecification("name", "prim");
    addSpecification("description", "You are staunchly formal and "
        "respectable. You do tend to show your disdain for anything "
        "you regard as improper.");
    addSpecification("root", "refined");
    addSpecification("opposing root", "crude");
    addSpecification("opinion", -5);
    addSpecification("opposing opinion", -10);
    addSpecification("bonus etiquette", 2);
}

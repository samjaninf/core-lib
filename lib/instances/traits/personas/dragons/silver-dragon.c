//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/traits/baseTrait.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("type", "persona");
    addSpecification("name", "silver dragon");
    addSpecification("description", "You are a silver dragon.");
    addSpecification("root", "large creature persona");
    addSpecification("bonus resist air", 75);
    addSpecification("bonus resist electricity", 75);
}

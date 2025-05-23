//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/traits/baseTrait.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("type", "persona");
    addSpecification("name", "aether mephit");
    addSpecification("description", "You are an aether mephit.");
    addSpecification("root", "creature persona");
    addSpecification("bonus resist magical", 25);
    addSpecification("bonus resist physical", 20);
}

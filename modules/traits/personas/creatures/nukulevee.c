//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/traits/baseTrait.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        addSpecification("type", "persona");
        addSpecification("name", "nukulevee");
        addSpecification("description", "You are a nukulevee.");
        addSpecification("root", "creature persona");
        addSpecification("bonus resist undead", 100);
        addSpecification("bonus resist evil", 100);
        addSpecification("bonus resist slash", 50);
        addSpecification("bonus resist thrust", 75);
        "baseTrait"::reset(arg);
    }
}

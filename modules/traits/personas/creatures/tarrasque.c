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
        addSpecification("name", "tarrasque");
        addSpecification("description", "You are a tarrasque.");
        addSpecification("root", "creature persona");
        addSpecification("bonus soak", 5);
        "baseTrait"::reset(arg);
    }
}

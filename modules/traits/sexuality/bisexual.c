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
        addSpecification("type", "genetic");
        addSpecification("name", "bisexual");
        addSpecification("description", "You are sexually attracted to both males and females.");
        addSpecification("root", "sexual identity");
        "baseTrait"::reset(arg);
    }
}


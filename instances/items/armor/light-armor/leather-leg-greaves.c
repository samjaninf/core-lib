//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/armor.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Leather leg greaves");
        set("short", "Leather leg greaves");
        set("aliases", ({ "leg greaves", "greaves", "leather greaves", "leather leg greaves" }));
        set("blueprint", "leather leg greaves");
    }
}

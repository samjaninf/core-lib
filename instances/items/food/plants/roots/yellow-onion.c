//*****************************************************************************
// Copyright (c) 2018 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/food.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Yellow Onion");
        set("short", "Yellow Onion");
        set("aliases", ({ "yellow onion", "onion" }));
        set("blueprint", "yellow onion");
    }
}
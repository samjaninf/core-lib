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
        set("name", "Ring mail");
        set("short", "Ring mail");
        set("aliases", ({ "mail", "armor", "ringmail", "ring mail" }));
        set("blueprint", "ring mail");
    }
}

//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/armor.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "Boiled leather");
    set("short", "Boiled leather");
    set("aliases", ({ "leather", "armor", "boiled leather" }));
    set("blueprint", "boiled leather");
}

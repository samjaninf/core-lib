//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/weapon.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "Throwing hammer");
    set("short", "Throwing hammer");
    set("aliases", ({ "hammer", "throwing hammer" }));
    set("blueprint", "throwing hammer");
}

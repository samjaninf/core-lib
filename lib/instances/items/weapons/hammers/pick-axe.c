//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/weapon.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "Pick axe");
    set("short", "Pick axe");
    set("aliases", ({ "hammer", "pick axe" }));
    set("blueprint", "pick axe");
}

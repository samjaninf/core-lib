//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/potion.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "Stamina Potion");
    set("short", "Stamina Potion");
    set("aliases", ({ "stamina", "potion", "stamina potion" }));
    set("blueprint", "stamina potion");
}

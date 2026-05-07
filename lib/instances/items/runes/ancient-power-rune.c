//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "ancient power rune");
    set("short", "ancient power rune");
    set("aliases", ({ "rune", "power rune" }));
    set("long", "A rune of power carved into a slab of dense, dark stone. "
        "It blazes with amber fire and the air around it crackles with energy.");
    set("rune type", "power");
    set("rune tier", "ancient");
    set("value", 5000);
    set("bonus attack", 7);
    set("bonus damage", 9);
}

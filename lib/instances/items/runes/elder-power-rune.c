//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "elder power rune");
    set("short", "elder power rune");
    set("aliases", ({ "rune", "power rune" }));
    set("long", "A rune of power carved into a polished stone disc. "
        "It glows with a steady amber light and hums with contained force.");
    set("rune type", "power");
    set("rune tier", "elder");
    set("value", 500);
    set("bonus attack", 4);
    set("bonus damage", 5);
}

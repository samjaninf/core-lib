//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "primal power rune");
    set("short", "primal power rune");
    set("aliases", ({ "rune", "power rune" }));
    set("long", "A rune of power carved into a stone of unknown origin. "
        "It radiates waves of amber light and the sound of distant thunder.");
    set("rune type", "power");
    set("rune tier", "primal");
    set("value", 50000);
    set("bonus attack", 11);
    set("bonus damage", 14);
}

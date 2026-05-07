//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "elder storm rune");
    set("short", "elder storm rune");
    set("aliases", ({ "rune", "storm rune" }));
    set("long", "A rune of the storm carved into a dark stone that crackles "
        "visibly with arcs of pale lightning.");
    set("rune type", "storm");
    set("rune tier", "elder");
    set("value", 500);
    set("bonus sonic damage", 9);
    set("bonus electricity damage", 4);
}

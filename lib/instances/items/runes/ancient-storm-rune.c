//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "ancient storm rune");
    set("short", "ancient storm rune");
    set("aliases", ({ "rune", "storm rune" }));
    set("long", "A rune of the storm cut into a jagged black stone. "
        "Thunder rolls from it in waves and the air around it shimmers.");
    set("rune type", "storm");
    set("rune tier", "ancient");
    set("value", 5000);
    set("bonus sonic damage", 15);
    set("bonus electricity damage", 9);
}

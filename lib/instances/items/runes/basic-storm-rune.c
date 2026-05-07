//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "basic storm rune");
    set("short", "basic storm rune");
    set("aliases", ({ "rune", "storm rune" }));
    set("long", "A rune of the storm carved into a jagged grey stone. "
        "A faint crackle of static plays across its surface.");
    set("rune type", "storm");
    set("rune tier", "basic");
    set("value", 50);
    set("bonus sonic damage", 4);
}

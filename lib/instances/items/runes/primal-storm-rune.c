//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "primal storm rune");
    set("short", "primal storm rune");
    set("aliases", ({ "rune", "storm rune" }));
    set("long", "A rune of the storm carved into stone that appears to be compressed "
        "lightning itself. It howls with a barely-contained roar of thunder.");
    set("rune type", "storm");
    set("rune tier", "primal");
    set("value", 50000);
    set("bonus sonic damage", 22);
    set("bonus electricity damage", 15);
}

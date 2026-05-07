//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "basic frost rune");
    set("short", "basic frost rune");
    set("aliases", ({ "rune", "frost rune" }));
    set("long", "A rune of frost carved into a pale blue-white stone. "
        "It is cold to the touch and leaves frost on the fingers.");
    set("rune type", "frost");
    set("rune tier", "basic");
    set("value", 50);
    set("bonus cold damage", 4);
}

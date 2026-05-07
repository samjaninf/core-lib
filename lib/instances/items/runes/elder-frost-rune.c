//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "elder frost rune");
    set("short", "elder frost rune");
    set("aliases", ({ "rune", "frost rune" }));
    set("long", "A rune of frost cut into a pale blue stone that glistens with "
        "permanent ice crystals on its surface.");
    set("rune type", "frost");
    set("rune tier", "elder");
    set("value", 500);
    set("bonus cold damage", 9);
    set("bonus resist cold", 4);
}

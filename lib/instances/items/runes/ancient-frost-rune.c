//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "ancient frost rune");
    set("short", "ancient frost rune");
    set("aliases", ({ "rune", "frost rune" }));
    set("long", "A rune of frost carved into stone that appears to be crystallised "
        "winter itself. A thin fog rolls off its surface at all times.");
    set("rune type", "frost");
    set("rune tier", "ancient");
    set("value", 5000);
    set("bonus cold damage", 15);
    set("bonus resist cold", 8);
}

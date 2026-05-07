//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "primal ward rune");
    set("short", "primal ward rune");
    set("aliases", ({ "rune", "ward rune" }));
    set("long", "A rune of warding cut into stone of impenetrable density. "
        "It blazes with blinding silver light and repels the very air around it.");
    set("rune type", "ward");
    set("rune tier", "primal");
    set("value", 50000);
    set("bonus armor class", 11);
    set("bonus resist physical", 12);
    set("bonus resist magical", 10);
    set("bonus resist cold", 7);
    set("bonus resist fire", 7);
}

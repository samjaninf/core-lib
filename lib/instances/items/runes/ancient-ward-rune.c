//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "ancient ward rune");
    set("short", "ancient ward rune");
    set("aliases", ({ "rune", "ward rune" }));
    set("long", "A rune of warding carved deep into a dense white stone. "
        "It blazes silver-white and makes the air feel thick with protection.");
    set("rune type", "ward");
    set("rune tier", "ancient");
    set("value", 5000);
    set("bonus armor class", 7);
    set("bonus resist physical", 8);
    set("bonus resist magical", 6);
    set("bonus resist cold", 4);
}

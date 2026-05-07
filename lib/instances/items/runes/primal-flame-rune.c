//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "primal flame rune");
    set("short", "primal flame rune");
    set("aliases", ({ "rune", "flame rune" }));
    set("long", "A rune of flame carved into stone drawn from the heart of a volcano. "
        "It blazes with white-orange light and sets the air itself alight.");
    set("rune type", "flame");
    set("rune tier", "primal");
    set("value", 50000);
    set("bonus fire damage", 22);
    set("bonus resist fire", 13);
}

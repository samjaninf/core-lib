//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "ancient flame rune");
    set("short", "ancient flame rune");
    set("aliases", ({ "rune", "flame rune" }));
    set("long", "A rune of flame carved into a black stone veined with glowing "
        "orange. Waves of heat pour from it and it scorches nearby wood.");
    set("rune type", "flame");
    set("rune tier", "ancient");
    set("value", 5000);
    set("bonus fire damage", 15);
    set("bonus resist fire", 8);
}

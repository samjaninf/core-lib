//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "primal frost rune");
    set("short", "primal frost rune");
    set("aliases", ({ "rune", "frost rune" }));
    set("long", "A rune of frost carved into stone formed from the heart of a glacier. "
        "It drains warmth from the room and ice forms on all nearby surfaces.");
    set("rune type", "frost");
    set("rune tier", "primal");
    set("value", 50000);
    set("bonus cold damage", 22);
    set("bonus resist cold", 13);
}

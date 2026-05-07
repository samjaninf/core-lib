//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "ancient blade rune");
    set("short", "ancient blade rune");
    set("aliases", ({ "rune", "blade rune" }));
    set("long", "A rune of the blade carved into a stone carved to resemble a sword. "
        "The knowledge it contains seems to flow directly into the hand that holds it.");
    set("rune type", "blade");
    set("rune tier", "ancient");
    set("value", 5000);
    set("bonus long sword", 7);
    set("bonus hand and a half sword", 7);
    set("bonus two-handed sword", 7);
    set("bonus short sword", 5);
    set("bonus dagger", 5);
    set("bonus axe", 4);
    set("bonus hammer", 4);
}

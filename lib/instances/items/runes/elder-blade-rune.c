//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "elder blade rune");
    set("short", "elder blade rune");
    set("aliases", ({ "rune", "blade rune" }));
    set("long", "A rune of the blade engraved in a blade-shaped stone of dark iron-grey. "
        "Looking at it fills the mind with images of perfect sword technique.");
    set("rune type", "blade");
    set("rune tier", "elder");
    set("value", 500);
    set("bonus long sword", 4);
    set("bonus hand and a half sword", 4);
    set("bonus two-handed sword", 4);
    set("bonus short sword", 3);
    set("bonus dagger", 3);
}

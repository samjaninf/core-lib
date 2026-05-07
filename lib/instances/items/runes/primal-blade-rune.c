//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/rune.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "primal blade rune");
    set("short", "primal blade rune");
    set("aliases", ({ "rune", "blade rune" }));
    set("long", "A rune of the blade carved into a stone of otherworldly sharpness. "
        "Merely holding it grants the sensation of impossible skill with any weapon.");
    set("rune type", "blade");
    set("rune tier", "primal");
    set("value", 50000);
    set("bonus long sword", 11);
    set("bonus hand and a half sword", 11);
    set("bonus two-handed sword", 11);
    set("bonus short sword", 9);
    set("bonus dagger", 9);
    set("bonus axe", 7);
    set("bonus hammer", 7);
}

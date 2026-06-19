//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/potion.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "Vial of Wasting Blight");
    set("short", "Vial of Wasting Blight");
    set("aliases", ({
        "vial of wasting blight",
        "wasting blight",
        "blight",
        "vial"
    }));
    set("blueprint", "vial of wasting blight");
}

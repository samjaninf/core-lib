//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/material.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "Bauxite");
    set("short", "Bauxite");
    set("aliases", ({ "stone", "bauxite" }));
    set("blueprint", "bauxite");
}

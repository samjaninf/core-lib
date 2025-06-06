//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/city.c");
    addBuilding("/lib/environment/buildings/guilds/scion-of-dhuras.c",
        "east", "/areas/eledhel/southern-city/scion-of-dhuras/0x4.c");

    addExit("north", "/areas/eledhel/southern-city/6x5.c");
    addExit("south", "/areas/eledhel/southern-city/6x3.c");
}

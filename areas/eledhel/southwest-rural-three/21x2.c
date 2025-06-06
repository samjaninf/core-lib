//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/farmland.c");

    addExit("north", "/areas/eledhel/southwest-rural-three/21x3.c");
    addFeature("/lib/environment/features/paths/road.c", "north");
    addExit("south", "/areas/eledhel/southwest-rural-three/21x1.c");
    addFeature("/lib/environment/features/paths/road.c", "south");
}


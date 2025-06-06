//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/trees/green-apple-stand.c", "east");
    addFeature("/lib/environment/features/landforms/combe.c", "east");
    addFeature("/lib/environment/features/water/stream.c", "east");

    addExit("west", "/areas/tol-dhurath/forest-4/13x0.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
    addExit("north", "/areas/tol-dhurath/forest-4/14x1.c");
    addFeature("/lib/environment/features/paths/path.c", "north");
}

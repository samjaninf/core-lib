//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/trees/McIntosh-apple-stand.c", "northwest");
    addFeature("/lib/environment/features/trees/maple-stand.c", "northwest");

    addExit("north", "/areas/tol-dhurath/forest-5/10x1.c");
    addFeature("/lib/environment/features/paths/path.c", "north");
    addExit("west", "/areas/tol-dhurath/forest-5/9x0.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
}

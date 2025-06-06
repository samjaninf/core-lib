//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/landforms/ridge.c", "west");
    addFeature("/lib/environment/features/water/canyon-dry-bed.c", "north");
    addFeature("/lib/environment/features/trees/maple-stand.c", "south");

    addExit("north", "/areas/tol-dhurath/temple-exterior/2x4.c");
    addFeature("/lib/environment/features/paths/path.c", "north");

    addRandomCreature(({"ruffian","white-tail deer","gray wolf"}));
}

//*****************************************************************************
// Copyright (c) 2023 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/water/waterfall.c", "southwest");

    addExit("west", "/areas/tol-dhurath/forest-4/1x7.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
    addExit("east", "/areas/tol-dhurath/forest-4/3x7.c");
    addFeature("/lib/environment/features/paths/path.c", "east");

    addRandomCreature(({"weasel","ruffian","gopher","outlaw","boar","groundhog"}));
}
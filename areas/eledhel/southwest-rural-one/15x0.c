//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/farmland.c");

    addExit("east", "/areas/eledhel/southwest-rural-one/16x0.c");
    addFeature("/lib/environment/features/paths/path.c", "east");

    addGeneratedRegion("south", "forest", 25, 10);
}

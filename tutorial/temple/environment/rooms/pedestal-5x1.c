//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    cloneEnvironment();
    setInterior("/lib/tutorial/temple/environment/interiors/pedestal-chamber.c");
    addFeature("lib/tutorial/temple/environment/features/amethyst-floor.c");
    addFeature("lib/tutorial/temple/environment/features/amethyst-ceiling.c");
    addFeature("lib/tutorial/temple/environment/features/purple-liquid.c");

    // Fifth test
    addExit("north", "/lib/tutorial/temple/environment/rooms/pedestal-4x1.c", "fifth test");
    addExit("east", "/lib/tutorial/temple/environment/rooms/pedestal-5x2.c", "fifth test");

    // Seventh test
    addExit("north", "/lib/tutorial/temple/environment/rooms/pedestal-4x1.c", "seventh test");
    addExit("east", "/lib/tutorial/temple/environment/rooms/pedestal-5x2.c", "seventh test");

    setCoordinates("temple of obedience", 21, 21);
    setStateMachine("/lib/tutorial/temple/stateMachine/obedienceStateMachine.c");
}

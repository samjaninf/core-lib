//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    cloneEnvironment();
    setInterior("/tutorial/temple/environment/interiors/pedestal-chamber.c");
    addFeature("/tutorial/temple/environment/features/amethyst-floor.c");
    addFeature("/tutorial/temple/environment/features/amethyst-ceiling.c");
    addFeature("/tutorial/temple/environment/features/purple-liquid.c");

    addDecorator("ruined interior amethyst floor", "default");

    // Third test
    addExit("west", "/tutorial/temple/environment/rooms/pedestal-1x3.c", "third test");
    addExit("south", "/tutorial/temple/environment/rooms/pedestal-2x4.c", "third test");
    addDecorator("ruined interior amethyst floor west south", "third test");

    // Fourth test
    addExit("west", "/tutorial/temple/environment/rooms/pedestal-1x2.c", "fourth test");
    addExit("east", "/tutorial/temple/environment/rooms/pedestal-1x4.c", "fourth test");
    addDecorator("ruined interior amethyst floor west east", "fourth test");

    // Seventh test
    addExit("east", "/tutorial/temple/environment/rooms/pedestal-1x5.c", "seventh test");
    addExit("south", "/tutorial/temple/environment/rooms/pedestal-2x4.c", "seventh test");
    addDecorator("ruined interior amethyst floor east south", "seventh test");

    setStateMachine("/tutorial/temple/stateMachine/obedienceStateMachine.c");
}

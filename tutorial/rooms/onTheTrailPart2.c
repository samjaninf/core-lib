//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    cloneEnvironment();
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/sycamoreStand.c", "north");

    // First test
    addExit("south", "/lib/tutorial/rooms/onTheTrailPart1.c", "on the trail");
    addExit("northwest", "/lib/tutorial/rooms/onTheTrailPart3.c", "on the trail");

    setStateMachine("/lib/tutorial/stateMachines/introStateMachine.c");
}

/////////////////////////////////////////////////////////////////////////////
public void continueOnTrail()
{
    tell_room(this_object(),
        "A flash of black can be seen to the northwest.\n");
    StateMachine->moveSquad("northwest",
        "/lib/tutorial/rooms/onTheTrailPart3.c");
}

/////////////////////////////////////////////////////////////////////////////
public void init()
{
    environment::init();

    if (this_player()->isRealizationOfPlayer() &&
        (StateMachine->getCurrentState() == "on the trail") &&
        present("alberich"))
    {
        call_out("continueOnTrail", 1);
    }
}

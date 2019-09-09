//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/environment/regions/core.c";
virtual inherit "/lib/environment/regions/entries-and-exits.c";
virtual inherit "/lib/environment/regions/generate-path.c";
virtual inherit "/lib/environment/regions/generate-room.c";

/////////////////////////////////////////////////////////////////////////////
protected int getRoomCount()
{
    return MaxX + random(MaxX);
}

/////////////////////////////////////////////////////////////////////////////
protected nomask void createEmptyGrid(int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        grid[i] = ([]);
        for (int j = 0; j < y; j++)
        {
            grid[i][j] = ([
                "x": i,
                "y": j,
                "room type": "none",
                "is placed": 0,
                "exits": ([]),
                "environment": 0
            ]);
        }
    }
}

/////////////////////////////////////////////////////////////////////////////
private nomask int canGenerateRegion()
{
    int ret = 0;
    if (!RegionType)
    {
        raise_error("ERROR - region: The region type must be set before it is "
            "generated.\n");
    }
    else if (!RegionName)
    {
        raise_error("ERROR - region: The region name must be set before it is "
            "generated.\n");
    }
    else
    {
        ret = 1;
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask varargs string createRegion(string enterFrom, string location,
    int *coordinates)
{
    string ret = 0;
    if (canGenerateRegion())
    {
        createEmptyGrid(MaxX, MaxY);

        // Create entry point
        createRoom(1, enterFrom, coordinates);

        int numberOfRooms = getRoomCount();
        for (int i = 0; i < numberOfRooms; i++)
        {
            createRoom();
        }

        while (sizeof(filter(rooms, (: $1["is placed"] == 0 :))))
        {
            foreach(mapping room in rooms)
            {
                constructPath(room);
            }
        }
        mapping exit = createExit();
        if (sizeof(exit))
        {
            rooms += ({ exit });
            constructPath(exit);
        }

        foreach(mapping room in rooms)
        {
            generateRoomDetails(room);
        }

        if (location)
        {
            rooms[0]["environment"]->addEntryExit(enterFrom, location);
        }

        ret = getDirectionOfEntry(enterFrom);
    }
    return ret;
}
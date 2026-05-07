//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/battle-saga.c");

    addChild("/guilds/runeskald/song-of-power/battle-saga.c",
        "/guilds/runeskald/song-of-power/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/dirge-of-ruin.c");

    addChild("/guilds/runeskald/song-of-power/dirge-of-ruin.c",
        "/guilds/runeskald/song-of-power/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/war-chant.c");
    addResearchElement("/guilds/runeskald/song-of-power/frost-song.c");

    addChild("/guilds/runeskald/song-of-power/war-chant.c",
        "/guilds/runeskald/song-of-power/battle-saga.c");
    addChild("/guilds/runeskald/song-of-power/frost-song.c",
        "/guilds/runeskald/song-of-power/dirge-of-ruin.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/elder-saga.c");

    addChild("/guilds/runeskald/song-of-power/elder-saga.c",
        "/guilds/runeskald/song-of-power/war-chant.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Song of Power");
    Source("Runeskald Guild");
    Description("This tree covers the vocal tradition of the runeskald: "
        "battle sagas, demoralising dirges, rallying war chants, and "
        "great elder sagas that channel legendary heroic power.");

    addResearchElement("/guilds/runeskald/song-of-power/root.c");
    TreeRoot("/guilds/runeskald/song-of-power/root.c");

    FirstLevel();
    ThirdLevel();
    FifthLevel();
    EleventhLevel();
}

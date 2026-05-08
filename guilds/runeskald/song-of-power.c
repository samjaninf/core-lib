//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/battle-saga.c");
    addResearchElement("/guilds/runeskald/song-of-power/voice-of-the-skald.c");
    addResearchElement("/guilds/runeskald/song-of-power/wounding-verse.c");
    addResearchElement("/guilds/runeskald/song-of-power/skalds-vigil.c");

    addChild("/guilds/runeskald/song-of-power/battle-saga.c",
        "/guilds/runeskald/song-of-power/root.c");
    addChild("/guilds/runeskald/song-of-power/voice-of-the-skald.c",
        "/guilds/runeskald/song-of-power/root.c");
    addChild("/guilds/runeskald/song-of-power/wounding-verse.c",
        "/guilds/runeskald/song-of-power/root.c");
    addChild("/guilds/runeskald/song-of-power/skalds-vigil.c",
        "/guilds/runeskald/song-of-power/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SecondLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/rallying-cry.c");
    addResearchElement("/guilds/runeskald/song-of-power/taunt.c");

    addChild("/guilds/runeskald/song-of-power/rallying-cry.c",
        "/guilds/runeskald/song-of-power/battle-saga.c");
    addChild("/guilds/runeskald/song-of-power/taunt.c",
        "/guilds/runeskald/song-of-power/wounding-verse.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/dirge-of-ruin.c");
    addResearchElement("/guilds/runeskald/song-of-power/saga-lore.c");
    addResearchElement("/guilds/runeskald/song-of-power/curse-of-ruin.c");

    addChild("/guilds/runeskald/song-of-power/dirge-of-ruin.c",
        "/guilds/runeskald/song-of-power/root.c");
    addChild("/guilds/runeskald/song-of-power/saga-lore.c",
        "/guilds/runeskald/song-of-power/voice-of-the-skald.c");
    addChild("/guilds/runeskald/song-of-power/curse-of-ruin.c",
        "/guilds/runeskald/song-of-power/wounding-verse.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FourthLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/curse-of-weakness.c");
    addResearchElement("/guilds/runeskald/song-of-power/song-of-endurance.c");
    addResearchElement("/guilds/runeskald/song-of-power/song-of-the-shield.c");

    addChild("/guilds/runeskald/song-of-power/curse-of-weakness.c",
        "/guilds/runeskald/song-of-power/dirge-of-ruin.c");
    addChild("/guilds/runeskald/song-of-power/song-of-endurance.c",
        "/guilds/runeskald/song-of-power/skalds-vigil.c");
    addChild("/guilds/runeskald/song-of-power/song-of-the-shield.c",
        "/guilds/runeskald/song-of-power/song-of-endurance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/war-chant.c");
    addResearchElement("/guilds/runeskald/song-of-power/frost-song.c");
    addResearchElement("/guilds/runeskald/song-of-power/saga-of-the-fallen.c");
    addResearchElement("/guilds/runeskald/song-of-power/ode-of-iron.c");

    addChild("/guilds/runeskald/song-of-power/war-chant.c",
        "/guilds/runeskald/song-of-power/battle-saga.c");
    addChild("/guilds/runeskald/song-of-power/frost-song.c",
        "/guilds/runeskald/song-of-power/dirge-of-ruin.c");
    addChild("/guilds/runeskald/song-of-power/saga-of-the-fallen.c",
        "/guilds/runeskald/song-of-power/battle-saga.c");
    addChild("/guilds/runeskald/song-of-power/ode-of-iron.c",
        "/guilds/runeskald/song-of-power/rallying-cry.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixthLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/verse-of-doom.c");
    addResearchElement("/guilds/runeskald/song-of-power/saga-of-swiftness.c");
    addResearchElement("/guilds/runeskald/song-of-power/verse-of-agony.c");

    addChild("/guilds/runeskald/song-of-power/verse-of-doom.c",
        "/guilds/runeskald/song-of-power/dirge-of-ruin.c");
    addChild("/guilds/runeskald/song-of-power/saga-of-swiftness.c",
        "/guilds/runeskald/song-of-power/battle-saga.c");
    addChild("/guilds/runeskald/song-of-power/verse-of-agony.c",
        "/guilds/runeskald/song-of-power/verse-of-doom.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/elder-verse-lore.c");
    addResearchElement("/guilds/runeskald/song-of-power/shriek-of-ruin.c");
    addResearchElement("/guilds/runeskald/song-of-power/voice-mastery.c");

    addChild("/guilds/runeskald/song-of-power/elder-verse-lore.c",
        "/guilds/runeskald/song-of-power/saga-lore.c");
    addChild("/guilds/runeskald/song-of-power/shriek-of-ruin.c",
        "/guilds/runeskald/song-of-power/curse-of-weakness.c");
    addChild("/guilds/runeskald/song-of-power/voice-mastery.c",
        "/guilds/runeskald/song-of-power/saga-lore.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EighthLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/song-of-clarity.c");
    addResearchElement("/guilds/runeskald/song-of-power/battle-howl.c");

    addChild("/guilds/runeskald/song-of-power/song-of-clarity.c",
        "/guilds/runeskald/song-of-power/song-of-endurance.c");
    addChild("/guilds/runeskald/song-of-power/battle-howl.c",
        "/guilds/runeskald/song-of-power/verse-of-doom.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/saga-of-the-hero.c");
    addResearchElement("/guilds/runeskald/song-of-power/wail-of-the-fallen.c");

    addChild("/guilds/runeskald/song-of-power/saga-of-the-hero.c",
        "/guilds/runeskald/song-of-power/saga-of-the-fallen.c");
    addChild("/guilds/runeskald/song-of-power/wail-of-the-fallen.c",
        "/guilds/runeskald/song-of-power/battle-howl.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TenthLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/anguished-wail.c");
    addResearchElement("/guilds/runeskald/song-of-power/saga-of-endurance.c");

    addChild("/guilds/runeskald/song-of-power/anguished-wail.c",
        "/guilds/runeskald/song-of-power/battle-howl.c");
    addChild("/guilds/runeskald/song-of-power/saga-of-endurance.c",
        "/guilds/runeskald/song-of-power/saga-of-swiftness.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/elder-saga.c");

    addChild("/guilds/runeskald/song-of-power/elder-saga.c",
        "/guilds/runeskald/song-of-power/war-chant.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwelfthLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/shriek-of-doom.c");

    addChild("/guilds/runeskald/song-of-power/shriek-of-doom.c",
        "/guilds/runeskald/song-of-power/shriek-of-ruin.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/hymn-of-wrath.c");
    addResearchElement("/guilds/runeskald/song-of-power/saga-of-the-conqueror.c");

    addChild("/guilds/runeskald/song-of-power/hymn-of-wrath.c",
        "/guilds/runeskald/song-of-power/war-chant.c");
    addChild("/guilds/runeskald/song-of-power/saga-of-the-conqueror.c",
        "/guilds/runeskald/song-of-power/saga-of-the-hero.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FourteenthLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/echo-of-doom.c");
    addResearchElement("/guilds/runeskald/song-of-power/voice-of-ruin.c");

    addChild("/guilds/runeskald/song-of-power/echo-of-doom.c",
        "/guilds/runeskald/song-of-power/shriek-of-ruin.c");
    addChild("/guilds/runeskald/song-of-power/voice-of-ruin.c",
        "/guilds/runeskald/song-of-power/echo-of-doom.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixteenthLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/song-of-dominance.c");

    addChild("/guilds/runeskald/song-of-power/song-of-dominance.c",
        "/guilds/runeskald/song-of-power/hymn-of-wrath.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EighteenthLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/saga-of-annihilation.c");

    addChild("/guilds/runeskald/song-of-power/saga-of-annihilation.c",
        "/guilds/runeskald/song-of-power/anguished-wail.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/song-of-annihilation.c");

    addChild("/guilds/runeskald/song-of-power/song-of-annihilation.c",
        "/guilds/runeskald/song-of-power/saga-of-annihilation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySecondLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/primal-saga.c");

    addChild("/guilds/runeskald/song-of-power/primal-saga.c",
        "/guilds/runeskald/song-of-power/elder-saga.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFourthLevel()
{
    addResearchElement("/guilds/runeskald/song-of-power/world-song.c");

    addChild("/guilds/runeskald/song-of-power/world-song.c",
        "/guilds/runeskald/song-of-power/primal-saga.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Song of Power");
    Source("Runeskald Guild");
    Description("This tree covers the vocal tradition of the runeskald: "
        "battle sagas, demoralising dirges, rallying war chants, devastating "
        "battle howls, and the primal saga that channels the power of creation.");

    addResearchElement("/guilds/runeskald/song-of-power/root.c");
    TreeRoot("/guilds/runeskald/song-of-power/root.c");

    FirstLevel();
    SecondLevel();
    ThirdLevel();
    FourthLevel();
    FifthLevel();
    SixthLevel();
    SeventhLevel();
    EighthLevel();
    NinthLevel();
    TenthLevel();
    EleventhLevel();
    TwelfthLevel();
    ThirteenthLevel();
    FourteenthLevel();
    SixteenthLevel();
    EighteenthLevel();
    NineteenthLevel();
    TwentySecondLevel();
    TwentyFourthLevel();
}

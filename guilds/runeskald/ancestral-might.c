//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/ancestral-blessing.c");
    addResearchElement("/guilds/runeskald/ancestral-might/ancestor-lore.c");

    addChild("/guilds/runeskald/ancestral-might/ancestral-blessing.c",
        "/guilds/runeskald/ancestral-might/root.c");
    addChild("/guilds/runeskald/ancestral-might/ancestor-lore.c",
        "/guilds/runeskald/ancestral-might/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SecondLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/ancestors-vigil.c");
    addResearchElement("/guilds/runeskald/ancestral-might/spirit-touch.c");
    addResearchElement("/guilds/runeskald/ancestral-might/spirit-tongue.c");

    addChild("/guilds/runeskald/ancestral-might/ancestors-vigil.c",
        "/guilds/runeskald/ancestral-might/ancestral-blessing.c");
    addChild("/guilds/runeskald/ancestral-might/spirit-touch.c",
        "/guilds/runeskald/ancestral-might/ancestral-blessing.c");
    addChild("/guilds/runeskald/ancestral-might/spirit-tongue.c",
        "/guilds/runeskald/ancestral-might/ancestral-blessing.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/blood-memory.c");
    addResearchElement("/guilds/runeskald/ancestral-might/ancestors-rebuke.c");
    addResearchElement("/guilds/runeskald/ancestral-might/ancestors-shield.c");
    addResearchElement("/guilds/runeskald/ancestral-might/spirit-bolt.c");
    addResearchElement("/guilds/runeskald/ancestral-might/ancestors-eye.c");

    addChild("/guilds/runeskald/ancestral-might/blood-memory.c",
        "/guilds/runeskald/ancestral-might/ancestor-lore.c");
    addChild("/guilds/runeskald/ancestral-might/ancestors-rebuke.c",
        "/guilds/runeskald/ancestral-might/ancestor-lore.c");
    addChild("/guilds/runeskald/ancestral-might/ancestors-shield.c",
        "/guilds/runeskald/ancestral-might/ancestors-vigil.c");
    addChild("/guilds/runeskald/ancestral-might/spirit-bolt.c",
        "/guilds/runeskald/ancestral-might/spirit-touch.c");
    addChild("/guilds/runeskald/ancestral-might/ancestors-eye.c",
        "/guilds/runeskald/ancestral-might/spirit-tongue.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FourthLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/ancestors-fury.c");
    addResearchElement("/guilds/runeskald/ancestral-might/spirit-barrage.c");
    addResearchElement("/guilds/runeskald/ancestral-might/spirit-bond.c");
    addResearchElement("/guilds/runeskald/ancestral-might/ancestral-mark.c");

    addChild("/guilds/runeskald/ancestral-might/ancestors-fury.c",
        "/guilds/runeskald/ancestral-might/blood-memory.c");
    addChild("/guilds/runeskald/ancestral-might/spirit-barrage.c",
        "/guilds/runeskald/ancestral-might/ancestors-rebuke.c");
    addChild("/guilds/runeskald/ancestral-might/spirit-bond.c",
        "/guilds/runeskald/ancestral-might/blood-memory.c");
    addChild("/guilds/runeskald/ancestral-might/ancestral-mark.c",
        "/guilds/runeskald/ancestral-might/spirit-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/ancestral-wrath.c");
    addResearchElement("/guilds/runeskald/ancestral-might/spirit-strike.c");
    addResearchElement("/guilds/runeskald/ancestral-might/ancestors-resolve.c");
    addResearchElement("/guilds/runeskald/ancestral-might/ancestors-clarity.c");

    addChild("/guilds/runeskald/ancestral-might/ancestral-wrath.c",
        "/guilds/runeskald/ancestral-might/ancestral-blessing.c");
    addChild("/guilds/runeskald/ancestral-might/spirit-strike.c",
        "/guilds/runeskald/ancestral-might/ancestors-fury.c");
    addChild("/guilds/runeskald/ancestral-might/ancestors-resolve.c",
        "/guilds/runeskald/ancestral-might/ancestors-shield.c");
    addChild("/guilds/runeskald/ancestral-might/ancestors-clarity.c",
        "/guilds/runeskald/ancestral-might/ancestors-vigil.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixthLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/ancestors-judgment.c");
    addResearchElement("/guilds/runeskald/ancestral-might/ancestors-grace.c");
    addResearchElement("/guilds/runeskald/ancestral-might/ancestral-shroud.c");
    addResearchElement("/guilds/runeskald/ancestral-might/ancestors-wail.c");

    addChild("/guilds/runeskald/ancestral-might/ancestors-judgment.c",
        "/guilds/runeskald/ancestral-might/spirit-bolt.c");
    addChild("/guilds/runeskald/ancestral-might/ancestors-grace.c",
        "/guilds/runeskald/ancestral-might/spirit-bond.c");
    addChild("/guilds/runeskald/ancestral-might/ancestral-shroud.c",
        "/guilds/runeskald/ancestral-might/ancestors-shield.c");
    addChild("/guilds/runeskald/ancestral-might/ancestors-wail.c",
        "/guilds/runeskald/ancestral-might/spirit-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/spirit-storm.c");
    addResearchElement("/guilds/runeskald/ancestral-might/ghostfire-strike.c");

    addChild("/guilds/runeskald/ancestral-might/spirit-storm.c",
        "/guilds/runeskald/ancestral-might/spirit-barrage.c");
    addChild("/guilds/runeskald/ancestral-might/ghostfire-strike.c",
        "/guilds/runeskald/ancestral-might/spirit-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EighthLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/ancestors-fortitude.c");
    addResearchElement("/guilds/runeskald/ancestral-might/voice-of-the-dead.c");

    addChild("/guilds/runeskald/ancestral-might/ancestors-fortitude.c",
        "/guilds/runeskald/ancestral-might/ancestors-resolve.c");
    addChild("/guilds/runeskald/ancestral-might/voice-of-the-dead.c",
        "/guilds/runeskald/ancestral-might/spirit-storm.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/wrathful-barrage.c");
    addResearchElement("/guilds/runeskald/ancestral-might/lineage-lore.c");
    addResearchElement("/guilds/runeskald/ancestral-might/spirit-shatter.c");

    addChild("/guilds/runeskald/ancestral-might/wrathful-barrage.c",
        "/guilds/runeskald/ancestral-might/spirit-barrage.c");
    addChild("/guilds/runeskald/ancestral-might/lineage-lore.c",
        "/guilds/runeskald/ancestral-might/spirit-bond.c");
    addChild("/guilds/runeskald/ancestral-might/spirit-shatter.c",
        "/guilds/runeskald/ancestral-might/spirit-storm.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TenthLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/ancestral-vengeance.c");

    addChild("/guilds/runeskald/ancestral-might/ancestral-vengeance.c",
        "/guilds/runeskald/ancestral-might/ancestors-judgment.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/spirit-legion.c");
    addResearchElement("/guilds/runeskald/ancestral-might/ancestral-resonance.c");

    addChild("/guilds/runeskald/ancestral-might/spirit-legion.c",
        "/guilds/runeskald/ancestral-might/voice-of-the-dead.c");
    addChild("/guilds/runeskald/ancestral-might/ancestral-resonance.c",
        "/guilds/runeskald/ancestral-might/lineage-lore.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/war-mantle.c");

    addChild("/guilds/runeskald/ancestral-might/war-mantle.c",
        "/guilds/runeskald/ancestral-might/ancestral-wrath.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwelfthLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/ancestral-dominance.c");

    addChild("/guilds/runeskald/ancestral-might/ancestral-dominance.c",
        "/guilds/runeskald/ancestral-might/wrathful-barrage.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FourteenthLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/ancestral-nova.c");

    addChild("/guilds/runeskald/ancestral-might/ancestral-nova.c",
        "/guilds/runeskald/ancestral-might/ancestral-vengeance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixteenthLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/grave-tide.c");

    addChild("/guilds/runeskald/ancestral-might/grave-tide.c",
        "/guilds/runeskald/ancestral-might/ancestral-nova.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EighteenthLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/eternal-vigil.c");

    addChild("/guilds/runeskald/ancestral-might/eternal-vigil.c",
        "/guilds/runeskald/ancestral-might/ancestral-dominance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentiethLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/ancestral-ascendance.c");

    addChild("/guilds/runeskald/ancestral-might/ancestral-ascendance.c",
        "/guilds/runeskald/ancestral-might/war-mantle.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySecondLevel()
{
    addResearchElement("/guilds/runeskald/ancestral-might/bloodlines-end.c");

    addChild("/guilds/runeskald/ancestral-might/bloodlines-end.c",
        "/guilds/runeskald/ancestral-might/grave-tide.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Ancestral Might");
    Source("Runeskald Guild");
    Description("This tree covers the runeskaldic ancestral tradition: "
        "invoking the blessings and wraths of fallen forebears, channeling "
        "spirit storms and barrages, wearing spiritual war mantles, and "
        "ascending into the full power of an ancestral lineage.");

    addResearchElement("/guilds/runeskald/ancestral-might/root.c");
    TreeRoot("/guilds/runeskald/ancestral-might/root.c");

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
    TwentiethLevel();
    TwentySecondLevel();
}

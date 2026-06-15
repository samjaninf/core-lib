//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/middle-path/balanced-ward.c");
    addResearchElement("/guilds/hand-of-bilanx/middle-path/pacifying-aura.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/middle-path-awakening.c");

    addChild("/guilds/hand-of-bilanx/middle-path/balanced-ward.c",
        "/guilds/hand-of-bilanx/middle-path/root.c");
    addChild("/guilds/hand-of-bilanx/middle-path/pacifying-aura.c",
        "/guilds/hand-of-bilanx/middle-path/root.c");
    addChild("/guilds/hand-of-bilanx/middle-path/middle-path-awakening.c",
        "/guilds/hand-of-bilanx/middle-path/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/middle-path/grounding-stance.c");

    addChild("/guilds/hand-of-bilanx/middle-path/grounding-stance.c",
        "/guilds/hand-of-bilanx/middle-path/middle-path-awakening.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FourthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/poise-of-the-scales.c");

    addChild("/guilds/hand-of-bilanx/middle-path/poise-of-the-scales.c",
        "/guilds/hand-of-bilanx/middle-path/balanced-ward.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/middle-path/steadfast-center.c");
    addResearchElement("/guilds/hand-of-bilanx/middle-path/serene-focus.c");

    addChild("/guilds/hand-of-bilanx/middle-path/steadfast-center.c",
        "/guilds/hand-of-bilanx/middle-path/balanced-ward.c");
    addChild("/guilds/hand-of-bilanx/middle-path/serene-focus.c",
        "/guilds/hand-of-bilanx/middle-path/pacifying-aura.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/fourth-truth-focus.c");
    addChild(
        "/guilds/hand-of-bilanx/middle-path/fourth-truth-focus.c",
        "/guilds/hand-of-bilanx/middle-path/serene-focus.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EighthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/fourth-truth-mastery.c");

    addChild("/guilds/hand-of-bilanx/middle-path/fourth-truth-mastery.c",
        "/guilds/hand-of-bilanx/middle-path/steadfast-center.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/middle-path-strike.c");
    addChild(
        "/guilds/hand-of-bilanx/middle-path/middle-path-strike.c",
        "/guilds/hand-of-bilanx/middle-path/poise-of-the-scales.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/middle-path/path-of-stillness.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/peacemakersshield.c");

    addChild("/guilds/hand-of-bilanx/middle-path/path-of-stillness.c",
        "/guilds/hand-of-bilanx/middle-path/steadfast-center.c");
    addChild("/guilds/hand-of-bilanx/middle-path/peacemakersshield.c",
        "/guilds/hand-of-bilanx/middle-path/pacifying-aura.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/force-of-equilibrium.c");

    addChild("/guilds/hand-of-bilanx/middle-path/force-of-equilibrium.c",
        "/guilds/hand-of-bilanx/middle-path/path-of-stillness.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/aura-of-tranquility.c");

    addChild("/guilds/hand-of-bilanx/middle-path/aura-of-tranquility.c",
        "/guilds/hand-of-bilanx/middle-path/peacemakersshield.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwelfthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/path-of-center.c");
    addChild(
        "/guilds/hand-of-bilanx/middle-path/path-of-center.c",
        "/guilds/hand-of-bilanx/middle-path/fourth-truth-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/middle-path-theory.c");

    addChild("/guilds/hand-of-bilanx/middle-path/middle-path-theory.c",
        "/guilds/hand-of-bilanx/middle-path/fourth-truth-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FourteenthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/middle-path/arbiters-strike.c");

    addChild("/guilds/hand-of-bilanx/middle-path/arbiters-strike.c",
        "/guilds/hand-of-bilanx/middle-path/force-of-equilibrium.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/unshakeable-poise.c");

    addChild("/guilds/hand-of-bilanx/middle-path/unshakeable-poise.c",
        "/guilds/hand-of-bilanx/middle-path/path-of-stillness.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/resilience-of-the-center.c");

    addChild("/guilds/hand-of-bilanx/middle-path/resilience-of-the-center.c",
        "/guilds/hand-of-bilanx/middle-path/unshakeable-poise.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/wave-of-pacification.c");

    addChild("/guilds/hand-of-bilanx/middle-path/wave-of-pacification.c",
        "/guilds/hand-of-bilanx/middle-path/arbiters-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EighteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/mantle-of-the-center.c");

    addChild("/guilds/hand-of-bilanx/middle-path/mantle-of-the-center.c",
        "/guilds/hand-of-bilanx/middle-path/aura-of-tranquility.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/center-theory.c");
    addChild(
        "/guilds/hand-of-bilanx/middle-path/center-theory.c",
        "/guilds/hand-of-bilanx/middle-path/serene-focus.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySecondLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/fourth-truth-revelation.c");

    addChild("/guilds/hand-of-bilanx/middle-path/fourth-truth-revelation.c",
        "/guilds/hand-of-bilanx/middle-path/wave-of-pacification.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/fourth-truth-strike.c");
    addChild(
        "/guilds/hand-of-bilanx/middle-path/fourth-truth-strike.c",
        "/guilds/hand-of-bilanx/middle-path/fourth-truth-revelation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFourthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/judgment-of-the-scales.c");

    addChild("/guilds/hand-of-bilanx/middle-path/judgment-of-the-scales.c",
        "/guilds/hand-of-bilanx/middle-path/fourth-truth-revelation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySixthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/middle-path/enduring-balance.c");

    addChild("/guilds/hand-of-bilanx/middle-path/enduring-balance.c",
        "/guilds/hand-of-bilanx/middle-path/mantle-of-the-center.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/middle-path/arbiters-rebuke.c");

    addChild("/guilds/hand-of-bilanx/middle-path/arbiters-rebuke.c",
        "/guilds/hand-of-bilanx/middle-path/path-of-stillness.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtiethLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/equalizing-force.c");

    addChild("/guilds/hand-of-bilanx/middle-path/equalizing-force.c",
        "/guilds/hand-of-bilanx/middle-path/judgment-of-the-scales.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/center-wave.c");
    addChild(
        "/guilds/hand-of-bilanx/middle-path/center-wave.c",
        "/guilds/hand-of-bilanx/middle-path/mantle-of-the-center.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFirstLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/middle-path/bastion-of-balance.c");

    addChild("/guilds/hand-of-bilanx/middle-path/bastion-of-balance.c",
        "/guilds/hand-of-bilanx/middle-path/unshakeable-poise.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/fourth-truth-perfected.c");

    addChild("/guilds/hand-of-bilanx/middle-path/fourth-truth-perfected.c",
        "/guilds/hand-of-bilanx/middle-path/bastion-of-balance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortiethLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/absolute-judgment.c");

    addChild("/guilds/hand-of-bilanx/middle-path/absolute-judgment.c",
        "/guilds/hand-of-bilanx/middle-path/fourth-truth-perfected.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/judgment-of-the-center.c");
    addChild(
        "/guilds/hand-of-bilanx/middle-path/judgment-of-the-center.c",
        "/guilds/hand-of-bilanx/middle-path/absolute-judgment.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySecondLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/citadel-of-balance.c");

    addChild("/guilds/hand-of-bilanx/middle-path/citadel-of-balance.c",
        "/guilds/hand-of-bilanx/middle-path/enduring-balance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyEighthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/grand-equalization.c");

    addChild("/guilds/hand-of-bilanx/middle-path/grand-equalization.c",
        "/guilds/hand-of-bilanx/middle-path/absolute-judgment.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftiethLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/fourth-truth-pinnacle.c");
    addChild(
        "/guilds/hand-of-bilanx/middle-path/fourth-truth-pinnacle.c",
        "/guilds/hand-of-bilanx/middle-path/grand-equalization.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySecondLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/fourth-truth-ascendant.c");

    addChild("/guilds/hand-of-bilanx/middle-path/fourth-truth-ascendant.c",
        "/guilds/hand-of-bilanx/middle-path/grand-equalization.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySixthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/edict-of-the-center.c");

    addChild("/guilds/hand-of-bilanx/middle-path/edict-of-the-center.c",
        "/guilds/hand-of-bilanx/middle-path/fourth-truth-ascendant.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/middle-path/wave-of-the-fourth-truth.c");

    addChild("/guilds/hand-of-bilanx/middle-path/wave-of-the-fourth-truth.c",
        "/guilds/hand-of-bilanx/middle-path/edict-of-the-center.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("The Middle Path");
    Description("This research tree teaches Bilanx's fourth truth - that "
        "the middle road is not weakness but the deepest strength. The "
        "priest who refuses all extremes becomes a living bastion, "
        "protecting allies, pacifying aggressors, and enduring where "
        "partisans of either excess fail.");
    Source("Hand of Bilanx");
    addResearchElement("/guilds/hand-of-bilanx/middle-path/root.c");
    TreeRoot("/guilds/hand-of-bilanx/middle-path/root.c");

    FirstLevel();
    ThirdLevel();
    FourthLevel();
    FifthLevel();
    SeventhLevel();
    EighthLevel();
    NinthLevel();
    TenthLevel();
    EleventhLevel();
    TwelfthLevel();
    ThirteenthLevel();
    FourteenthLevel();
    FifteenthLevel();
    SixteenthLevel();
    SeventeenthLevel();
    EighteenthLevel();
    TwentySecondLevel();
    TwentyFourthLevel();
    TwentySixthLevel();
    TwentySeventhLevel();
    ThirtiethLevel();
    ThirtyFirstLevel();
    ThirtyFifthLevel();
    FortiethLevel();
    FortySecondLevel();
    FortyEighthLevel();
    FiftiethLevel();
    FiftySecondLevel();
    FiftySixthLevel();
    SixtyFifthLevel();
}

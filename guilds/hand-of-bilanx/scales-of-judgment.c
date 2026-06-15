//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/weight-of-judgment.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-verdict.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-awakening.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/weight-of-judgment.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/root.c");
    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-verdict.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/root.c");
    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-awakening.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/measure-of-sin.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/measure-of-sin.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-awakening.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/judgment-theory.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/judgment-theory.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/weight-of-judgment.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/judgment-focus.c");
    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/judgment-focus.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/judgment-theory.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/true-sight.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/true-sight.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/weight-of-judgment.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EighthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-reckoning.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-reckoning.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-verdict.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-theory.c");
    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-theory.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/true-sight.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-mastery.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-mastery.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/true-sight.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/condemn.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/condemn.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/weight-of-judgment.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwelfthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/balancing-strike.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/balancing-strike.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/condemn.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-judgment.c");
    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-judgment.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/balancing-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FourteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/weighing-of-souls.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/weighing-of-souls.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/true-sight.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-punishment.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-punishment.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/balancing-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-rebuke.c");
    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-rebuke.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-punishment.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EighteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/wave-of-judgment.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/wave-of-judgment.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-reckoning.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/divine-reckoning.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/measure-of-worth.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/divine-reckoning.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/condemn.c");
    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/measure-of-worth.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/condemn.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySecondLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-revelation.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-revelation.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/divine-reckoning.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFourthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-strike.c");
    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-strike.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-revelation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/sentence-of-imbalance.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/sentence-of-imbalance.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-revelation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyEighthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-wrath.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-wrath.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/sentence-of-imbalance.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/tide-of-judgment.c");
    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/tide-of-judgment.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/scales-wrath.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/absolute-verdict.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/absolute-verdict.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/divine-reckoning.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-perfected.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-perfected.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/absolute-verdict.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-focus.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-theory.c");
    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-focus.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-mastery.c");
    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-theory.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-revelation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyEighthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/judgment-of-all.c");
    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/judgment-of-all.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-perfected.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/sentence-of-the-scales.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/sentence-of-the-scales.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/condemn.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortiethLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/verdict-of-the-scales.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/verdict-of-the-scales.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-perfected.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/weight-of-sins.c");
    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/weight-of-sins.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/divine-reckoning.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/reckoning-of-all-things.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/reckoning-of-all-things.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/verdict-of-the-scales.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/judgment-pinnacle.c");
    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/judgment-pinnacle.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/verdict-of-the-scales.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyEighthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-wave.c");
    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-wave.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-perfected.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftiethLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-ascendant.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-ascendant.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/reckoning-of-all-things.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/final-sentence.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/final-sentence.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/fifth-truth-ascendant.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/scales-of-judgment/wave-of-the-fifth-truth.c");

    addChild(
        "/guilds/hand-of-bilanx/scales-of-judgment/wave-of-the-fifth-truth.c",
        "/guilds/hand-of-bilanx/scales-of-judgment/final-sentence.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Scales of Judgment");
    Description("This research tree teaches Bilanx's fifth truth - that the "
        "scales see all things truly and correct all imbalances. The priest "
        "learns to weigh souls, punish those who have transgressed against "
        "equilibrium, reward those who hold to the center, and pronounce "
        "Bilanx's final sentence on the unrepentant.");
    Source("Hand of Bilanx");
    addResearchElement("/guilds/hand-of-bilanx/scales-of-judgment/root.c");
    TreeRoot("/guilds/hand-of-bilanx/scales-of-judgment/root.c");

    FirstLevel();
    ThirdLevel();
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
    SeventeenthLevel();
    EighteenthLevel();
    NineteenthLevel();
    TwentySecondLevel();
    TwentyFourthLevel();
    TwentyFifthLevel();
    TwentyEighthLevel();
    ThirtyThirdLevel();
    ThirtyFifthLevel();
    ThirtyEighthLevel();
    ThirtyNinthLevel();
    FortiethLevel();
    FortyFifthLevel();
    FortyEighthLevel();
    FiftiethLevel();
    FiftyFifthLevel();
    SixtyFifthLevel();
}

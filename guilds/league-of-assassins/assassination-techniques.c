//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/lethal-anatomy.c");
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/throat-strike.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/lethal-anatomy.c",
        "/guilds/league-of-assassins/assassination-techniques/root.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/throat-strike.c",
        "/guilds/league-of-assassins/assassination-techniques/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/killing-edge.c");
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/mark.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/killing-edge.c",
        "/guilds/league-of-assassins/assassination-techniques/lethal-anatomy.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/mark.c",
        "/guilds/league-of-assassins/assassination-techniques/throat-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "assassination-theory.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "assassination-theory.c",
        "/guilds/league-of-assassins/assassination-techniques/lethal-anatomy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "surgical-precision.c");
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/kidney-strike.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "surgical-precision.c",
        "/guilds/league-of-assassins/assassination-techniques/killing-edge.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/kidney-strike.c",
        "/guilds/league-of-assassins/assassination-techniques/mark.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/improved-mark.c");
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/pressure-point.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/improved-mark.c",
        "/guilds/league-of-assassins/assassination-techniques/"
        "assassination-theory.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/pressure-point.c",
        "/guilds/league-of-assassins/assassination-techniques/throat-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "vital-strike-training.c");
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-throat-strike.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "vital-strike-training.c",
        "/guilds/league-of-assassins/assassination-techniques/"
        "surgical-precision.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-throat-strike.c",
        "/guilds/league-of-assassins/assassination-techniques/"
        "throat-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "bleeding-strike.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/bleeding-strike.c",
        "/guilds/league-of-assassins/assassination-techniques/kidney-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "combat-efficiency.c");
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/spine-strike.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "combat-efficiency.c",
        "/guilds/league-of-assassins/assassination-techniques/"
        "vital-strike-training.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/spine-strike.c",
        "/guilds/league-of-assassins/assassination-techniques/pressure-point.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-kidney-strike.c");
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/perfect-mark.c");
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "perfect-throat-strike.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-kidney-strike.c",
        "/guilds/league-of-assassins/assassination-techniques/bleeding-strike.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/perfect-mark.c",
        "/guilds/league-of-assassins/assassination-techniques/improved-mark.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "perfect-throat-strike.c",
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-throat-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/arterial-strike.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/arterial-strike.c",
        "/guilds/league-of-assassins/assassination-techniques/spine-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "killing-discipline.c");
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/predatory-focus.c");
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-spine-strike.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "killing-discipline.c",
        "/guilds/league-of-assassins/assassination-techniques/"
        "combat-efficiency.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/predatory-focus.c",
        "/guilds/league-of-assassins/assassination-techniques/mark.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-spine-strike.c",
        "/guilds/league-of-assassins/assassination-techniques/spine-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/nerve-strike.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/nerve-strike.c",
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-kidney-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/vital-mastery.c");
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "perfect-kidney-strike.c");
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-arterial-strike.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/vital-mastery.c",
        "/guilds/league-of-assassins/assassination-techniques/"
        "vital-strike-training.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "perfect-kidney-strike.c",
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-kidney-strike.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-arterial-strike.c",
        "/guilds/league-of-assassins/assassination-techniques/arterial-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/death-blow.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/death-blow.c",
        "/guilds/league-of-assassins/assassination-techniques/arterial-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "lethal-efficiency.c");
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-nerve-strike.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "lethal-efficiency.c",
        "/guilds/league-of-assassins/assassination-techniques/"
        "killing-discipline.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-nerve-strike.c",
        "/guilds/league-of-assassins/assassination-techniques/nerve-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-bleeding-strike.c");
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "perfect-arterial-strike.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-bleeding-strike.c",
        "/guilds/league-of-assassins/assassination-techniques/bleeding-strike.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "perfect-arterial-strike.c",
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-arterial-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "assassination-mastery.c");
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-death-blow.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "assassination-mastery.c",
        "/guilds/league-of-assassins/assassination-techniques/vital-mastery.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-death-blow.c",
        "/guilds/league-of-assassins/assassination-techniques/death-blow.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "perfect-spine-strike.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "perfect-spine-strike.c",
        "/guilds/league-of-assassins/assassination-techniques/spine-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "executioners-calm.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "executioners-calm.c",
        "/guilds/league-of-assassins/assassination-techniques/"
        "lethal-efficiency.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "perfect-death-blow.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "perfect-death-blow.c",
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-death-blow.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/killing-stroke.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/killing-stroke.c",
        "/guilds/league-of-assassins/assassination-techniques/death-blow.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "perfect-predator.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "perfect-predator.c",
        "/guilds/league-of-assassins/assassination-techniques/"
        "assassination-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-killing-stroke.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-killing-stroke.c",
        "/guilds/league-of-assassins/assassination-techniques/killing-stroke.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyNinthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/assassination-techniques/"
        "perfect-killing-stroke.c");
    addChild(
        "/guilds/league-of-assassins/assassination-techniques/"
        "perfect-killing-stroke.c",
        "/guilds/league-of-assassins/assassination-techniques/"
        "improved-killing-stroke.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("assassination techniques");
    Description("The core techniques of the kill - targeting, precision, "
        "timing, and the disciplined psychology of the professional "
        "who has made an art of ending lives.");
    Source("League of Assassins");
    TreeRoot("/guilds/league-of-assassins/assassination-techniques/root.c");

    FirstLevel();
    ThirdLevel();
    FifthLevel();
    SeventhLevel();
    NinthLevel();
    EleventhLevel();
    ThirteenthLevel();
    FifteenthLevel();
    SeventeenthLevel();
    NineteenthLevel();
    TwentyFirstLevel();
    TwentyThirdLevel();
    TwentyFifthLevel();
    TwentySeventhLevel();
    TwentyNinthLevel();
    ThirtyFirstLevel();
    ThirtyThirdLevel();
    ThirtyFifthLevel();
    ThirtySeventhLevel();
    FortyFirstLevel();
    FortyThirdLevel();
    FortySeventhLevel();
    FiftyFifthLevel();
    FiftyThirdLevel();
    FiftyNinthLevel();
}

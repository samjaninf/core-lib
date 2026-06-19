//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/shadow-step.c");
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/shadowborn.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/shadow-step.c",
        "/guilds/league-of-assassins/shadow-mastery/root.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/shadowborn.c",
        "/guilds/league-of-assassins/shadow-mastery/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/strike-from-shadow.c");
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/shadow-theory.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/strike-from-shadow.c",
        "/guilds/league-of-assassins/shadow-mastery/shadow-step.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/shadow-theory.c",
        "/guilds/league-of-assassins/shadow-mastery/shadowborn.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/night-eyes.c");
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/shroud.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/night-eyes.c",
        "/guilds/league-of-assassins/shadow-mastery/shadow-theory.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/shroud.c",
        "/guilds/league-of-assassins/shadow-mastery/shadow-step.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/improved-shadow-step.c");
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/improved-strike-from-shadow.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/improved-shadow-step.c",
        "/guilds/league-of-assassins/shadow-mastery/shadow-step.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/"
        "improved-strike-from-shadow.c",
        "/guilds/league-of-assassins/shadow-mastery/strike-from-shadow.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/shadow-awareness.c");
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/shadow-lunge.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/shadow-awareness.c",
        "/guilds/league-of-assassins/shadow-mastery/night-eyes.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/shadow-lunge.c",
        "/guilds/league-of-assassins/shadow-mastery/strike-from-shadow.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/shadow-cloak.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/shadow-cloak.c",
        "/guilds/league-of-assassins/shadow-mastery/shroud.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/shadowmeld.c");
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/perfect-shadow-step.c");
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/improved-shadow-lunge.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/shadowmeld.c",
        "/guilds/league-of-assassins/shadow-mastery/shadow-cloak.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/perfect-shadow-step.c",
        "/guilds/league-of-assassins/shadow-mastery/improved-shadow-step.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/improved-shadow-lunge.c",
        "/guilds/league-of-assassins/shadow-mastery/shadow-lunge.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/ambient-predator.c");
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/improved-shroud.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/ambient-predator.c",
        "/guilds/league-of-assassins/shadow-mastery/shadow-awareness.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/improved-shroud.c",
        "/guilds/league-of-assassins/shadow-mastery/shroud.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/blind-spot.c");
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/silent-predator.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/blind-spot.c",
        "/guilds/league-of-assassins/shadow-mastery/shadow-lunge.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/silent-predator.c",
        "/guilds/league-of-assassins/shadow-mastery/shadowmeld.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/"
        "perfect-strike-from-shadow.c");
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/perfect-shadow-lunge.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/"
        "perfect-strike-from-shadow.c",
        "/guilds/league-of-assassins/shadow-mastery/"
        "improved-strike-from-shadow.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/perfect-shadow-lunge.c",
        "/guilds/league-of-assassins/shadow-mastery/improved-shadow-lunge.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/shadow-reflexes.c");
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/improved-shadow-cloak.c");
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/perfect-shroud.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/shadow-reflexes.c",
        "/guilds/league-of-assassins/shadow-mastery/ambient-predator.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/improved-shadow-cloak.c",
        "/guilds/league-of-assassins/shadow-mastery/shadow-cloak.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/perfect-shroud.c",
        "/guilds/league-of-assassins/shadow-mastery/improved-shroud.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/shadow-volley.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/shadow-volley.c",
        "/guilds/league-of-assassins/shadow-mastery/shadow-lunge.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/dark-instinct.c");
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/improved-blind-spot.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/dark-instinct.c",
        "/guilds/league-of-assassins/shadow-mastery/silent-predator.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/improved-blind-spot.c",
        "/guilds/league-of-assassins/shadow-mastery/blind-spot.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/shadow-mastery.c");
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/improved-shadow-volley.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/shadow-mastery.c",
        "/guilds/league-of-assassins/shadow-mastery/shadow-reflexes.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/improved-shadow-volley.c",
        "/guilds/league-of-assassins/shadow-mastery/shadow-volley.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/umbral-strike.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/umbral-strike.c",
        "/guilds/league-of-assassins/shadow-mastery/shadow-volley.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/void-step.c");
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/perfect-shadow-volley.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/void-step.c",
        "/guilds/league-of-assassins/shadow-mastery/dark-instinct.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/perfect-shadow-volley.c",
        "/guilds/league-of-assassins/shadow-mastery/improved-shadow-volley.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/perfect-shadow-cloak.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/perfect-shadow-cloak.c",
        "/guilds/league-of-assassins/shadow-mastery/improved-shadow-cloak.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/shadowform.c");
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/improved-umbral-strike.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/shadowform.c",
        "/guilds/league-of-assassins/shadow-mastery/shadow-mastery.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/improved-umbral-strike.c",
        "/guilds/league-of-assassins/shadow-mastery/umbral-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/perfect-blind-spot.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/perfect-blind-spot.c",
        "/guilds/league-of-assassins/shadow-mastery/improved-blind-spot.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/perfect-umbral-strike.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/perfect-umbral-strike.c",
        "/guilds/league-of-assassins/shadow-mastery/improved-umbral-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/dark-supremacy.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/dark-supremacy.c",
        "/guilds/league-of-assassins/shadow-mastery/void-step.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/darkblade.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/darkblade.c",
        "/guilds/league-of-assassins/shadow-mastery/umbral-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/shadow-mastery/abyssal-stillness.c");
    addChild(
        "/guilds/league-of-assassins/shadow-mastery/abyssal-stillness.c",
        "/guilds/league-of-assassins/shadow-mastery/shadowform.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("shadow mastery");
    Description("Techniques of shadow movement, concealment, and combat "
        "that harness darkness as both sanctuary and weapon, making "
        "the assassin a creature of the night in the truest sense.");
    Source("League of Assassins");
    TreeRoot("/guilds/league-of-assassins/shadow-mastery/root.c");

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
    FortyFifthLevel();
    FiftyFirstLevel();
    FiftySeventhLevel();
}

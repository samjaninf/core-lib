//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/sidestep.c");
    addResearchElement("/guilds/league-of-assassins/evasion/evasive-footwork.c");
    addChild("/guilds/league-of-assassins/evasion/sidestep.c",
        "/guilds/league-of-assassins/evasion/root.c");
    addChild("/guilds/league-of-assassins/evasion/evasive-footwork.c",
        "/guilds/league-of-assassins/evasion/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/combat-rolling.c");
    addChild("/guilds/league-of-assassins/evasion/combat-rolling.c",
        "/guilds/league-of-assassins/evasion/sidestep.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/acrobatic-defense.c");
    addResearchElement("/guilds/league-of-assassins/evasion/evasion-theory.c");
    addChild("/guilds/league-of-assassins/evasion/acrobatic-defense.c",
        "/guilds/league-of-assassins/evasion/evasive-footwork.c");
    addChild("/guilds/league-of-assassins/evasion/evasion-theory.c",
        "/guilds/league-of-assassins/evasion/sidestep.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/shadow-step.c");
    addResearchElement("/guilds/league-of-assassins/evasion/improved-sidestep.c");
    addChild("/guilds/league-of-assassins/evasion/shadow-step.c",
        "/guilds/league-of-assassins/evasion/combat-rolling.c");
    addChild("/guilds/league-of-assassins/evasion/improved-sidestep.c",
        "/guilds/league-of-assassins/evasion/sidestep.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/danger-sense.c");
    addResearchElement("/guilds/league-of-assassins/evasion/split-second-timing.c");
    addChild("/guilds/league-of-assassins/evasion/danger-sense.c",
        "/guilds/league-of-assassins/evasion/evasion-theory.c");
    addChild("/guilds/league-of-assassins/evasion/split-second-timing.c",
        "/guilds/league-of-assassins/evasion/evasive-footwork.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/ghostly-movement.c");
    addResearchElement("/guilds/league-of-assassins/evasion/improved-combat-rolling.c");
    addChild("/guilds/league-of-assassins/evasion/ghostly-movement.c",
        "/guilds/league-of-assassins/evasion/shadow-step.c");
    addChild("/guilds/league-of-assassins/evasion/improved-combat-rolling.c",
        "/guilds/league-of-assassins/evasion/combat-rolling.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/uncanny-dodge.c");
    addChild("/guilds/league-of-assassins/evasion/uncanny-dodge.c",
        "/guilds/league-of-assassins/evasion/danger-sense.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/perfect-sidestep.c");
    addResearchElement("/guilds/league-of-assassins/evasion/improved-shadow-step.c");
    addChild("/guilds/league-of-assassins/evasion/perfect-sidestep.c",
        "/guilds/league-of-assassins/evasion/improved-sidestep.c");
    addChild("/guilds/league-of-assassins/evasion/improved-shadow-step.c",
        "/guilds/league-of-assassins/evasion/shadow-step.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/fleet-of-foot.c");
    addChild("/guilds/league-of-assassins/evasion/fleet-of-foot.c",
        "/guilds/league-of-assassins/evasion/acrobatic-defense.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/evasive-strike.c");
    addResearchElement("/guilds/league-of-assassins/evasion/reading-the-fight.c");
    addChild("/guilds/league-of-assassins/evasion/evasive-strike.c",
        "/guilds/league-of-assassins/evasion/combat-rolling.c");
    addChild("/guilds/league-of-assassins/evasion/reading-the-fight.c",
        "/guilds/league-of-assassins/evasion/danger-sense.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/shadow-step-mastery.c");
    addResearchElement("/guilds/league-of-assassins/evasion/defensive-awareness.c");
    addChild("/guilds/league-of-assassins/evasion/shadow-step-mastery.c",
        "/guilds/league-of-assassins/evasion/improved-shadow-step.c");
    addChild("/guilds/league-of-assassins/evasion/defensive-awareness.c",
        "/guilds/league-of-assassins/evasion/uncanny-dodge.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/perfect-combat-rolling.c");
    addChild("/guilds/league-of-assassins/evasion/perfect-combat-rolling.c",
        "/guilds/league-of-assassins/evasion/improved-combat-rolling.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/mist-walk.c");
    addResearchElement("/guilds/league-of-assassins/evasion/improved-evasive-strike.c");
    addChild("/guilds/league-of-assassins/evasion/mist-walk.c",
        "/guilds/league-of-assassins/evasion/shadow-step.c");
    addChild("/guilds/league-of-assassins/evasion/improved-evasive-strike.c",
        "/guilds/league-of-assassins/evasion/evasive-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/evasion-mastery.c");
    addChild("/guilds/league-of-assassins/evasion/evasion-mastery.c",
        "/guilds/league-of-assassins/evasion/fleet-of-foot.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/phantom-steps.c");
    addChild("/guilds/league-of-assassins/evasion/phantom-steps.c",
        "/guilds/league-of-assassins/evasion/ghostly-movement.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/perfect-evasive-strike.c");
    addChild("/guilds/league-of-assassins/evasion/perfect-evasive-strike.c",
        "/guilds/league-of-assassins/evasion/improved-evasive-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/improved-mist-walk.c");
    addChild("/guilds/league-of-assassins/evasion/improved-mist-walk.c",
        "/guilds/league-of-assassins/evasion/mist-walk.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/wind-dancer.c");
    addChild("/guilds/league-of-assassins/evasion/wind-dancer.c",
        "/guilds/league-of-assassins/evasion/mist-walk.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/master-evasion.c");
    addChild("/guilds/league-of-assassins/evasion/master-evasion.c",
        "/guilds/league-of-assassins/evasion/evasion-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/perfect-mist-walk.c");
    addChild("/guilds/league-of-assassins/evasion/perfect-mist-walk.c",
        "/guilds/league-of-assassins/evasion/improved-mist-walk.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyThirdLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/improved-wind-dancer.c");
    addChild("/guilds/league-of-assassins/evasion/improved-wind-dancer.c",
        "/guilds/league-of-assassins/evasion/wind-dancer.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/ethereal-grace.c");
    addChild("/guilds/league-of-assassins/evasion/ethereal-grace.c",
        "/guilds/league-of-assassins/evasion/master-evasion.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySeventhLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/counter-positioning.c");
    addChild("/guilds/league-of-assassins/evasion/counter-positioning.c",
        "/guilds/league-of-assassins/evasion/evasive-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/perfect-wind-dancer.c");
    addChild("/guilds/league-of-assassins/evasion/perfect-wind-dancer.c",
        "/guilds/league-of-assassins/evasion/improved-wind-dancer.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/supreme-evasion.c");
    addChild("/guilds/league-of-assassins/evasion/supreme-evasion.c",
        "/guilds/league-of-assassins/evasion/ethereal-grace.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/supreme-evasion-theory.c");
    addChild("/guilds/league-of-assassins/evasion/supreme-evasion-theory.c",
        "/guilds/league-of-assassins/evasion/supreme-evasion.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySeventhLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/ghost-form.c");
    addChild("/guilds/league-of-assassins/evasion/ghost-form.c",
        "/guilds/league-of-assassins/evasion/phantom-steps.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/ethereal-strike.c");
    addChild("/guilds/league-of-assassins/evasion/ethereal-strike.c",
        "/guilds/league-of-assassins/evasion/wind-dancer.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/improved-ethereal-strike.c");
    addChild("/guilds/league-of-assassins/evasion/improved-ethereal-strike.c",
        "/guilds/league-of-assassins/evasion/ethereal-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyNinthLevel()
{
    addResearchElement("/guilds/league-of-assassins/evasion/shadows-legacy.c");
    addChild("/guilds/league-of-assassins/evasion/shadows-legacy.c",
        "/guilds/league-of-assassins/evasion/supreme-evasion.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Evasion");
    Description("The evasion arts of the League of Assassins, "
        "mastering the doctrine that the best defense is never "
        "being where the blow lands.");
    Source("League of Assassins");
    TreeRoot("/guilds/league-of-assassins/evasion/root.c");

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
    ThirtyNinthLevel();
    FortyFirstLevel();
    FortyThirdLevel();
    FortyFifthLevel();
    FortySeventhLevel();
    FortyNinthLevel();
    FiftyThirdLevel();
    FiftyFifthLevel();
    FiftySeventhLevel();
    SixtyFirstLevel();
    SixtyFifthLevel();
    SixtyNinthLevel();
}

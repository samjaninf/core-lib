//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/quick-strike.c");
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/lacerate.c");
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/blade-affinity.c");

    addChild("/guilds/league-of-assassins/blade-techniques/quick-strike.c",
        "/guilds/league-of-assassins/blade-techniques/root.c");
    addChild("/guilds/league-of-assassins/blade-techniques/lacerate.c",
        "/guilds/league-of-assassins/blade-techniques/root.c");
    addChild(
        "/guilds/league-of-assassins/blade-techniques/blade-affinity.c",
        "/guilds/league-of-assassins/blade-techniques/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/vital-strike.c");
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/finesse-mastery.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/vital-strike.c",
        "/guilds/league-of-assassins/blade-techniques/quick-strike.c");
    addChild(
        "/guilds/league-of-assassins/blade-techniques/finesse-mastery.c",
        "/guilds/league-of-assassins/blade-techniques/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/improved-quick-strike.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/improved-quick-strike.c",
        "/guilds/league-of-assassins/blade-techniques/quick-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/deep-laceration.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/deep-laceration.c",
        "/guilds/league-of-assassins/blade-techniques/lacerate.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/improved-vital-strike.c");
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/hemorrhage.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/improved-vital-strike.c",
        "/guilds/league-of-assassins/blade-techniques/vital-strike.c");
    addChild(
        "/guilds/league-of-assassins/blade-techniques/hemorrhage.c",
        "/guilds/league-of-assassins/blade-techniques/deep-laceration.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/dual-strike.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/dual-strike.c",
        "/guilds/league-of-assassins/blade-techniques/vital-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/serrated-technique.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/serrated-technique.c",
        "/guilds/league-of-assassins/blade-techniques/deep-laceration.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/blade-precision.c");
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/shadows-edge.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/blade-precision.c",
        "/guilds/league-of-assassins/blade-techniques/improved-quick-strike.c");
    addChild(
        "/guilds/league-of-assassins/blade-techniques/shadows-edge.c",
        "/guilds/league-of-assassins/blade-techniques/vital-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/perfect-vital-strike.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/perfect-vital-strike.c",
        "/guilds/league-of-assassins/blade-techniques/improved-vital-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/improved-dual-strike.c");
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/dueling-expertise.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/improved-dual-strike.c",
        "/guilds/league-of-assassins/blade-techniques/dual-strike.c");
    addChild(
        "/guilds/league-of-assassins/blade-techniques/dueling-expertise.c",
        "/guilds/league-of-assassins/blade-techniques/improved-dual-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/throat-cut.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/throat-cut.c",
        "/guilds/league-of-assassins/blade-techniques/dual-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/keen-edge.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/keen-edge.c",
        "/guilds/league-of-assassins/blade-techniques/serrated-technique.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/perfect-dual-strike.c");
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/bleeding-edge.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/perfect-dual-strike.c",
        "/guilds/league-of-assassins/blade-techniques/improved-dual-strike.c");
    addChild(
        "/guilds/league-of-assassins/blade-techniques/bleeding-edge.c",
        "/guilds/league-of-assassins/blade-techniques/lacerate.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/improved-throat-cut.c");
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/throat-work.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/improved-throat-cut.c",
        "/guilds/league-of-assassins/blade-techniques/throat-cut.c");
    addChild(
        "/guilds/league-of-assassins/blade-techniques/throat-work.c",
        "/guilds/league-of-assassins/blade-techniques/improved-throat-cut.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/heartseeker.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/heartseeker.c",
        "/guilds/league-of-assassins/blade-techniques/throat-cut.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/masters-quick-strike.c");
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/lethal-precision.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/masters-quick-strike.c",
        "/guilds/league-of-assassins/blade-techniques/blade-precision.c");
    addChild(
        "/guilds/league-of-assassins/blade-techniques/lethal-precision.c",
        "/guilds/league-of-assassins/blade-techniques/heartseeker.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/masters-throat-cut.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/masters-throat-cut.c",
        "/guilds/league-of-assassins/blade-techniques/improved-throat-cut.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/improved-heartseeker.c");
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/arterial-strike.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/improved-heartseeker.c",
        "/guilds/league-of-assassins/blade-techniques/heartseeker.c");
    addChild(
        "/guilds/league-of-assassins/blade-techniques/arterial-strike.c",
        "/guilds/league-of-assassins/blade-techniques/improved-heartseeker.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/bladestorm.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/bladestorm.c",
        "/guilds/league-of-assassins/blade-techniques/heartseeker.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/perfect-heartseeker.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/perfect-heartseeker.c",
        "/guilds/league-of-assassins/blade-techniques/improved-heartseeker.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/improved-bladestorm.c");
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/storm-mastery.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/improved-bladestorm.c",
        "/guilds/league-of-assassins/blade-techniques/bladestorm.c");
    addChild(
        "/guilds/league-of-assassins/blade-techniques/storm-mastery.c",
        "/guilds/league-of-assassins/blade-techniques/improved-bladestorm.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/death-stroke.c");
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/fluid-motion.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/death-stroke.c",
        "/guilds/league-of-assassins/blade-techniques/bladestorm.c");
    addChild(
        "/guilds/league-of-assassins/blade-techniques/fluid-motion.c",
        "/guilds/league-of-assassins/blade-techniques/bladestorm.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/perfect-bladestorm.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/perfect-bladestorm.c",
        "/guilds/league-of-assassins/blade-techniques/improved-bladestorm.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/improved-death-stroke.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/improved-death-stroke.c",
        "/guilds/league-of-assassins/blade-techniques/death-stroke.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/assassins-blade-mastery.c");
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/death-arts.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/assassins-blade-mastery.c",
        "/guilds/league-of-assassins/blade-techniques/blade-precision.c");
    addChild(
        "/guilds/league-of-assassins/blade-techniques/death-arts.c",
        "/guilds/league-of-assassins/blade-techniques/improved-death-stroke.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/perfect-death-stroke.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/perfect-death-stroke.c",
        "/guilds/league-of-assassins/blade-techniques/improved-death-stroke.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/shadows-kiss.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/shadows-kiss.c",
        "/guilds/league-of-assassins/blade-techniques/death-stroke.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/supreme-blade-mastery.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/supreme-blade-mastery.c",
        "/guilds/league-of-assassins/blade-techniques/shadows-kiss.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/improved-shadows-kiss.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/improved-shadows-kiss.c",
        "/guilds/league-of-assassins/blade-techniques/shadows-kiss.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/perfect-shadows-kiss.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/perfect-shadows-kiss.c",
        "/guilds/league-of-assassins/blade-techniques/improved-shadows-kiss.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyNinthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/blade-techniques/assassins-legacy.c");

    addChild(
        "/guilds/league-of-assassins/blade-techniques/assassins-legacy.c",
        "/guilds/league-of-assassins/blade-techniques/supreme-blade-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Blade Techniques");
    Description("The blade techniques of the League of Assassins, "
        "focusing on the dagger and short sword as instruments of "
        "precise and lethal combat.");
    Source("League of Assassins");
    TreeRoot("/guilds/league-of-assassins/blade-techniques/root.c");

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
    FiftyFirstLevel();
    FiftyThirdLevel();
    FiftySeventhLevel();
    SixtyFirstLevel();
    SixtyThirdLevel();
    SixtySeventhLevel();
    SixtyNinthLevel();
}

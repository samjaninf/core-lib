//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/flaying-strike.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/flaying-strike.c",
        "/guilds/league-of-assassins/master-assassin-path/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySeventhLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/masters-precision.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/masters-path-theory.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/masters-precision.c",
        "/guilds/league-of-assassins/master-assassin-path/root.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/masters-path-theory.c",
        "/guilds/league-of-assassins/master-assassin-path/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/ghost-step-strike.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/ghost-step-strike.c",
        "/guilds/league-of-assassins/master-assassin-path/flaying-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/improved-flaying-strike.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/masters-edge.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/improved-flaying-strike.c",
        "/guilds/league-of-assassins/master-assassin-path/flaying-strike.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/masters-edge.c",
        "/guilds/league-of-assassins/master-assassin-path/flaying-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/vanishing-blade.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/masters-swiftness.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/shadow-mastery-bonus.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/killers-flow.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/vanishing-blade.c",
        "/guilds/league-of-assassins/master-assassin-path/ghost-step-strike.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/masters-swiftness.c",
        "/guilds/league-of-assassins/master-assassin-path/masters-precision.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/shadow-mastery-bonus.c",
        "/guilds/league-of-assassins/master-assassin-path/ghost-step-strike.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/killers-flow.c",
        "/guilds/league-of-assassins/master-assassin-path/masters-edge.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/improved-ghost-step-strike.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/shadow-theory-advanced.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/masters-mark.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/improved-ghost-step-strike.c",
        "/guilds/league-of-assassins/master-assassin-path/ghost-step-strike.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/shadow-theory-advanced.c",
        "/guilds/league-of-assassins/master-assassin-path/masters-path-theory.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/masters-mark.c",
        "/guilds/league-of-assassins/master-assassin-path/shadow-mastery-bonus.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySeventhLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/perfect-flaying-strike.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/masters-anatomy.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/perfect-flaying-strike.c",
        "/guilds/league-of-assassins/master-assassin-path/improved-flaying-strike.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/masters-anatomy.c",
        "/guilds/league-of-assassins/master-assassin-path/vanishing-blade.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyNinthLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/assassins-wrath.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/masters-economy.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/relentless-predator.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/improved-vanishing-blade.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/assassins-wrath.c",
        "/guilds/league-of-assassins/master-assassin-path/vanishing-blade.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/masters-economy.c",
        "/guilds/league-of-assassins/master-assassin-path/masters-swiftness.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/relentless-predator.c",
        "/guilds/league-of-assassins/master-assassin-path/masters-edge.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/improved-vanishing-blade.c",
        "/guilds/league-of-assassins/master-assassin-path/vanishing-blade.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/lethal-sequence.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/perfect-ghost-step-strike.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/deaths-patience.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/lethal-sequence.c",
        "/guilds/league-of-assassins/master-assassin-path/assassins-wrath.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/perfect-ghost-step-strike.c",
        "/guilds/league-of-assassins/master-assassin-path/improved-ghost-step-strike.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/deaths-patience.c",
        "/guilds/league-of-assassins/master-assassin-path/shadow-mastery-bonus.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyThirdLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/shadow-predator-form.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/improved-assassins-wrath.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/death-sentence.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/masters-cadence.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/shadow-predator-form.c",
        "/guilds/league-of-assassins/master-assassin-path/deaths-patience.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/improved-assassins-wrath.c",
        "/guilds/league-of-assassins/master-assassin-path/assassins-wrath.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/death-sentence.c",
        "/guilds/league-of-assassins/master-assassin-path/masters-mark.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/masters-cadence.c",
        "/guilds/league-of-assassins/master-assassin-path/relentless-predator.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/eclipse-strike.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/perfect-vanishing-blade.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/killing-art.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/eclipse-strike.c",
        "/guilds/league-of-assassins/master-assassin-path/lethal-sequence.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/perfect-vanishing-blade.c",
        "/guilds/league-of-assassins/master-assassin-path/improved-vanishing-blade.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/killing-art.c",
        "/guilds/league-of-assassins/master-assassin-path/masters-anatomy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtySeventhLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/improved-lethal-sequence.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/supreme-blade-mastery.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/improved-lethal-sequence.c",
        "/guilds/league-of-assassins/master-assassin-path/lethal-sequence.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/supreme-blade-mastery.c",
        "/guilds/league-of-assassins/master-assassin-path/killing-art.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyNinthLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/perfect-assassins-wrath.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/cold-professionalism.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/perfect-assassins-wrath.c",
        "/guilds/league-of-assassins/master-assassin-path/improved-assassins-wrath.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/cold-professionalism.c",
        "/guilds/league-of-assassins/master-assassin-path/shadow-theory-advanced.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventyFirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/absolute-lethality.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/masters-path-mastery.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/absolute-lethality.c",
        "/guilds/league-of-assassins/master-assassin-path/relentless-predator.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/masters-path-mastery.c",
        "/guilds/league-of-assassins/master-assassin-path/killing-art.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventyThirdLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/perfect-lethal-sequence.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/improved-eclipse-strike.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/contract-kill.c");
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/lethal-economy.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/perfect-lethal-sequence.c",
        "/guilds/league-of-assassins/master-assassin-path/improved-lethal-sequence.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/improved-eclipse-strike.c",
        "/guilds/league-of-assassins/master-assassin-path/eclipse-strike.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/contract-kill.c",
        "/guilds/league-of-assassins/master-assassin-path/death-sentence.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/lethal-economy.c",
        "/guilds/league-of-assassins/master-assassin-path/masters-path-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventySeventhLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/void-artistry.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/void-artistry.c",
        "/guilds/league-of-assassins/master-assassin-path/lethal-economy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventyNinthLevel()
{
    addResearchElement("/guilds/league-of-assassins/master-assassin-path/perfect-eclipse-strike.c");
    addChild("/guilds/league-of-assassins/master-assassin-path/perfect-eclipse-strike.c",
        "/guilds/league-of-assassins/master-assassin-path/improved-eclipse-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("master assassin's path");
    Description("The rank-gated path of the master assassin, containing "
        "advanced shadow-combat techniques, master-level strikes, "
        "and the comprehensive passive improvements that define "
        "a League master operative.");
    Source("League of Assassins");
    TreeRoot("/guilds/league-of-assassins/master-assassin-path/root.c");

    FirstLevel();
    FortyFifthLevel();
    FortySeventhLevel();
    FortyNinthLevel();
    FiftyFirstLevel();
    FiftyThirdLevel();
    FiftyFifthLevel();
    FiftySeventhLevel();
    FiftyNinthLevel();
    SixtyFirstLevel();
    SixtyThirdLevel();
    SixtyFifthLevel();
    SixtySeventhLevel();
    SixtyNinthLevel();
    SeventyFirstLevel();
    SeventyThirdLevel();
    SeventySeventhLevel();
    SeventyNinthLevel();
}
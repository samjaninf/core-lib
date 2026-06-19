//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/precision-strike.c");
    addChild("/guilds/league-of-assassins/assassin-path/precision-strike.c",
        "/guilds/league-of-assassins/assassin-path/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/shadow-ambush.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/assassins-precision.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/assassins-path-theory.c");
    addChild("/guilds/league-of-assassins/assassin-path/shadow-ambush.c",
        "/guilds/league-of-assassins/assassin-path/precision-strike.c");
    addChild("/guilds/league-of-assassins/assassin-path/assassins-precision.c",
        "/guilds/league-of-assassins/assassin-path/root.c");
    addChild("/guilds/league-of-assassins/assassin-path/assassins-path-theory.c",
        "/guilds/league-of-assassins/assassin-path/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/assassins-edge.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/improved-precision-strike.c");
    addChild("/guilds/league-of-assassins/assassin-path/assassins-edge.c",
        "/guilds/league-of-assassins/assassin-path/precision-strike.c");
    addChild("/guilds/league-of-assassins/assassin-path/improved-precision-strike.c",
        "/guilds/league-of-assassins/assassin-path/precision-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/exploit-weakness.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/shadow-sight.c");
    addChild("/guilds/league-of-assassins/assassin-path/exploit-weakness.c",
        "/guilds/league-of-assassins/assassin-path/shadow-ambush.c");
    addChild("/guilds/league-of-assassins/assassin-path/shadow-sight.c",
        "/guilds/league-of-assassins/assassin-path/shadow-ambush.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/improved-shadow-ambush.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/assassins-swiftness.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/anatomical-mastery.c");
    addChild("/guilds/league-of-assassins/assassin-path/improved-shadow-ambush.c",
        "/guilds/league-of-assassins/assassin-path/shadow-ambush.c");
    addChild("/guilds/league-of-assassins/assassin-path/assassins-swiftness.c",
        "/guilds/league-of-assassins/assassin-path/assassins-precision.c");
    addChild("/guilds/league-of-assassins/assassin-path/anatomical-mastery.c",
        "/guilds/league-of-assassins/assassin-path/exploit-weakness.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/crippling-blow.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/marked-target.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/killers-instinct.c");
    addChild("/guilds/league-of-assassins/assassin-path/crippling-blow.c",
        "/guilds/league-of-assassins/assassin-path/exploit-weakness.c");
    addChild("/guilds/league-of-assassins/assassin-path/marked-target.c",
        "/guilds/league-of-assassins/assassin-path/shadow-sight.c");
    addChild("/guilds/league-of-assassins/assassin-path/killers-instinct.c",
        "/guilds/league-of-assassins/assassin-path/assassins-edge.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/perfect-precision-strike.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/shadow-discipline.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/ghost-strike-theory.c");
    addChild("/guilds/league-of-assassins/assassin-path/perfect-precision-strike.c",
        "/guilds/league-of-assassins/assassin-path/improved-precision-strike.c");
    addChild("/guilds/league-of-assassins/assassin-path/shadow-discipline.c",
        "/guilds/league-of-assassins/assassin-path/shadow-sight.c");
    addChild("/guilds/league-of-assassins/assassin-path/ghost-strike-theory.c",
        "/guilds/league-of-assassins/assassin-path/assassins-path-theory.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/marked-for-death.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/perfect-shadow-ambush.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/assassins-economy.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/predatory-stance.c");
    addChild("/guilds/league-of-assassins/assassin-path/marked-for-death.c",
        "/guilds/league-of-assassins/assassin-path/crippling-blow.c");
    addChild("/guilds/league-of-assassins/assassin-path/perfect-shadow-ambush.c",
        "/guilds/league-of-assassins/assassin-path/improved-shadow-ambush.c");
    addChild("/guilds/league-of-assassins/assassin-path/assassins-economy.c",
        "/guilds/league-of-assassins/assassin-path/assassins-swiftness.c");
    addChild("/guilds/league-of-assassins/assassin-path/predatory-stance.c",
        "/guilds/league-of-assassins/assassin-path/shadow-discipline.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/improved-crippling-blow.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/improved-exploit-weakness.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/lethal-agility.c");
    addChild("/guilds/league-of-assassins/assassin-path/improved-crippling-blow.c",
        "/guilds/league-of-assassins/assassin-path/crippling-blow.c");
    addChild("/guilds/league-of-assassins/assassin-path/improved-exploit-weakness.c",
        "/guilds/league-of-assassins/assassin-path/exploit-weakness.c");
    addChild("/guilds/league-of-assassins/assassin-path/lethal-agility.c",
        "/guilds/league-of-assassins/assassin-path/killers-instinct.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyThirdLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/shadow-mark.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/perfect-exploit-weakness.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/predators-calm.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/killers-philosophy.c");
    addChild("/guilds/league-of-assassins/assassin-path/shadow-mark.c",
        "/guilds/league-of-assassins/assassin-path/marked-target.c");
    addChild("/guilds/league-of-assassins/assassin-path/perfect-exploit-weakness.c",
        "/guilds/league-of-assassins/assassin-path/improved-exploit-weakness.c");
    addChild("/guilds/league-of-assassins/assassin-path/predators-calm.c",
        "/guilds/league-of-assassins/assassin-path/anatomical-mastery.c");
    addChild("/guilds/league-of-assassins/assassin-path/killers-philosophy.c",
        "/guilds/league-of-assassins/assassin-path/ghost-strike-theory.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/final-reckoning.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/improved-marked-for-death.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/blades-blood.c");
    addChild("/guilds/league-of-assassins/assassin-path/final-reckoning.c",
        "/guilds/league-of-assassins/assassin-path/marked-for-death.c");
    addChild("/guilds/league-of-assassins/assassin-path/improved-marked-for-death.c",
        "/guilds/league-of-assassins/assassin-path/marked-for-death.c");
    addChild("/guilds/league-of-assassins/assassin-path/blades-blood.c",
        "/guilds/league-of-assassins/assassin-path/predators-calm.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySeventhLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/perfect-crippling-blow.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/bleeding-edge-stance.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/hunters-resolve.c");
    addChild("/guilds/league-of-assassins/assassin-path/perfect-crippling-blow.c",
        "/guilds/league-of-assassins/assassin-path/improved-crippling-blow.c");
    addChild("/guilds/league-of-assassins/assassin-path/bleeding-edge-stance.c",
        "/guilds/league-of-assassins/assassin-path/lethal-agility.c");
    addChild("/guilds/league-of-assassins/assassin-path/hunters-resolve.c",
        "/guilds/league-of-assassins/assassin-path/predators-calm.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/assassins-brand.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/improved-final-reckoning.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/assassins-path-mastery.c");
    addChild("/guilds/league-of-assassins/assassin-path/assassins-brand.c",
        "/guilds/league-of-assassins/assassin-path/shadow-mark.c");
    addChild("/guilds/league-of-assassins/assassin-path/improved-final-reckoning.c",
        "/guilds/league-of-assassins/assassin-path/final-reckoning.c");
    addChild("/guilds/league-of-assassins/assassin-path/assassins-path-mastery.c",
        "/guilds/league-of-assassins/assassin-path/blades-blood.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/perfect-marked-for-death.c");
    addResearchElement("/guilds/league-of-assassins/assassin-path/combat-focus.c");
    addChild("/guilds/league-of-assassins/assassin-path/perfect-marked-for-death.c",
        "/guilds/league-of-assassins/assassin-path/improved-marked-for-death.c");
    addChild("/guilds/league-of-assassins/assassin-path/combat-focus.c",
        "/guilds/league-of-assassins/assassin-path/assassins-edge.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/deaths-artistry.c");
    addChild("/guilds/league-of-assassins/assassin-path/deaths-artistry.c",
        "/guilds/league-of-assassins/assassin-path/assassins-path-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/assassin-path/perfect-final-reckoning.c");
    addChild("/guilds/league-of-assassins/assassin-path/perfect-final-reckoning.c",
        "/guilds/league-of-assassins/assassin-path/improved-final-reckoning.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("assassin's path");
    Description("The rank-gated path of the assassin, covering advanced "
        "combat techniques, target exploitation, shadow-enhanced "
        "strikes, and the disciplined mastery that separates a "
        "League assassin from any common killer.");
    Source("League of Assassins");
    TreeRoot("/guilds/league-of-assassins/assassin-path/root.c");

    FirstLevel();
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
    FiftyFifthLevel();
}
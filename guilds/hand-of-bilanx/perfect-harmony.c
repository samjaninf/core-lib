//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FoundationLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-theory.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-awakening.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-attunement.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/balanced-insight.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-ward.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-pulse.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/radiant-harmony.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/shadow-harmony.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-shield.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-burst.c");

    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-theory.c",
        "/guilds/hand-of-bilanx/perfect-harmony/root.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-awakening.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-theory.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-attunement.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-awakening.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/balanced-insight.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-attunement.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-ward.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-awakening.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-pulse.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-awakening.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/radiant-harmony.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-pulse.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/shadow-harmony.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-pulse.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-shield.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-ward.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-burst.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-attunement.c");
}

/////////////////////////////////////////////////////////////////////////////
private void AllTruthsLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-awakening.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-theory.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/echo-of-the-scales.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/the-eighth-truth.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-mastery.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-perfected.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-revelation.c");

    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-awakening.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-theory.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-theory.c",
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-awakening.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/echo-of-the-scales.c",
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-theory.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/the-eighth-truth.c",
        "/guilds/hand-of-bilanx/perfect-harmony/echo-of-the-scales.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-mastery.c",
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-theory.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-perfected.c",
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-mastery.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-revelation.c",
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-perfected.c");
}

/////////////////////////////////////////////////////////////////////////////
private void HarmonicLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/harmonic-resonance.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-restoration.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-strike.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-reckoning.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/dual-harmony.c");

    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/harmonic-resonance.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-attunement.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-restoration.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmonic-resonance.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-strike.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmonic-resonance.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-reckoning.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-strike.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/dual-harmony.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmonic-resonance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void BalanceMasteryLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/balance-mastery.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/unity-of-all.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-wave.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-judgment.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-surge.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/perfect-restoration.c");

    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/balance-mastery.c",
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-theory.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/unity-of-all.c",
        "/guilds/hand-of-bilanx/perfect-harmony/balance-mastery.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-wave.c",
        "/guilds/hand-of-bilanx/perfect-harmony/balance-mastery.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-judgment.c",
        "/guilds/hand-of-bilanx/perfect-harmony/balanced-insight.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-surge.c",
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-mastery.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/perfect-restoration.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-restoration.c");
}

/////////////////////////////////////////////////////////////////////////////
private void CapstoneLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-capstone.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/perfect-balance.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/living-balance.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/scales-perfected.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/unity-of-truths.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/absolute-harmony.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/final-harmony.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/mantle-of-harmony.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/absolute-balance.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-nova.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/perfect-harmony.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/perfect-harmony/perfect-equilibrium.c");

    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-capstone.c",
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-perfected.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/perfect-balance.c",
        "/guilds/hand-of-bilanx/perfect-harmony/perfect-restoration.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/living-balance.c",
        "/guilds/hand-of-bilanx/perfect-harmony/all-truths-revelation.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/scales-perfected.c",
        "/guilds/hand-of-bilanx/perfect-harmony/living-balance.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/unity-of-truths.c",
        "/guilds/hand-of-bilanx/perfect-harmony/scales-perfected.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/absolute-harmony.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-capstone.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/final-harmony.c",
        "/guilds/hand-of-bilanx/perfect-harmony/unity-of-truths.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/mantle-of-harmony.c",
        "/guilds/hand-of-bilanx/perfect-harmony/root.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/absolute-balance.c",
        "/guilds/hand-of-bilanx/perfect-harmony/mantle-of-harmony.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-nova.c",
        "/guilds/hand-of-bilanx/perfect-harmony/mantle-of-harmony.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/perfect-harmony.c",
        "/guilds/hand-of-bilanx/perfect-harmony/harmony-nova.c");
    addChild(
        "/guilds/hand-of-bilanx/perfect-harmony/perfect-equilibrium.c",
        "/guilds/hand-of-bilanx/perfect-harmony/perfect-harmony.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Perfect Harmony");
    Description("This research tree teaches Bilanx's eighth and final truth "
        "- that perfect harmony is not a destination but a continuous act "
        "of will. The Hand who achieves this truth becomes a nexus of "
        "balance. They can sustain a mantle that protects nearby allies, "
        "unleash a nova of perfectly balanced destructive and restorative "
        "energy, and ultimately achieve the state of Perfect Harmony itself "
        "- a living proof that all opposing forces may be held in "
        "permanent equilibrium.");
    Source("Hand of Bilanx");
    addResearchElement("/guilds/hand-of-bilanx/perfect-harmony/root.c");
    TreeRoot("/guilds/hand-of-bilanx/perfect-harmony/root.c");

    FoundationLevel();
    AllTruthsLevel();
    HarmonicLevel();
    BalanceMasteryLevel();
    CapstoneLevel();
}

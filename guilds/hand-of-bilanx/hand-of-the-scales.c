//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void SeekerLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-theory.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/restore-balance.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/reality-fracture.c");

    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-theory.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/root.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/restore-balance.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-theory.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/reality-fracture.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-theory.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ArbiterLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/weight-of-truth.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/touch-of-scales.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/fracture-of-will.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-attunement.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/arbiters-ward.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-strike.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/seventh-truth-theory.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/rebalancing-touch.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/arbiters-insight.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/sunder-the-imbalanced.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/arbiters-clarity.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/equilibrium-anchor.c");

    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/weight-of-truth.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/restore-balance.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/touch-of-scales.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/restore-balance.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/fracture-of-will.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/reality-fracture.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-attunement.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/weight-of-truth.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/arbiters-ward.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-attunement.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-strike.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/fracture-of-will.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/seventh-truth-theory.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-attunement.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/rebalancing-touch.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/touch-of-scales.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/arbiters-insight.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/seventh-truth-theory.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/sunder-the-imbalanced.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-strike.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/arbiters-clarity.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/restore-balance.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/equilibrium-anchor.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/restore-balance.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/seventh-truth-focus.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/arbiter-theory.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-correction.c");

    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/seventh-truth-focus.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-theory.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/arbiter-theory.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/arbiters-insight.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-correction.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/arbiters-ward.c");
}

/////////////////////////////////////////////////////////////////////////////
private void HierophantLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/hierophants-clarity.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/cosmic-sight.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-reckoning.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/mending-of-the-scales.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-mantle.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/fracture-the-unworthy.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/greater-restoration.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/seventh-truth-mastery.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/judgment-wave.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/mass-restoration.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/seventh-truth-perfected.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/cosmic-verdict.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/absolute-restoration.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-mastery.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/balance-restored.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/cosmic-correction.c");

    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/hierophants-clarity.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/arbiters-clarity.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/cosmic-sight.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/hierophants-clarity.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-reckoning.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/sunder-the-imbalanced.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/mending-of-the-scales.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/rebalancing-touch.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-mantle.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/equilibrium-anchor.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/fracture-the-unworthy.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-reckoning.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/greater-restoration.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/mending-of-the-scales.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/seventh-truth-mastery.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-mastery.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/judgment-wave.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/fracture-the-unworthy.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/mass-restoration.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/greater-restoration.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/seventh-truth-perfected.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/seventh-truth-mastery.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/cosmic-verdict.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/judgment-wave.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/absolute-restoration.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/mass-restoration.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-mastery.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/arbiters-clarity.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/balance-restored.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/equilibrium-anchor.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/cosmic-correction.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-mastery.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/hierophant-theory.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/seventh-truth-wave.c");

    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/hierophant-theory.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/scales-mastery.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/seventh-truth-wave.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/fracture-the-unworthy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void HandLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/seventh-truth-ascendant.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/absolute-fracture.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/wave-of-the-seventh-truth.c");

    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/seventh-truth-ascendant.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/seventh-truth-perfected.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/absolute-fracture.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/cosmic-verdict.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/wave-of-the-seventh-truth.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/absolute-fracture.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/cosmic-pinnacle.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/hand-of-the-scales/cosmic-reckoning.c");

    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/cosmic-pinnacle.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/seventh-truth-ascendant.c");
    addChild(
        "/guilds/hand-of-bilanx/hand-of-the-scales/cosmic-reckoning.c",
        "/guilds/hand-of-bilanx/hand-of-the-scales/cosmic-verdict.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Hand of the Scales");
    Description("This research tree teaches Bilanx's seventh truth - that "
        "the truly balanced may act directly upon the fabric of reality to "
        "restore what has been distorted. Arbiters and hierophants learn "
        "to read, anchor, restore, and shatter the imbalances that lesser "
        "priests can only resist. At the highest rank the Hand becomes a "
        "living instrument of cosmic correction.");
    Source("Hand of Bilanx");
    addResearchElement("/guilds/hand-of-bilanx/hand-of-the-scales/root.c");
    TreeRoot("/guilds/hand-of-bilanx/hand-of-the-scales/root.c");

    SeekerLevel();
    ArbiterLevel();
    HierophantLevel();
    HandLevel();
}

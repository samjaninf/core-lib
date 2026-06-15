//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/mending-hand.c");
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/wounding-hand.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/mending-hand.c",
        "/guilds/hand-of-bilanx/healing-and-harm/root.c");
    addChild("/guilds/hand-of-bilanx/healing-and-harm/wounding-hand.c",
        "/guilds/hand-of-bilanx/healing-and-harm/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SecondLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/duality-of-touch.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/duality-of-touch.c",
        "/guilds/hand-of-bilanx/healing-and-harm/mending-hand.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/balanced-restoration.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/balanced-restoration.c",
        "/guilds/hand-of-bilanx/healing-and-harm/mending-hand.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FourthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/nourishing-touch.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/piercing-touch.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/nourishing-touch.c",
        "/guilds/hand-of-bilanx/healing-and-harm/mending-hand.c");
    addChild("/guilds/hand-of-bilanx/healing-and-harm/piercing-touch.c",
        "/guilds/hand-of-bilanx/healing-and-harm/wounding-hand.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/equal-measure.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/equal-measure.c",
        "/guilds/hand-of-bilanx/healing-and-harm/balanced-restoration.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/scales-attunement.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/scales-attunement.c",
        "/guilds/hand-of-bilanx/healing-and-harm/balanced-restoration.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/drain-vitality.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/drain-vitality.c",
        "/guilds/hand-of-bilanx/healing-and-harm/wounding-hand.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EighthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/healing-resonance.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/healing-resonance.c",
        "/guilds/hand-of-bilanx/healing-and-harm/nourishing-touch.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/equilibrium-siphon.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/equilibrium-siphon.c",
        "/guilds/hand-of-bilanx/healing-and-harm/drain-vitality.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TenthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/wound-theory.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/wound-theory.c",
        "/guilds/hand-of-bilanx/healing-and-harm/drain-vitality.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/shared-suffering.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/shared-suffering.c",
        "/guilds/hand-of-bilanx/healing-and-harm/piercing-touch.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/greater-mending.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/greater-wounding.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/greater-mending.c",
        "/guilds/hand-of-bilanx/healing-and-harm/equal-measure.c");
    addChild("/guilds/hand-of-bilanx/healing-and-harm/greater-wounding.c",
        "/guilds/hand-of-bilanx/healing-and-harm/equilibrium-siphon.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/mass-mending.c");
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/plague-of-wounds.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/mass-mending.c",
        "/guilds/hand-of-bilanx/healing-and-harm/greater-mending.c");
    addChild("/guilds/hand-of-bilanx/healing-and-harm/plague-of-wounds.c",
        "/guilds/hand-of-bilanx/healing-and-harm/greater-wounding.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/life-conduit.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/life-conduit.c",
        "/guilds/hand-of-bilanx/healing-and-harm/wound-theory.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/life-tithe.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/life-tithe.c",
        "/guilds/hand-of-bilanx/healing-and-harm/equilibrium-siphon.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/mend-the-broken.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/rend-the-whole.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/mend-the-broken.c",
        "/guilds/hand-of-bilanx/healing-and-harm/mass-mending.c");
    addChild("/guilds/hand-of-bilanx/healing-and-harm/rend-the-whole.c",
        "/guilds/hand-of-bilanx/healing-and-harm/plague-of-wounds.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/dual-mastery.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/dual-mastery.c",
        "/guilds/hand-of-bilanx/healing-and-harm/mend-the-broken.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/perfect-equipoise.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/perfect-equipoise.c",
        "/guilds/hand-of-bilanx/healing-and-harm/equilibrium-siphon.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/warding-scales.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/warding-scales.c",
        "/guilds/hand-of-bilanx/healing-and-harm/healing-resonance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/vital-surge.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/shattering-wound.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/vital-surge.c",
        "/guilds/hand-of-bilanx/healing-and-harm/mend-the-broken.c");
    addChild("/guilds/hand-of-bilanx/healing-and-harm/shattering-wound.c",
        "/guilds/hand-of-bilanx/healing-and-harm/rend-the-whole.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFirstLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/mastery-of-extremes.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/mastery-of-extremes.c",
        "/guilds/hand-of-bilanx/healing-and-harm/vital-surge.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/reaping-renewal.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/reaping-renewal.c",
        "/guilds/hand-of-bilanx/healing-and-harm/greater-mending.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/grand-siphon.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/grand-siphon.c",
        "/guilds/hand-of-bilanx/healing-and-harm/life-tithe.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/first-truth-perfected.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/first-truth-perfected.c",
        "/guilds/hand-of-bilanx/healing-and-harm/mastery-of-extremes.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/absolute-mending.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/absolute-wounding.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/absolute-mending.c",
        "/guilds/hand-of-bilanx/healing-and-harm/first-truth-perfected.c");
    addChild("/guilds/hand-of-bilanx/healing-and-harm/absolute-wounding.c",
        "/guilds/hand-of-bilanx/healing-and-harm/first-truth-perfected.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/scales-of-life.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/scales-of-life.c",
        "/guilds/hand-of-bilanx/healing-and-harm/absolute-mending.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/tidal-mending.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/tidal-wounding.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/tidal-mending.c",
        "/guilds/hand-of-bilanx/healing-and-harm/scales-of-life.c");
    addChild("/guilds/hand-of-bilanx/healing-and-harm/tidal-wounding.c",
        "/guilds/hand-of-bilanx/healing-and-harm/scales-of-life.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySeventhLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/living-scale.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/living-scale.c",
        "/guilds/hand-of-bilanx/healing-and-harm/scales-of-life.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFirstLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/scales-verdict-of-life.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/scales-verdict-of-death.c");

    addChild("/guilds/hand-of-bilanx/healing-and-harm/scales-verdict-of-life.c",
        "/guilds/hand-of-bilanx/healing-and-harm/living-scale.c");
    addChild("/guilds/hand-of-bilanx/healing-and-harm/scales-verdict-of-death.c",
        "/guilds/hand-of-bilanx/healing-and-harm/living-scale.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/unity-of-flesh-and-spirit.c");

    addChild(
        "/guilds/hand-of-bilanx/healing-and-harm/unity-of-flesh-and-spirit.c",
        "/guilds/hand-of-bilanx/healing-and-harm/living-scale.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventyLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/healing-and-harm/wave-of-the-first-truth.c");

    addChild(
        "/guilds/hand-of-bilanx/healing-and-harm/wave-of-the-first-truth.c",
        "/guilds/hand-of-bilanx/healing-and-harm/unity-of-flesh-and-spirit.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Healing and Harm");
    Description("This research tree teaches Bilanx's first truth - that the "
        "power to mend and the power to wound are two pans of a single "
        "scale. Its disciples learn to heal allies and harm foes from one "
        "undivided source, honoring both in perfect symmetry.");
    Source("Hand of Bilanx");
    addResearchElement("/guilds/hand-of-bilanx/healing-and-harm/root.c");
    TreeRoot("/guilds/hand-of-bilanx/healing-and-harm/root.c");

    FirstLevel();
    SecondLevel();
    ThirdLevel();
    FourthLevel();
    FifthLevel();
    SixthLevel();
    SeventhLevel();
    EighthLevel();
    NinthLevel();
    TenthLevel();
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
    ThirtySeventhLevel();
    FortyFirstLevel();
    FortyFifthLevel();
    FortyNinthLevel();
    FiftyThirdLevel();
    FiftySeventhLevel();
    SixtyFirstLevel();
    SixtyFifthLevel();
    SeventyLevel();
}

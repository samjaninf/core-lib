//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/form-of-balance.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/equilibrium-awakening.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/form-of-balance.c",
        "/guilds/hand-of-bilanx/equilibrium-form/root.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/equilibrium-awakening.c",
        "/guilds/hand-of-bilanx/equilibrium-form/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/equilibrium-form/balanced-form.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/balanced-form.c",
        "/guilds/hand-of-bilanx/equilibrium-form/equilibrium-awakening.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/form-strike.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/form-strike.c",
        "/guilds/hand-of-bilanx/equilibrium-form/form-of-balance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FourthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/equilibrium-theory.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/equilibrium-theory.c",
        "/guilds/hand-of-bilanx/equilibrium-form/form-of-balance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/body-of-balance.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/body-of-balance.c",
        "/guilds/hand-of-bilanx/equilibrium-form/form-of-balance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/equilibrium-focus.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/equilibrium-focus.c",
        "/guilds/hand-of-bilanx/equilibrium-form/balanced-form.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-theory.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-theory.c",
        "/guilds/hand-of-bilanx/equilibrium-form/form-of-balance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EighthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-mastery.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-mastery.c",
        "/guilds/hand-of-bilanx/equilibrium-form/form-of-balance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/harmonious-body.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/harmonious-body.c",
        "/guilds/hand-of-bilanx/equilibrium-form/form-of-balance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/equilibrium-strike.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/equilibrium-strike.c",
        "/guilds/hand-of-bilanx/equilibrium-form/harmonious-body.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/twofold-nature.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/twofold-nature.c",
        "/guilds/hand-of-bilanx/equilibrium-form/form-of-balance.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/veil-of-balance.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/veil-of-balance.c",
        "/guilds/hand-of-bilanx/equilibrium-form/twofold-nature.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwelfthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/equilibrium-form/dual-aspect.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/dual-aspect.c",
        "/guilds/hand-of-bilanx/equilibrium-form/twofold-nature.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/dual-body.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/dual-body.c",
        "/guilds/hand-of-bilanx/equilibrium-form/dual-aspect.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FourteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-strike.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-strike.c",
        "/guilds/hand-of-bilanx/equilibrium-form/dual-aspect.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-revelation.c");

    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-revelation.c",
        "/guilds/hand-of-bilanx/equilibrium-form/twofold-nature.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/balanced-spirit.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/balanced-spirit.c",
        "/guilds/hand-of-bilanx/equilibrium-form/twofold-nature.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/equilibrium-form/dual-burst.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/dual-burst.c",
        "/guilds/hand-of-bilanx/equilibrium-form/equilibrium-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentiethLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/integrated-form.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/dual-resilience.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/integrated-form.c",
        "/guilds/hand-of-bilanx/equilibrium-form/twofold-nature.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/dual-resilience.c",
        "/guilds/hand-of-bilanx/equilibrium-form/integrated-form.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/twin-nature.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/equilibrium-surge.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/twin-nature.c",
        "/guilds/hand-of-bilanx/equilibrium-form/twofold-nature.c");
    addChild("/guilds/hand-of-bilanx/equilibrium-form/equilibrium-surge.c",
        "/guilds/hand-of-bilanx/equilibrium-form/twofold-nature.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySecondLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/equilibrium-blast.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/equilibrium-blast.c",
        "/guilds/hand-of-bilanx/equilibrium-form/twin-nature.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/unified-strike.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/unified-strike.c",
        "/guilds/hand-of-bilanx/equilibrium-form/dual-burst.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/equilibrium-aura.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/equilibrium-aura.c",
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-revelation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyEighthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-mantle.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-mantle.c",
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-revelation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtiethLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-perfected.c");

    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-perfected.c",
        "/guilds/hand-of-bilanx/equilibrium-form/integrated-form.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySecondLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/form-of-reckoning.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/form-of-reckoning.c",
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-perfected.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/surge-of-the-scale.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/surge-of-the-scale.c",
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-perfected.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/avatar-of-the-scale.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/avatar-of-the-scale.c",
        "/guilds/hand-of-bilanx/equilibrium-form/twin-nature.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySixthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-pulse.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-pulse.c",
        "/guilds/hand-of-bilanx/equilibrium-form/avatar-of-the-scale.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyEighthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/perfect-strike.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/perfect-strike.c",
        "/guilds/hand-of-bilanx/equilibrium-form/surge-of-the-scale.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/avatar-mantle.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/avatar-mantle.c",
        "/guilds/hand-of-bilanx/equilibrium-form/avatar-of-the-scale.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortiethLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-pinnacle.c");
    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-pinnacle.c",
        "/guilds/hand-of-bilanx/equilibrium-form/avatar-of-the-scale.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/equilibrium-form/perfect-form.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/perfect-form.c",
        "/guilds/hand-of-bilanx/equilibrium-form/twofold-nature.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyEighthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-ascendant.c");

    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-ascendant.c",
        "/guilds/hand-of-bilanx/equilibrium-form/avatar-of-the-scale.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/unified-nova.c");

    addChild("/guilds/hand-of-bilanx/equilibrium-form/unified-nova.c",
        "/guilds/hand-of-bilanx/equilibrium-form/sixth-truth-ascendant.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/equilibrium-form/wave-of-the-sixth-truth.c");

    addChild(
        "/guilds/hand-of-bilanx/equilibrium-form/wave-of-the-sixth-truth.c",
        "/guilds/hand-of-bilanx/equilibrium-form/unified-nova.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Equilibrium Form");
    Description("This research tree teaches Bilanx's sixth truth - that "
        "the self may be remade in the image of perfect balance. The "
        "priest learns to transform their body and spirit into a living "
        "vessel of equilibrium, embodying equal measures of physical and "
        "magical power, immune to the damage that extremes inflict on "
        "those who commit to only one nature.");
    Source("Hand of Bilanx");
    addResearchElement("/guilds/hand-of-bilanx/equilibrium-form/root.c");
    TreeRoot("/guilds/hand-of-bilanx/equilibrium-form/root.c");

    FirstLevel();
    ThirdLevel();
    FourthLevel();
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
    FifteenthLevel();
    SixteenthLevel();
    SeventeenthLevel();
    TwentiethLevel();
    TwentyFirstLevel();
    TwentySecondLevel();
    TwentyThirdLevel();
    TwentyFifthLevel();
    TwentyEighthLevel();
    ThirtiethLevel();
    ThirtySecondLevel();
    ThirtyThirdLevel();
    ThirtyFifthLevel();
    ThirtySixthLevel();
    ThirtyEighthLevel();
    FortiethLevel();
    FortyFirstLevel();
    FortyEighthLevel();
    FiftyFifthLevel();
    SixtyFifthLevel();
}

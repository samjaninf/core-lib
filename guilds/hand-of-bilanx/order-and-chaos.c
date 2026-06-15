//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/mantle-of-order.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/touch-of-chaos.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/mantle-of-order.c",
        "/guilds/hand-of-bilanx/order-and-chaos/root.c");
    addChild("/guilds/hand-of-bilanx/order-and-chaos/touch-of-chaos.c",
        "/guilds/hand-of-bilanx/order-and-chaos/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SecondLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/order-chaos-awakening.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/order-chaos-awakening.c",
        "/guilds/hand-of-bilanx/order-and-chaos/mantle-of-order.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/ordered-mind.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/scatter-thoughts.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/ordered-mind.c",
        "/guilds/hand-of-bilanx/order-and-chaos/mantle-of-order.c");
    addChild("/guilds/hand-of-bilanx/order-and-chaos/scatter-thoughts.c",
        "/guilds/hand-of-bilanx/order-and-chaos/touch-of-chaos.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FourthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/discipline-of-law.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/discipline-of-law.c",
        "/guilds/hand-of-bilanx/order-and-chaos/mantle-of-order.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/law-and-entropy.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/law-and-entropy.c",
        "/guilds/hand-of-bilanx/order-and-chaos/discipline-of-law.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/ward-of-structure.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/ward-of-structure.c",
        "/guilds/hand-of-bilanx/order-and-chaos/discipline-of-law.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/order-and-chaos/unraveling.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/unraveling.c",
        "/guilds/hand-of-bilanx/order-and-chaos/scatter-thoughts.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EighthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/order-and-chaos/aura-of-law.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/aura-of-entropy.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/aura-of-law.c",
        "/guilds/hand-of-bilanx/order-and-chaos/ward-of-structure.c");
    addChild("/guilds/hand-of-bilanx/order-and-chaos/aura-of-entropy.c",
        "/guilds/hand-of-bilanx/order-and-chaos/unraveling.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/order-and-chaos/iron-edict.c");
    addResearchElement("/guilds/hand-of-bilanx/order-and-chaos/chaos-surge.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/iron-edict.c",
        "/guilds/hand-of-bilanx/order-and-chaos/mantle-of-order.c");
    addChild("/guilds/hand-of-bilanx/order-and-chaos/chaos-surge.c",
        "/guilds/hand-of-bilanx/order-and-chaos/touch-of-chaos.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/second-truth-focus.c");
    addChild(
        "/guilds/hand-of-bilanx/order-and-chaos/second-truth-focus.c",
        "/guilds/hand-of-bilanx/order-and-chaos/iron-edict.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/second-truth-mastery.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/second-truth-mastery.c",
        "/guilds/hand-of-bilanx/order-and-chaos/iron-edict.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwelfthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/law-strike.c");
    addChild(
        "/guilds/hand-of-bilanx/order-and-chaos/law-strike.c",
        "/guilds/hand-of-bilanx/order-and-chaos/iron-edict.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/edict-of-binding.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/entropy-bolt.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/edict-of-binding.c",
        "/guilds/hand-of-bilanx/order-and-chaos/iron-edict.c");
    addChild("/guilds/hand-of-bilanx/order-and-chaos/entropy-bolt.c",
        "/guilds/hand-of-bilanx/order-and-chaos/chaos-surge.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/balanced-dominion.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/balanced-dominion.c",
        "/guilds/hand-of-bilanx/order-and-chaos/chaos-surge.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/lawbringers-blessing.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/lawbringers-blessing.c",
        "/guilds/hand-of-bilanx/order-and-chaos/aura-of-law.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/entropy-wave.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/entropy-wave.c",
        "/guilds/hand-of-bilanx/order-and-chaos/aura-of-entropy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/balance-of-powers.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/balance-of-powers.c",
        "/guilds/hand-of-bilanx/order-and-chaos/balanced-dominion.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/law-and-chaos-theory.c");
    addChild(
        "/guilds/hand-of-bilanx/order-and-chaos/law-and-chaos-theory.c",
        "/guilds/hand-of-bilanx/order-and-chaos/balanced-dominion.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/absolute-edict.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/absolute-edict.c",
        "/guilds/hand-of-bilanx/order-and-chaos/lawbringers-blessing.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/order-and-chaos/unmaking.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/unmaking.c",
        "/guilds/hand-of-bilanx/order-and-chaos/entropy-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyEighthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/sovereign-equilibrium.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/sovereign-equilibrium.c",
        "/guilds/hand-of-bilanx/order-and-chaos/balanced-dominion.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/architect-of-order.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/lord-of-entropy.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/architect-of-order.c",
        "/guilds/hand-of-bilanx/order-and-chaos/absolute-edict.c");
    addChild("/guilds/hand-of-bilanx/order-and-chaos/lord-of-entropy.c",
        "/guilds/hand-of-bilanx/order-and-chaos/unmaking.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/law-incarnate.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/entropy-incarnate.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/law-incarnate.c",
        "/guilds/hand-of-bilanx/order-and-chaos/architect-of-order.c");
    addChild("/guilds/hand-of-bilanx/order-and-chaos/entropy-incarnate.c",
        "/guilds/hand-of-bilanx/order-and-chaos/lord-of-entropy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/tide-of-order.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/tide-of-order.c",
        "/guilds/hand-of-bilanx/order-and-chaos/iron-edict.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/second-truth-perfected.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/second-truth-perfected.c",
        "/guilds/hand-of-bilanx/order-and-chaos/law-incarnate.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/sovereign-order.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/sovereign-order.c",
        "/guilds/hand-of-bilanx/order-and-chaos/second-truth-perfected.c");

    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/second-truth-wave.c");
    addChild(
        "/guilds/hand-of-bilanx/order-and-chaos/second-truth-wave.c",
        "/guilds/hand-of-bilanx/order-and-chaos/second-truth-perfected.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/absolute-unmaking.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/absolute-unmaking.c",
        "/guilds/hand-of-bilanx/order-and-chaos/second-truth-perfected.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftiethLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/second-truth-pinnacle.c");
    addChild(
        "/guilds/hand-of-bilanx/order-and-chaos/second-truth-pinnacle.c",
        "/guilds/hand-of-bilanx/order-and-chaos/second-truth-perfected.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/twin-pillars.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/twin-pillars.c",
        "/guilds/hand-of-bilanx/order-and-chaos/sovereign-order.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySeventhLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/cosmic-decree.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/cosmic-decree.c",
        "/guilds/hand-of-bilanx/order-and-chaos/twin-pillars.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFirstLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/the-balance-point.c");

    addChild("/guilds/hand-of-bilanx/order-and-chaos/the-balance-point.c",
        "/guilds/hand-of-bilanx/order-and-chaos/twin-pillars.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventyLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/order-and-chaos/wave-of-the-second-truth.c");

    addChild(
        "/guilds/hand-of-bilanx/order-and-chaos/wave-of-the-second-truth.c",
        "/guilds/hand-of-bilanx/order-and-chaos/the-balance-point.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Order and Chaos");
    Description("This research tree teaches Bilanx's second truth - that "
        "law and freedom are twin pillars of the world. Disciples learn to "
        "strengthen allies with ordered discipline and to unmake foes with "
        "entropic chaos, wielding both without allegiance to either.");
    Source("Hand of Bilanx");
    addResearchElement("/guilds/hand-of-bilanx/order-and-chaos/root.c");
    TreeRoot("/guilds/hand-of-bilanx/order-and-chaos/root.c");

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
    TwelfthLevel();
    ThirteenthLevel();
    SixteenthLevel();
    SeventeenthLevel();
    NineteenthLevel();
    TwentyFirstLevel();
    TwentyThirdLevel();
    TwentyFifthLevel();
    TwentyEighthLevel();
    TwentyNinthLevel();
    ThirtyThirdLevel();
    ThirtySeventhLevel();
    FortyFirstLevel();
    FortyFifthLevel();
    FortyNinthLevel();
    FiftiethLevel();
    FiftyThirdLevel();
    FiftySeventhLevel();
    SixtyFirstLevel();
    SeventyLevel();
}

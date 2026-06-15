//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/radiant-bolt.c");
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/shadow-bolt.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/radiant-bolt.c",
        "/guilds/hand-of-bilanx/light-and-shadow/root.c");
    addChild("/guilds/hand-of-bilanx/light-and-shadow/shadow-bolt.c",
        "/guilds/hand-of-bilanx/light-and-shadow/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SecondLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/light-shadow-awakening.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/light-shadow-awakening.c",
        "/guilds/hand-of-bilanx/light-and-shadow/radiant-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/mote-of-light.c");
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/wisp-of-shadow.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/mote-of-light.c",
        "/guilds/hand-of-bilanx/light-and-shadow/radiant-bolt.c");
    addChild("/guilds/hand-of-bilanx/light-and-shadow/wisp-of-shadow.c",
        "/guilds/hand-of-bilanx/light-and-shadow/shadow-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FourthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/twilight-mastery.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/twilight-mastery.c",
        "/guilds/hand-of-bilanx/light-and-shadow/radiant-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/radiant-aura.c");
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/shadow-mantle.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/radiant-aura.c",
        "/guilds/hand-of-bilanx/light-and-shadow/mote-of-light.c");
    addChild("/guilds/hand-of-bilanx/light-and-shadow/shadow-mantle.c",
        "/guilds/hand-of-bilanx/light-and-shadow/wisp-of-shadow.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/searing-ray.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/searing-ray.c",
        "/guilds/hand-of-bilanx/light-and-shadow/twilight-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/darkening-strike.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/darkening-strike.c",
        "/guilds/hand-of-bilanx/light-and-shadow/twilight-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EighthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/radiant-burst.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/radiant-burst.c",
        "/guilds/hand-of-bilanx/light-and-shadow/searing-ray.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/shadow-pulse.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/shadow-pulse.c",
        "/guilds/hand-of-bilanx/light-and-shadow/darkening-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/dusk-attunement.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/dusk-attunement.c",
        "/guilds/hand-of-bilanx/light-and-shadow/twilight-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/shadow-shroud.c");
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/twilight-lance.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/shadow-shroud.c",
        "/guilds/hand-of-bilanx/light-and-shadow/shadow-bolt.c");
    addChild("/guilds/hand-of-bilanx/light-and-shadow/twilight-lance.c",
        "/guilds/hand-of-bilanx/light-and-shadow/twilight-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwelfthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/pillar-of-dawn.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/pillar-of-dawn.c",
        "/guilds/hand-of-bilanx/light-and-shadow/radiant-burst.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/pillar-of-dusk.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/pillar-of-dusk.c",
        "/guilds/hand-of-bilanx/light-and-shadow/shadow-pulse.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/third-truth-mastery.c");
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/luminous-ward.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/third-truth-mastery.c",
        "/guilds/hand-of-bilanx/light-and-shadow/pillar-of-dawn.c");
    addChild("/guilds/hand-of-bilanx/light-and-shadow/luminous-ward.c",
        "/guilds/hand-of-bilanx/light-and-shadow/radiant-aura.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixteenthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/umbral-ward.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/umbral-ward.c",
        "/guilds/hand-of-bilanx/light-and-shadow/shadow-mantle.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/penumbral-arts.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/penumbral-arts.c",
        "/guilds/hand-of-bilanx/light-and-shadow/twilight-lance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EighteenthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/twilight-nova.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/twilight-nova.c",
        "/guilds/hand-of-bilanx/light-and-shadow/third-truth-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentiethLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/light-shadow-theory.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/scorching-beam.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/light-shadow-theory.c",
        "/guilds/hand-of-bilanx/light-and-shadow/twilight-nova.c");
    addChild("/guilds/hand-of-bilanx/light-and-shadow/scorching-beam.c",
        "/guilds/hand-of-bilanx/light-and-shadow/light-shadow-theory.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySecondLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/devouring-darkness.c");
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/luminous-warding-theory.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/devouring-darkness.c",
        "/guilds/hand-of-bilanx/light-and-shadow/light-shadow-theory.c");
    addChild(
        "/guilds/hand-of-bilanx/light-and-shadow/luminous-warding-theory.c",
        "/guilds/hand-of-bilanx/light-and-shadow/luminous-ward.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/sundering-light.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/sundering-light.c",
        "/guilds/hand-of-bilanx/light-and-shadow/scorching-beam.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/consuming-void.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/consuming-void.c",
        "/guilds/hand-of-bilanx/light-and-shadow/devouring-darkness.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/eternal-dusk.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/eternal-dusk.c",
        "/guilds/hand-of-bilanx/light-and-shadow/penumbral-arts.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtiethLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/third-truth-revelation.c");

    addChild(
        "/guilds/hand-of-bilanx/light-and-shadow/third-truth-revelation.c",
        "/guilds/hand-of-bilanx/light-and-shadow/sundering-light.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySecondLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/nova-of-scales.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/nova-of-scales.c",
        "/guilds/hand-of-bilanx/light-and-shadow/third-truth-revelation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/aura-of-penumbra.c");
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/eclipse-blast.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/aura-of-penumbra.c",
        "/guilds/hand-of-bilanx/light-and-shadow/luminous-warding-theory.c");
    addChild("/guilds/hand-of-bilanx/light-and-shadow/eclipse-blast.c",
        "/guilds/hand-of-bilanx/light-and-shadow/twilight-lance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyEighthLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/radiant-ruin.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/radiant-ruin.c",
        "/guilds/hand-of-bilanx/light-and-shadow/third-truth-revelation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortiethLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/shadow-ruin.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/shadow-ruin.c",
        "/guilds/hand-of-bilanx/light-and-shadow/third-truth-revelation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/third-truth-perfected.c");

    addChild(
        "/guilds/hand-of-bilanx/light-and-shadow/third-truth-perfected.c",
        "/guilds/hand-of-bilanx/light-and-shadow/radiant-ruin.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftiethLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/absolute-radiance.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/absolute-radiance.c",
        "/guilds/hand-of-bilanx/light-and-shadow/third-truth-perfected.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySecondLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/absolute-shadow.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/absolute-shadow.c",
        "/guilds/hand-of-bilanx/light-and-shadow/third-truth-perfected.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/scales-of-twilight.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/scales-of-twilight.c",
        "/guilds/hand-of-bilanx/light-and-shadow/absolute-radiance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyEighthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/third-truth-ascendant.c");

    addChild(
        "/guilds/hand-of-bilanx/light-and-shadow/third-truth-ascendant.c",
        "/guilds/hand-of-bilanx/light-and-shadow/scales-of-twilight.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtiethLevel()
{
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/dawn-and-dusk.c");

    addChild("/guilds/hand-of-bilanx/light-and-shadow/dawn-and-dusk.c",
        "/guilds/hand-of-bilanx/light-and-shadow/third-truth-ascendant.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFifthLevel()
{
    addResearchElement(
        "/guilds/hand-of-bilanx/light-and-shadow/wave-of-the-third-truth.c");

    addChild(
        "/guilds/hand-of-bilanx/light-and-shadow/wave-of-the-third-truth.c",
        "/guilds/hand-of-bilanx/light-and-shadow/dawn-and-dusk.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Light and Shadow");
    Description("This research tree teaches Bilanx's third truth - that "
        "radiance and darkness are inseparable. The priest wields both "
        "without claiming either, drawing on the power of the eternal dusk "
        "that lies between all extremes of illumination.");
    Source("Hand of Bilanx");
    addResearchElement("/guilds/hand-of-bilanx/light-and-shadow/root.c");
    TreeRoot("/guilds/hand-of-bilanx/light-and-shadow/root.c");

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
    FifteenthLevel();
    SixteenthLevel();
    SeventeenthLevel();
    EighteenthLevel();
    TwentiethLevel();
    TwentySecondLevel();
    TwentyFifthLevel();
    TwentySeventhLevel();
    TwentyNinthLevel();
    ThirtiethLevel();
    ThirtySecondLevel();
    ThirtyFifthLevel();
    ThirtyEighthLevel();
    FortiethLevel();
    FortyFifthLevel();
    FiftiethLevel();
    FiftySecondLevel();
    FiftyFifthLevel();
    FiftyEighthLevel();
    SixtiethLevel();
    SixtyFifthLevel();
}

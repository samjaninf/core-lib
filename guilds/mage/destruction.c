//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/mage/destruction/destructive-bolt.c");
    addResearchElement("/guilds/mage/destruction/ruinous-lash.c");
    addResearchElement("/guilds/mage/destruction/entropic-pulse.c");

    addChild("/guilds/mage/destruction/destructive-bolt.c",
        "/guilds/mage/destruction/root.c");
    addChild("/guilds/mage/destruction/ruinous-lash.c",
        "/guilds/mage/destruction/root.c");
    addChild("/guilds/mage/destruction/entropic-pulse.c",
        "/guilds/mage/destruction/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/mage/destruction/destruction-theory.c");

    addChild("/guilds/mage/destruction/destruction-theory.c",
        "/guilds/mage/destruction/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/mage/destruction/chaos-burst.c");
    addResearchElement("/guilds/mage/destruction/entropy-theory.c");

    addChild("/guilds/mage/destruction/chaos-burst.c",
        "/guilds/mage/destruction/destructive-bolt.c");
    addChild("/guilds/mage/destruction/entropy-theory.c",
        "/guilds/mage/destruction/entropic-pulse.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/mage/destruction/amplified-destruction.c");
    addResearchElement("/guilds/mage/destruction/disintegrate.c");

    addChild("/guilds/mage/destruction/amplified-destruction.c",
        "/guilds/mage/destruction/destruction-theory.c");
    addChild("/guilds/mage/destruction/disintegrate.c",
        "/guilds/mage/destruction/ruinous-lash.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/mage/destruction/destroyers-reserve.c");

    addChild("/guilds/mage/destruction/destroyers-reserve.c",
        "/guilds/mage/destruction/destructive-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/mage/destruction/destroyers-boon.c");

    addChild("/guilds/mage/destruction/destroyers-boon.c",
        "/guilds/mage/destruction/chaos-burst.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/mage/destruction/destruction-mastery.c");

    addChild("/guilds/mage/destruction/destruction-mastery.c",
        "/guilds/mage/destruction/amplified-destruction.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/mage/destruction/enhanced-entropy.c");

    addChild("/guilds/mage/destruction/enhanced-entropy.c",
        "/guilds/mage/destruction/entropy-theory.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/mage/destruction/entropy-wave.c");

    addChild("/guilds/mage/destruction/entropy-wave.c",
        "/guilds/mage/destruction/chaos-burst.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement("/guilds/mage/destruction/pure-destruction.c");

    addChild("/guilds/mage/destruction/pure-destruction.c",
        "/guilds/mage/destruction/destruction-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement("/guilds/mage/destruction/destroyers-call.c");

    addChild("/guilds/mage/destruction/destroyers-call.c",
        "/guilds/mage/destruction/destroyers-reserve.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/mage/destruction/destroyers-finesse.c");

    addChild("/guilds/mage/destruction/destroyers-finesse.c",
        "/guilds/mage/destruction/destroyers-boon.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/mage/destruction/primal-destruction.c");

    addChild("/guilds/mage/destruction/primal-destruction.c",
        "/guilds/mage/destruction/pure-destruction.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/mage/destruction/ruinous-storm.c");
    addResearchElement("/guilds/mage/destruction/unrestrained-entropy.c");

    addChild("/guilds/mage/destruction/ruinous-storm.c",
        "/guilds/mage/destruction/disintegrate.c");
    addChild("/guilds/mage/destruction/unrestrained-entropy.c",
        "/guilds/mage/destruction/enhanced-entropy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement("/guilds/mage/destruction/total-devastation.c");

    addChild("/guilds/mage/destruction/total-devastation.c",
        "/guilds/mage/destruction/primal-destruction.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement("/guilds/mage/destruction/destroyers-might.c");

    addChild("/guilds/mage/destruction/destroyers-might.c",
        "/guilds/mage/destruction/destroyers-call.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/mage/destruction/obliteration.c");
    addResearchElement("/guilds/mage/destruction/destroyers-endurance.c");

    addChild("/guilds/mage/destruction/obliteration.c",
        "/guilds/mage/destruction/entropy-wave.c");
    addChild("/guilds/mage/destruction/destroyers-endurance.c",
        "/guilds/mage/destruction/destroyers-finesse.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement("/guilds/mage/destruction/destructive-mastery.c");

    addChild("/guilds/mage/destruction/destructive-mastery.c",
        "/guilds/mage/destruction/total-devastation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/mage/destruction/primal-entropy.c");

    addChild("/guilds/mage/destruction/primal-entropy.c",
        "/guilds/mage/destruction/unrestrained-entropy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySeventhLevel()
{
    addResearchElement("/guilds/mage/destruction/destroyers-fury.c");

    addChild("/guilds/mage/destruction/destroyers-fury.c",
        "/guilds/mage/destruction/destroyers-might.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement("/guilds/mage/destruction/destroyers-strength.c");

    addChild("/guilds/mage/destruction/destroyers-strength.c",
        "/guilds/mage/destruction/destroyers-endurance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement("/guilds/mage/destruction/entropy-supremacy.c");

    addChild("/guilds/mage/destruction/entropy-supremacy.c",
        "/guilds/mage/destruction/primal-entropy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySeventhLevel()
{
    addResearchElement("/guilds/mage/destruction/total-destruction.c");
    addResearchElement("/guilds/mage/destruction/absolute-destruction.c");

    addChild("/guilds/mage/destruction/total-destruction.c",
        "/guilds/mage/destruction/ruinous-storm.c");
    addChild("/guilds/mage/destruction/absolute-destruction.c",
        "/guilds/mage/destruction/destructive-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyNinthLevel()
{
    addResearchElement("/guilds/mage/destruction/destroyers-zenith.c");

    addChild("/guilds/mage/destruction/destroyers-zenith.c",
        "/guilds/mage/destruction/destroyers-fury.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFirstLevel()
{
    addResearchElement("/guilds/mage/destruction/destroyers-power.c");
    addResearchElement("/guilds/mage/destruction/destructive-focus.c");

    addChild("/guilds/mage/destruction/destroyers-power.c",
        "/guilds/mage/destruction/destroyers-strength.c");
    addChild("/guilds/mage/destruction/destructive-focus.c",
        "/guilds/mage/destruction/destroyers-power.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyThirdLevel()
{
    addResearchElement("/guilds/mage/destruction/supreme-destruction.c");
    addResearchElement("/guilds/mage/destruction/entropic-body.c");

    addChild("/guilds/mage/destruction/supreme-destruction.c",
        "/guilds/mage/destruction/destroyers-zenith.c");
    addChild("/guilds/mage/destruction/entropic-body.c",
        "/guilds/mage/destruction/destroyers-zenith.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFifthLevel()
{
    addResearchElement("/guilds/mage/destruction/destruction-supremacy.c");
    addResearchElement("/guilds/mage/destruction/destructive-reservoir.c");

    addChild("/guilds/mage/destruction/destruction-supremacy.c",
        "/guilds/mage/destruction/supreme-destruction.c");
    addChild("/guilds/mage/destruction/destructive-reservoir.c",
        "/guilds/mage/destruction/entropic-body.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtySeventhLevel()
{
    addResearchElement("/guilds/mage/destruction/entropic-supremacy-ii.c");

    addChild("/guilds/mage/destruction/entropic-supremacy-ii.c",
        "/guilds/mage/destruction/entropy-supremacy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyNinthLevel()
{
    addResearchElement("/guilds/mage/destruction/total-mastery.c");

    addChild("/guilds/mage/destruction/total-mastery.c",
        "/guilds/mage/destruction/destruction-supremacy.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Destruction");
    Description("The school of destruction is concerned with the "
        "complete annihilation of matter and energy, tearing apart "
        "the fabric of existence itself.");
    Source("mage");
    addResearchElement("/guilds/mage/destruction/root.c");
    TreeRoot("/guilds/mage/destruction/root.c");

    FirstLevel();
    ThirdLevel();
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
    ThirtyThirdLevel();
    ThirtyFifthLevel();
    ThirtySeventhLevel();
    ThirtyNinthLevel();
    FortyFirstLevel();
    FortySeventhLevel();
    FortyNinthLevel();
    FiftyThirdLevel();
    FiftySeventhLevel();
    FiftyNinthLevel();
    SixtyFirstLevel();
    SixtyThirdLevel();
    SixtyFifthLevel();
    SixtySeventhLevel();
    SixtyNinthLevel();
}


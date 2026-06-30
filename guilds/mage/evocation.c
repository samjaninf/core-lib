//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/mage/evocation/magical-bolt.c");
    addResearchElement("/guilds/mage/evocation/arcane-lash.c");
    addResearchElement("/guilds/mage/evocation/force-pulse.c");

    addChild("/guilds/mage/evocation/magical-bolt.c",
        "/guilds/mage/evocation/root.c");
    addChild("/guilds/mage/evocation/arcane-lash.c",
        "/guilds/mage/evocation/root.c");
    addChild("/guilds/mage/evocation/force-pulse.c",
        "/guilds/mage/evocation/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/mage/evocation/evocation-theory.c");

    addChild("/guilds/mage/evocation/evocation-theory.c",
        "/guilds/mage/evocation/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/mage/evocation/arcane-burst.c");
    addResearchElement("/guilds/mage/evocation/raw-force.c");

    addChild("/guilds/mage/evocation/arcane-burst.c",
        "/guilds/mage/evocation/magical-bolt.c");
    addChild("/guilds/mage/evocation/raw-force.c",
        "/guilds/mage/evocation/force-pulse.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/mage/evocation/amplified-evocation.c");
    addResearchElement("/guilds/mage/evocation/force-wave.c");

    addChild("/guilds/mage/evocation/amplified-evocation.c",
        "/guilds/mage/evocation/evocation-theory.c");
    addChild("/guilds/mage/evocation/force-wave.c",
        "/guilds/mage/evocation/arcane-lash.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/mage/evocation/evokers-reserve.c");

    addChild("/guilds/mage/evocation/evokers-reserve.c",
        "/guilds/mage/evocation/magical-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/mage/evocation/arcane-lance.c");
    addResearchElement("/guilds/mage/evocation/evokers-boon.c");

    addChild("/guilds/mage/evocation/arcane-lance.c",
        "/guilds/mage/evocation/force-pulse.c");
    addChild("/guilds/mage/evocation/evokers-boon.c",
        "/guilds/mage/evocation/arcane-burst.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/mage/evocation/evocation-mastery.c");

    addChild("/guilds/mage/evocation/evocation-mastery.c",
        "/guilds/mage/evocation/amplified-evocation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/mage/evocation/enhanced-force.c");

    addChild("/guilds/mage/evocation/enhanced-force.c",
        "/guilds/mage/evocation/raw-force.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/mage/evocation/force-storm.c");

    addChild("/guilds/mage/evocation/force-storm.c",
        "/guilds/mage/evocation/arcane-burst.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement("/guilds/mage/evocation/pure-evocation.c");

    addChild("/guilds/mage/evocation/pure-evocation.c",
        "/guilds/mage/evocation/evocation-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement("/guilds/mage/evocation/evokers-call.c");

    addChild("/guilds/mage/evocation/evokers-call.c",
        "/guilds/mage/evocation/evokers-reserve.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/mage/evocation/evokers-finesse.c");

    addChild("/guilds/mage/evocation/evokers-finesse.c",
        "/guilds/mage/evocation/evokers-boon.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/mage/evocation/primal-evocation.c");

    addChild("/guilds/mage/evocation/primal-evocation.c",
        "/guilds/mage/evocation/pure-evocation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/mage/evocation/arcane-barrage.c");
    addResearchElement("/guilds/mage/evocation/unrestrained-force.c");

    addChild("/guilds/mage/evocation/arcane-barrage.c",
        "/guilds/mage/evocation/arcane-lance.c");
    addChild("/guilds/mage/evocation/unrestrained-force.c",
        "/guilds/mage/evocation/enhanced-force.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement("/guilds/mage/evocation/total-evocation.c");

    addChild("/guilds/mage/evocation/total-evocation.c",
        "/guilds/mage/evocation/primal-evocation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement("/guilds/mage/evocation/evokers-might.c");

    addChild("/guilds/mage/evocation/evokers-might.c",
        "/guilds/mage/evocation/evokers-call.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/mage/evocation/force-cascade.c");
    addResearchElement("/guilds/mage/evocation/evokers-endurance.c");

    addChild("/guilds/mage/evocation/force-cascade.c",
        "/guilds/mage/evocation/force-storm.c");
    addChild("/guilds/mage/evocation/evokers-endurance.c",
        "/guilds/mage/evocation/evokers-finesse.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement("/guilds/mage/evocation/evocative-mastery.c");

    addChild("/guilds/mage/evocation/evocative-mastery.c",
        "/guilds/mage/evocation/total-evocation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/mage/evocation/primal-force.c");

    addChild("/guilds/mage/evocation/primal-force.c",
        "/guilds/mage/evocation/unrestrained-force.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFifthLevel()
{
    addResearchElement("/guilds/mage/evocation/force-theory.c");

    addChild("/guilds/mage/evocation/force-theory.c",
        "/guilds/mage/evocation/evocative-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySeventhLevel()
{
    addResearchElement("/guilds/mage/evocation/evokers-fury.c");

    addChild("/guilds/mage/evocation/evokers-fury.c",
        "/guilds/mage/evocation/evokers-might.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement("/guilds/mage/evocation/evokers-strength.c");

    addChild("/guilds/mage/evocation/evokers-strength.c",
        "/guilds/mage/evocation/evokers-endurance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFirstLevel()
{
    addResearchElement("/guilds/mage/evocation/force-mastery.c");

    addChild("/guilds/mage/evocation/force-mastery.c",
        "/guilds/mage/evocation/force-theory.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement("/guilds/mage/evocation/force-supremacy.c");

    addChild("/guilds/mage/evocation/force-supremacy.c",
        "/guilds/mage/evocation/primal-force.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySeventhLevel()
{
    addResearchElement("/guilds/mage/evocation/arcane-annihilation.c");
    addResearchElement("/guilds/mage/evocation/absolute-evocation.c");

    addChild("/guilds/mage/evocation/arcane-annihilation.c",
        "/guilds/mage/evocation/arcane-barrage.c");
    addChild("/guilds/mage/evocation/absolute-evocation.c",
        "/guilds/mage/evocation/force-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyNinthLevel()
{
    addResearchElement("/guilds/mage/evocation/evokers-zenith.c");

    addChild("/guilds/mage/evocation/evokers-zenith.c",
        "/guilds/mage/evocation/evokers-fury.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFirstLevel()
{
    addResearchElement("/guilds/mage/evocation/evokers-power.c");
    addResearchElement("/guilds/mage/evocation/evocative-focus.c");

    addChild("/guilds/mage/evocation/evokers-power.c",
        "/guilds/mage/evocation/evokers-strength.c");
    addChild("/guilds/mage/evocation/evocative-focus.c",
        "/guilds/mage/evocation/evokers-power.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyThirdLevel()
{
    addResearchElement("/guilds/mage/evocation/supreme-evocation.c");
    addResearchElement("/guilds/mage/evocation/evocative-body.c");

    addChild("/guilds/mage/evocation/supreme-evocation.c",
        "/guilds/mage/evocation/evokers-zenith.c");
    addChild("/guilds/mage/evocation/evocative-body.c",
        "/guilds/mage/evocation/evokers-zenith.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFifthLevel()
{
    addResearchElement("/guilds/mage/evocation/evocation-supremacy.c");

    addChild("/guilds/mage/evocation/evocation-supremacy.c",
        "/guilds/mage/evocation/supreme-evocation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtySeventhLevel()
{
    addResearchElement("/guilds/mage/evocation/force-supremacy-ii.c");

    addChild("/guilds/mage/evocation/force-supremacy-ii.c",
        "/guilds/mage/evocation/force-supremacy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyNinthLevel()
{
    addResearchElement("/guilds/mage/evocation/total-evocation-mastery.c");

    addChild("/guilds/mage/evocation/total-evocation-mastery.c",
        "/guilds/mage/evocation/evocation-supremacy.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Evocation");
    Description("The school of evocation is concerned with creating "
        "and shaping raw magical energy, conjuring force from "
        "the aether and hurling it at enemies.");
    Source("mage");
    addResearchElement("/guilds/mage/evocation/root.c");
    TreeRoot("/guilds/mage/evocation/root.c");

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
    FortyFifthLevel();
    FortySeventhLevel();
    FortyNinthLevel();
    FiftyFirstLevel();
    FiftyThirdLevel();
    FiftySeventhLevel();
    FiftyNinthLevel();
    SixtyFirstLevel();
    SixtyThirdLevel();
    SixtyFifthLevel();
    SixtySeventhLevel();
    SixtyNinthLevel();
}

//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/mage/divination/arcane-sight.c");
    addResearchElement("/guilds/mage/divination/reveal-weakness.c");
    addResearchElement("/guilds/mage/divination/foresight-bolt.c");

    addChild("/guilds/mage/divination/arcane-sight.c",
        "/guilds/mage/divination/root.c");
    addChild("/guilds/mage/divination/reveal-weakness.c",
        "/guilds/mage/divination/root.c");
    addChild("/guilds/mage/divination/foresight-bolt.c",
        "/guilds/mage/divination/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/mage/divination/divination-theory.c");

    addChild("/guilds/mage/divination/divination-theory.c",
        "/guilds/mage/divination/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/mage/divination/expose-vulnerability.c");
    addResearchElement("/guilds/mage/divination/oracle-bolt.c");
    addResearchElement("/guilds/mage/divination/oracle-theory.c");

    addChild("/guilds/mage/divination/expose-vulnerability.c",
        "/guilds/mage/divination/arcane-sight.c");
    addChild("/guilds/mage/divination/oracle-bolt.c",
        "/guilds/mage/divination/foresight-bolt.c");
    addChild("/guilds/mage/divination/oracle-theory.c",
        "/guilds/mage/divination/oracle-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/mage/divination/amplified-divination.c");
    addResearchElement("/guilds/mage/divination/prescient-strike.c");

    addChild("/guilds/mage/divination/amplified-divination.c",
        "/guilds/mage/divination/divination-theory.c");
    addChild("/guilds/mage/divination/prescient-strike.c",
        "/guilds/mage/divination/reveal-weakness.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/mage/divination/seers-reserve.c");

    addChild("/guilds/mage/divination/seers-reserve.c",
        "/guilds/mage/divination/arcane-sight.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/mage/divination/seers-boon.c");

    addChild("/guilds/mage/divination/seers-boon.c",
        "/guilds/mage/divination/expose-vulnerability.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/mage/divination/divination-mastery.c");

    addChild("/guilds/mage/divination/divination-mastery.c",
        "/guilds/mage/divination/amplified-divination.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/mage/divination/oracle-mastery.c");

    addChild("/guilds/mage/divination/oracle-mastery.c",
        "/guilds/mage/divination/oracle-theory.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/mage/divination/true-sight-blast.c");
    addResearchElement("/guilds/mage/divination/destiny-strike.c");

    addChild("/guilds/mage/divination/true-sight-blast.c",
        "/guilds/mage/divination/expose-vulnerability.c");
    addChild("/guilds/mage/divination/destiny-strike.c",
        "/guilds/mage/divination/prescient-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement("/guilds/mage/divination/pure-divination.c");

    addChild("/guilds/mage/divination/pure-divination.c",
        "/guilds/mage/divination/divination-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement("/guilds/mage/divination/seers-call.c");

    addChild("/guilds/mage/divination/seers-call.c",
        "/guilds/mage/divination/seers-reserve.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/mage/divination/seers-finesse.c");

    addChild("/guilds/mage/divination/seers-finesse.c",
        "/guilds/mage/divination/seers-boon.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/mage/divination/primal-divination.c");

    addChild("/guilds/mage/divination/primal-divination.c",
        "/guilds/mage/divination/pure-divination.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/mage/divination/pure-oracle.c");

    addChild("/guilds/mage/divination/pure-oracle.c",
        "/guilds/mage/divination/oracle-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement("/guilds/mage/divination/total-divination.c");

    addChild("/guilds/mage/divination/total-divination.c",
        "/guilds/mage/divination/primal-divination.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement("/guilds/mage/divination/seers-might.c");

    addChild("/guilds/mage/divination/seers-might.c",
        "/guilds/mage/divination/seers-call.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/mage/divination/unveiled-doom.c");
    addResearchElement("/guilds/mage/divination/seers-endurance.c");

    addChild("/guilds/mage/divination/unveiled-doom.c",
        "/guilds/mage/divination/true-sight-blast.c");
    addChild("/guilds/mage/divination/seers-endurance.c",
        "/guilds/mage/divination/seers-finesse.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement("/guilds/mage/divination/divinatory-mastery.c");

    addChild("/guilds/mage/divination/divinatory-mastery.c",
        "/guilds/mage/divination/total-divination.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/mage/divination/primal-oracle.c");

    addChild("/guilds/mage/divination/primal-oracle.c",
        "/guilds/mage/divination/pure-oracle.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySeventhLevel()
{
    addResearchElement("/guilds/mage/divination/seers-fury.c");

    addChild("/guilds/mage/divination/seers-fury.c",
        "/guilds/mage/divination/seers-might.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement("/guilds/mage/divination/seers-strength.c");

    addChild("/guilds/mage/divination/seers-strength.c",
        "/guilds/mage/divination/seers-endurance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement("/guilds/mage/divination/oracle-supremacy.c");

    addChild("/guilds/mage/divination/oracle-supremacy.c",
        "/guilds/mage/divination/primal-oracle.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySeventhLevel()
{
    addResearchElement("/guilds/mage/divination/total-revelation.c");
    addResearchElement("/guilds/mage/divination/absolute-divination.c");

    addChild("/guilds/mage/divination/total-revelation.c",
        "/guilds/mage/divination/destiny-strike.c");
    addChild("/guilds/mage/divination/absolute-divination.c",
        "/guilds/mage/divination/divinatory-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyNinthLevel()
{
    addResearchElement("/guilds/mage/divination/seers-zenith.c");

    addChild("/guilds/mage/divination/seers-zenith.c",
        "/guilds/mage/divination/seers-fury.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFirstLevel()
{
    addResearchElement("/guilds/mage/divination/seers-power.c");

    addChild("/guilds/mage/divination/seers-power.c",
        "/guilds/mage/divination/seers-strength.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Divination");
    Description("The school of divination is concerned with opening "
        "perception to the hidden currents of the world and granting "
        "foresight into the flow of events.");
    Source("mage");
    addResearchElement("/guilds/mage/divination/root.c");
    TreeRoot("/guilds/mage/divination/root.c");

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
}



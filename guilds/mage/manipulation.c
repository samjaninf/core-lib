//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/mage/manipulation/arcane-drain.c");
    addResearchElement("/guilds/mage/manipulation/force-redirection.c");
    addResearchElement("/guilds/mage/manipulation/vital-siphon.c");

    addChild("/guilds/mage/manipulation/arcane-drain.c",
        "/guilds/mage/manipulation/root.c");
    addChild("/guilds/mage/manipulation/force-redirection.c",
        "/guilds/mage/manipulation/root.c");
    addChild("/guilds/mage/manipulation/vital-siphon.c",
        "/guilds/mage/manipulation/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/mage/manipulation/manipulation-theory.c");

    addChild("/guilds/mage/manipulation/manipulation-theory.c",
        "/guilds/mage/manipulation/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/mage/manipulation/energy-leech.c");
    addResearchElement("/guilds/mage/manipulation/arcane-inversion.c");
    addResearchElement("/guilds/mage/manipulation/siphon-theory.c");

    addChild("/guilds/mage/manipulation/energy-leech.c",
        "/guilds/mage/manipulation/arcane-drain.c");
    addChild("/guilds/mage/manipulation/arcane-inversion.c",
        "/guilds/mage/manipulation/force-redirection.c");
    addChild("/guilds/mage/manipulation/siphon-theory.c",
        "/guilds/mage/manipulation/vital-siphon.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/mage/manipulation/amplified-manipulation.c");
    addResearchElement("/guilds/mage/manipulation/soul-drain.c");

    addChild("/guilds/mage/manipulation/amplified-manipulation.c",
        "/guilds/mage/manipulation/manipulation-theory.c");
    addChild("/guilds/mage/manipulation/soul-drain.c",
        "/guilds/mage/manipulation/vital-siphon.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/mage/manipulation/manipulators-reserve.c");

    addChild("/guilds/mage/manipulation/manipulators-reserve.c",
        "/guilds/mage/manipulation/arcane-drain.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/mage/manipulation/manipulators-boon.c");

    addChild("/guilds/mage/manipulation/manipulators-boon.c",
        "/guilds/mage/manipulation/energy-leech.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/mage/manipulation/manipulation-mastery.c");

    addChild("/guilds/mage/manipulation/manipulation-mastery.c",
        "/guilds/mage/manipulation/amplified-manipulation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/mage/manipulation/siphon-mastery.c");

    addChild("/guilds/mage/manipulation/siphon-mastery.c",
        "/guilds/mage/manipulation/siphon-theory.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/mage/manipulation/life-tap.c");
    addResearchElement("/guilds/mage/manipulation/force-collapse.c");

    addChild("/guilds/mage/manipulation/life-tap.c",
        "/guilds/mage/manipulation/soul-drain.c");
    addChild("/guilds/mage/manipulation/force-collapse.c",
        "/guilds/mage/manipulation/arcane-inversion.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement("/guilds/mage/manipulation/pure-manipulation.c");

    addChild("/guilds/mage/manipulation/pure-manipulation.c",
        "/guilds/mage/manipulation/manipulation-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement("/guilds/mage/manipulation/manipulators-call.c");

    addChild("/guilds/mage/manipulation/manipulators-call.c",
        "/guilds/mage/manipulation/manipulators-reserve.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/mage/manipulation/manipulators-finesse.c");

    addChild("/guilds/mage/manipulation/manipulators-finesse.c",
        "/guilds/mage/manipulation/manipulators-boon.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/mage/manipulation/primal-manipulation.c");

    addChild("/guilds/mage/manipulation/primal-manipulation.c",
        "/guilds/mage/manipulation/pure-manipulation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/mage/manipulation/pure-siphon.c");

    addChild("/guilds/mage/manipulation/pure-siphon.c",
        "/guilds/mage/manipulation/siphon-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement("/guilds/mage/manipulation/total-manipulation.c");

    addChild("/guilds/mage/manipulation/total-manipulation.c",
        "/guilds/mage/manipulation/primal-manipulation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement("/guilds/mage/manipulation/manipulators-might.c");

    addChild("/guilds/mage/manipulation/manipulators-might.c",
        "/guilds/mage/manipulation/manipulators-call.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/mage/manipulation/essence-rend.c");
    addResearchElement("/guilds/mage/manipulation/manipulators-endurance.c");

    addChild("/guilds/mage/manipulation/essence-rend.c",
        "/guilds/mage/manipulation/life-tap.c");
    addChild("/guilds/mage/manipulation/manipulators-endurance.c",
        "/guilds/mage/manipulation/manipulators-finesse.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement("/guilds/mage/manipulation/manipulative-mastery.c");

    addChild("/guilds/mage/manipulation/manipulative-mastery.c",
        "/guilds/mage/manipulation/total-manipulation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/mage/manipulation/primal-siphon.c");

    addChild("/guilds/mage/manipulation/primal-siphon.c",
        "/guilds/mage/manipulation/pure-siphon.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySeventhLevel()
{
    addResearchElement("/guilds/mage/manipulation/manipulators-fury.c");

    addChild("/guilds/mage/manipulation/manipulators-fury.c",
        "/guilds/mage/manipulation/manipulators-might.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement("/guilds/mage/manipulation/manipulators-strength.c");

    addChild("/guilds/mage/manipulation/manipulators-strength.c",
        "/guilds/mage/manipulation/manipulators-endurance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement("/guilds/mage/manipulation/siphon-supremacy.c");

    addChild("/guilds/mage/manipulation/siphon-supremacy.c",
        "/guilds/mage/manipulation/primal-siphon.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySeventhLevel()
{
    addResearchElement("/guilds/mage/manipulation/total-dominion.c");
    addResearchElement("/guilds/mage/manipulation/absolute-manipulation.c");

    addChild("/guilds/mage/manipulation/total-dominion.c",
        "/guilds/mage/manipulation/force-collapse.c");
    addChild("/guilds/mage/manipulation/absolute-manipulation.c",
        "/guilds/mage/manipulation/manipulative-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyNinthLevel()
{
    addResearchElement("/guilds/mage/manipulation/manipulators-zenith.c");

    addChild("/guilds/mage/manipulation/manipulators-zenith.c",
        "/guilds/mage/manipulation/manipulators-fury.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFirstLevel()
{
    addResearchElement("/guilds/mage/manipulation/manipulators-power.c");
    addResearchElement("/guilds/mage/manipulation/manipulative-focus.c");

    addChild("/guilds/mage/manipulation/manipulators-power.c",
        "/guilds/mage/manipulation/manipulators-strength.c");
    addChild("/guilds/mage/manipulation/manipulative-focus.c",
        "/guilds/mage/manipulation/manipulators-power.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyThirdLevel()
{
    addResearchElement("/guilds/mage/manipulation/siphon-focus.c");
    addResearchElement("/guilds/mage/manipulation/supreme-manipulation.c");

    addChild("/guilds/mage/manipulation/siphon-focus.c",
        "/guilds/mage/manipulation/manipulators-zenith.c");
    addChild("/guilds/mage/manipulation/supreme-manipulation.c",
        "/guilds/mage/manipulation/manipulators-zenith.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFifthLevel()
{
    addResearchElement("/guilds/mage/manipulation/siphon-endurance.c");
    addResearchElement("/guilds/mage/manipulation/manipulation-supremacy.c");

    addChild("/guilds/mage/manipulation/siphon-endurance.c",
        "/guilds/mage/manipulation/siphon-focus.c");
    addChild("/guilds/mage/manipulation/manipulation-supremacy.c",
        "/guilds/mage/manipulation/supreme-manipulation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtySeventhLevel()
{
    addResearchElement("/guilds/mage/manipulation/manipulative-endurance.c");
    addResearchElement("/guilds/mage/manipulation/manipulative-body.c");

    addChild("/guilds/mage/manipulation/manipulative-endurance.c",
        "/guilds/mage/manipulation/siphon-endurance.c");
    addChild("/guilds/mage/manipulation/manipulative-body.c",
        "/guilds/mage/manipulation/siphon-endurance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyNinthLevel()
{
    addResearchElement("/guilds/mage/manipulation/manipulation-zenith.c");

    addChild("/guilds/mage/manipulation/manipulation-zenith.c",
        "/guilds/mage/manipulation/manipulation-supremacy.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Manipulation");
    Description("The school of manipulation is concerned with redirecting, "
        "absorbing, and stealing the arcane forces that flow through "
        "all living things.");
    Source("mage");
    addResearchElement("/guilds/mage/manipulation/root.c");
    TreeRoot("/guilds/mage/manipulation/root.c");

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



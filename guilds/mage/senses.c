//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/mage/senses/keen-strike.c");
    addResearchElement("/guilds/mage/senses/dulled-senses.c");
    addResearchElement("/guilds/mage/senses/perceptive-bolt.c");

    addChild("/guilds/mage/senses/keen-strike.c",
        "/guilds/mage/senses/root.c");
    addChild("/guilds/mage/senses/dulled-senses.c",
        "/guilds/mage/senses/root.c");
    addChild("/guilds/mage/senses/perceptive-bolt.c",
        "/guilds/mage/senses/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/mage/senses/senses-theory.c");

    addChild("/guilds/mage/senses/senses-theory.c",
        "/guilds/mage/senses/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/mage/senses/blinding-surge.c");
    addResearchElement("/guilds/mage/senses/heightened-bolt.c");
    addResearchElement("/guilds/mage/senses/perception-theory.c");

    addChild("/guilds/mage/senses/blinding-surge.c",
        "/guilds/mage/senses/keen-strike.c");
    addChild("/guilds/mage/senses/heightened-bolt.c",
        "/guilds/mage/senses/perceptive-bolt.c");
    addChild("/guilds/mage/senses/perception-theory.c",
        "/guilds/mage/senses/heightened-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/mage/senses/amplified-senses.c");
    addResearchElement("/guilds/mage/senses/sensory-disruption.c");

    addChild("/guilds/mage/senses/amplified-senses.c",
        "/guilds/mage/senses/senses-theory.c");
    addChild("/guilds/mage/senses/sensory-disruption.c",
        "/guilds/mage/senses/dulled-senses.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/mage/senses/sensitives-reserve.c");

    addChild("/guilds/mage/senses/sensitives-reserve.c",
        "/guilds/mage/senses/keen-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/mage/senses/sensitives-boon.c");

    addChild("/guilds/mage/senses/sensitives-boon.c",
        "/guilds/mage/senses/blinding-surge.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/mage/senses/senses-mastery.c");

    addChild("/guilds/mage/senses/senses-mastery.c",
        "/guilds/mage/senses/amplified-senses.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/mage/senses/perception-mastery.c");

    addChild("/guilds/mage/senses/perception-mastery.c",
        "/guilds/mage/senses/perception-theory.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/mage/senses/overload-senses.c");
    addResearchElement("/guilds/mage/senses/perception-rend.c");

    addChild("/guilds/mage/senses/overload-senses.c",
        "/guilds/mage/senses/blinding-surge.c");
    addChild("/guilds/mage/senses/perception-rend.c",
        "/guilds/mage/senses/sensory-disruption.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement("/guilds/mage/senses/pure-senses.c");

    addChild("/guilds/mage/senses/pure-senses.c",
        "/guilds/mage/senses/senses-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement("/guilds/mage/senses/sensitives-call.c");

    addChild("/guilds/mage/senses/sensitives-call.c",
        "/guilds/mage/senses/sensitives-reserve.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/mage/senses/sensitives-finesse.c");

    addChild("/guilds/mage/senses/sensitives-finesse.c",
        "/guilds/mage/senses/sensitives-boon.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/mage/senses/primal-senses.c");

    addChild("/guilds/mage/senses/primal-senses.c",
        "/guilds/mage/senses/pure-senses.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/mage/senses/pure-perception.c");

    addChild("/guilds/mage/senses/pure-perception.c",
        "/guilds/mage/senses/perception-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement("/guilds/mage/senses/total-senses.c");

    addChild("/guilds/mage/senses/total-senses.c",
        "/guilds/mage/senses/primal-senses.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement("/guilds/mage/senses/sensitives-might.c");

    addChild("/guilds/mage/senses/sensitives-might.c",
        "/guilds/mage/senses/sensitives-call.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/mage/senses/sensory-annihilation.c");
    addResearchElement("/guilds/mage/senses/sensitives-endurance.c");

    addChild("/guilds/mage/senses/sensory-annihilation.c",
        "/guilds/mage/senses/overload-senses.c");
    addChild("/guilds/mage/senses/sensitives-endurance.c",
        "/guilds/mage/senses/sensitives-finesse.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement("/guilds/mage/senses/sensory-mastery.c");

    addChild("/guilds/mage/senses/sensory-mastery.c",
        "/guilds/mage/senses/total-senses.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/mage/senses/primal-perception.c");

    addChild("/guilds/mage/senses/primal-perception.c",
        "/guilds/mage/senses/pure-perception.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySeventhLevel()
{
    addResearchElement("/guilds/mage/senses/sensitives-fury.c");

    addChild("/guilds/mage/senses/sensitives-fury.c",
        "/guilds/mage/senses/sensitives-might.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement("/guilds/mage/senses/sensitives-strength.c");

    addChild("/guilds/mage/senses/sensitives-strength.c",
        "/guilds/mage/senses/sensitives-endurance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement("/guilds/mage/senses/perception-supremacy.c");

    addChild("/guilds/mage/senses/perception-supremacy.c",
        "/guilds/mage/senses/primal-perception.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySeventhLevel()
{
    addResearchElement("/guilds/mage/senses/total-sensory-collapse.c");
    addResearchElement("/guilds/mage/senses/absolute-senses.c");

    addChild("/guilds/mage/senses/total-sensory-collapse.c",
        "/guilds/mage/senses/perception-rend.c");
    addChild("/guilds/mage/senses/absolute-senses.c",
        "/guilds/mage/senses/sensory-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyNinthLevel()
{
    addResearchElement("/guilds/mage/senses/sensitives-zenith.c");

    addChild("/guilds/mage/senses/sensitives-zenith.c",
        "/guilds/mage/senses/sensitives-fury.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFirstLevel()
{
    addResearchElement("/guilds/mage/senses/sensitives-power.c");
    addResearchElement("/guilds/mage/senses/sensory-focus.c");

    addChild("/guilds/mage/senses/sensitives-power.c",
        "/guilds/mage/senses/sensitives-strength.c");
    addChild("/guilds/mage/senses/sensory-focus.c",
        "/guilds/mage/senses/sensitives-power.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyThirdLevel()
{
    addResearchElement("/guilds/mage/senses/supreme-senses.c");
    addResearchElement("/guilds/mage/senses/perceptive-body.c");

    addChild("/guilds/mage/senses/supreme-senses.c",
        "/guilds/mage/senses/sensitives-zenith.c");
    addChild("/guilds/mage/senses/perceptive-body.c",
        "/guilds/mage/senses/sensitives-zenith.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFifthLevel()
{
    addResearchElement("/guilds/mage/senses/senses-supremacy.c");

    addChild("/guilds/mage/senses/senses-supremacy.c",
        "/guilds/mage/senses/supreme-senses.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtySeventhLevel()
{
    addResearchElement("/guilds/mage/senses/perception-supremacy-ii.c");

    addChild("/guilds/mage/senses/perception-supremacy-ii.c",
        "/guilds/mage/senses/perception-supremacy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyNinthLevel()
{
    addResearchElement("/guilds/mage/senses/total-senses-mastery.c");

    addChild("/guilds/mage/senses/total-senses-mastery.c",
        "/guilds/mage/senses/senses-supremacy.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Senses");
    Description("The school of senses is concerned with heightening or "
        "dulling perception - sharpening the mage's own awareness or "
        "stripping awareness from their enemies.");
    Source("mage");
    addResearchElement("/guilds/mage/senses/root.c");
    TreeRoot("/guilds/mage/senses/root.c");

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

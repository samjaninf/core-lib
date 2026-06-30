//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/mage/mind/psychic-lance.c");
    addResearchElement("/guilds/mage/mind/thought-shatter.c");
    addResearchElement("/guilds/mage/mind/psionic-bolt.c");

    addChild("/guilds/mage/mind/psychic-lance.c",
        "/guilds/mage/mind/root.c");
    addChild("/guilds/mage/mind/thought-shatter.c",
        "/guilds/mage/mind/root.c");
    addChild("/guilds/mage/mind/psionic-bolt.c",
        "/guilds/mage/mind/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/mage/mind/mind-theory.c");

    addChild("/guilds/mage/mind/mind-theory.c",
        "/guilds/mage/mind/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/mage/mind/mind-crush.c");
    addResearchElement("/guilds/mage/mind/psionic-assault.c");
    addResearchElement("/guilds/mage/mind/psionic-theory.c");

    addChild("/guilds/mage/mind/mind-crush.c",
        "/guilds/mage/mind/psychic-lance.c");
    addChild("/guilds/mage/mind/psionic-assault.c",
        "/guilds/mage/mind/psionic-bolt.c");
    addChild("/guilds/mage/mind/psionic-theory.c",
        "/guilds/mage/mind/psionic-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/mage/mind/amplified-mind.c");
    addResearchElement("/guilds/mage/mind/neural-disruption.c");

    addChild("/guilds/mage/mind/amplified-mind.c",
        "/guilds/mage/mind/mind-theory.c");
    addChild("/guilds/mage/mind/neural-disruption.c",
        "/guilds/mage/mind/thought-shatter.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/mage/mind/mind-adepts-reserve.c");

    addChild("/guilds/mage/mind/mind-adepts-reserve.c",
        "/guilds/mage/mind/psychic-lance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/mage/mind/mind-adepts-boon.c");

    addChild("/guilds/mage/mind/mind-adepts-boon.c",
        "/guilds/mage/mind/mind-crush.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/mage/mind/mind-mastery.c");

    addChild("/guilds/mage/mind/mind-mastery.c",
        "/guilds/mage/mind/amplified-mind.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/mage/mind/psionic-mastery.c");

    addChild("/guilds/mage/mind/psionic-mastery.c",
        "/guilds/mage/mind/psionic-theory.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/mage/mind/psychic-overload.c");
    addResearchElement("/guilds/mage/mind/psionic-storm.c");

    addChild("/guilds/mage/mind/psychic-overload.c",
        "/guilds/mage/mind/mind-crush.c");
    addChild("/guilds/mage/mind/psionic-storm.c",
        "/guilds/mage/mind/neural-disruption.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement("/guilds/mage/mind/pure-mind.c");

    addChild("/guilds/mage/mind/pure-mind.c",
        "/guilds/mage/mind/mind-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement("/guilds/mage/mind/mind-adepts-call.c");

    addChild("/guilds/mage/mind/mind-adepts-call.c",
        "/guilds/mage/mind/mind-adepts-reserve.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/mage/mind/mind-adepts-finesse.c");

    addChild("/guilds/mage/mind/mind-adepts-finesse.c",
        "/guilds/mage/mind/mind-adepts-boon.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/mage/mind/primal-mind.c");

    addChild("/guilds/mage/mind/primal-mind.c",
        "/guilds/mage/mind/pure-mind.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/mage/mind/pure-psionics.c");

    addChild("/guilds/mage/mind/pure-psionics.c",
        "/guilds/mage/mind/psionic-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement("/guilds/mage/mind/total-mind.c");

    addChild("/guilds/mage/mind/total-mind.c",
        "/guilds/mage/mind/primal-mind.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement("/guilds/mage/mind/mind-adepts-might.c");

    addChild("/guilds/mage/mind/mind-adepts-might.c",
        "/guilds/mage/mind/mind-adepts-call.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/mage/mind/mind-annihilation.c");
    addResearchElement("/guilds/mage/mind/mind-adepts-endurance.c");

    addChild("/guilds/mage/mind/mind-annihilation.c",
        "/guilds/mage/mind/psychic-overload.c");
    addChild("/guilds/mage/mind/mind-adepts-endurance.c",
        "/guilds/mage/mind/mind-adepts-finesse.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement("/guilds/mage/mind/mindful-mastery.c");

    addChild("/guilds/mage/mind/mindful-mastery.c",
        "/guilds/mage/mind/total-mind.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/mage/mind/primal-psionics.c");

    addChild("/guilds/mage/mind/primal-psionics.c",
        "/guilds/mage/mind/pure-psionics.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySeventhLevel()
{
    addResearchElement("/guilds/mage/mind/mind-adepts-fury.c");

    addChild("/guilds/mage/mind/mind-adepts-fury.c",
        "/guilds/mage/mind/mind-adepts-might.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement("/guilds/mage/mind/mind-adepts-strength.c");

    addChild("/guilds/mage/mind/mind-adepts-strength.c",
        "/guilds/mage/mind/mind-adepts-endurance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement("/guilds/mage/mind/psionic-supremacy.c");

    addChild("/guilds/mage/mind/psionic-supremacy.c",
        "/guilds/mage/mind/primal-psionics.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySeventhLevel()
{
    addResearchElement("/guilds/mage/mind/total-mindbreak.c");
    addResearchElement("/guilds/mage/mind/absolute-mind.c");

    addChild("/guilds/mage/mind/total-mindbreak.c",
        "/guilds/mage/mind/psionic-storm.c");
    addChild("/guilds/mage/mind/absolute-mind.c",
        "/guilds/mage/mind/mindful-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyNinthLevel()
{
    addResearchElement("/guilds/mage/mind/mind-adepts-zenith.c");

    addChild("/guilds/mage/mind/mind-adepts-zenith.c",
        "/guilds/mage/mind/mind-adepts-fury.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFirstLevel()
{
    addResearchElement("/guilds/mage/mind/mind-adepts-power.c");

    addChild("/guilds/mage/mind/mind-adepts-power.c",
        "/guilds/mage/mind/mind-adepts-strength.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Mind");
    Description("The school of mind is concerned with reaching into the "
        "thoughts and perceptions of others to assault, confuse, or "
        "shatter consciousness.");
    Source("mage");
    addResearchElement("/guilds/mage/mind/root.c");
    TreeRoot("/guilds/mage/mind/root.c");

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



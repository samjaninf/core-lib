//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/mage/transformation/alter-form.c");
    addResearchElement("/guilds/mage/transformation/warp-flesh.c");
    addResearchElement("/guilds/mage/transformation/transmute-matter.c");

    addChild("/guilds/mage/transformation/alter-form.c",
        "/guilds/mage/transformation/root.c");
    addChild("/guilds/mage/transformation/warp-flesh.c",
        "/guilds/mage/transformation/root.c");
    addChild("/guilds/mage/transformation/transmute-matter.c",
        "/guilds/mage/transformation/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/mage/transformation/transformation-theory.c");

    addChild("/guilds/mage/transformation/transformation-theory.c",
        "/guilds/mage/transformation/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/mage/transformation/reshape-body.c");
    addResearchElement("/guilds/mage/transformation/elemental-infusion.c");
    addResearchElement("/guilds/mage/transformation/transmutation-theory.c");

    addChild("/guilds/mage/transformation/reshape-body.c",
        "/guilds/mage/transformation/alter-form.c");
    addChild("/guilds/mage/transformation/elemental-infusion.c",
        "/guilds/mage/transformation/transmute-matter.c");
    addChild("/guilds/mage/transformation/transmutation-theory.c",
        "/guilds/mage/transformation/elemental-infusion.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/mage/transformation/amplified-transformation.c");
    addResearchElement("/guilds/mage/transformation/unnatural-alteration.c");

    addChild("/guilds/mage/transformation/amplified-transformation.c",
        "/guilds/mage/transformation/transformation-theory.c");
    addChild("/guilds/mage/transformation/unnatural-alteration.c",
        "/guilds/mage/transformation/warp-flesh.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/mage/transformation/transformers-reserve.c");

    addChild("/guilds/mage/transformation/transformers-reserve.c",
        "/guilds/mage/transformation/alter-form.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/mage/transformation/transformers-boon.c");

    addChild("/guilds/mage/transformation/transformers-boon.c",
        "/guilds/mage/transformation/reshape-body.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/mage/transformation/transformation-mastery.c");

    addChild("/guilds/mage/transformation/transformation-mastery.c",
        "/guilds/mage/transformation/amplified-transformation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/mage/transformation/transmutation-mastery.c");

    addChild("/guilds/mage/transformation/transmutation-mastery.c",
        "/guilds/mage/transformation/transmutation-theory.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/mage/transformation/corrupt-form.c");
    addResearchElement("/guilds/mage/transformation/transmutation-surge.c");

    addChild("/guilds/mage/transformation/corrupt-form.c",
        "/guilds/mage/transformation/reshape-body.c");
    addChild("/guilds/mage/transformation/transmutation-surge.c",
        "/guilds/mage/transformation/unnatural-alteration.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement("/guilds/mage/transformation/pure-transformation.c");

    addChild("/guilds/mage/transformation/pure-transformation.c",
        "/guilds/mage/transformation/transformation-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement("/guilds/mage/transformation/transformers-call.c");

    addChild("/guilds/mage/transformation/transformers-call.c",
        "/guilds/mage/transformation/transformers-reserve.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/mage/transformation/transformers-finesse.c");

    addChild("/guilds/mage/transformation/transformers-finesse.c",
        "/guilds/mage/transformation/transformers-boon.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/mage/transformation/primal-transformation.c");

    addChild("/guilds/mage/transformation/primal-transformation.c",
        "/guilds/mage/transformation/pure-transformation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/mage/transformation/pure-transmutation.c");

    addChild("/guilds/mage/transformation/pure-transmutation.c",
        "/guilds/mage/transformation/transmutation-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement("/guilds/mage/transformation/total-transformation.c");

    addChild("/guilds/mage/transformation/total-transformation.c",
        "/guilds/mage/transformation/primal-transformation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement("/guilds/mage/transformation/transformers-might.c");

    addChild("/guilds/mage/transformation/transformers-might.c",
        "/guilds/mage/transformation/transformers-call.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/mage/transformation/absolute-transmutation.c");
    addResearchElement("/guilds/mage/transformation/transformers-endurance.c");

    addChild("/guilds/mage/transformation/absolute-transmutation.c",
        "/guilds/mage/transformation/corrupt-form.c");
    addChild("/guilds/mage/transformation/transformers-endurance.c",
        "/guilds/mage/transformation/transformers-finesse.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement("/guilds/mage/transformation/transformative-mastery.c");

    addChild("/guilds/mage/transformation/transformative-mastery.c",
        "/guilds/mage/transformation/total-transformation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/mage/transformation/primal-transmutation.c");

    addChild("/guilds/mage/transformation/primal-transmutation.c",
        "/guilds/mage/transformation/pure-transmutation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySeventhLevel()
{
    addResearchElement("/guilds/mage/transformation/transformers-fury.c");

    addChild("/guilds/mage/transformation/transformers-fury.c",
        "/guilds/mage/transformation/transformers-might.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement("/guilds/mage/transformation/transformers-strength.c");

    addChild("/guilds/mage/transformation/transformers-strength.c",
        "/guilds/mage/transformation/transformers-endurance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement("/guilds/mage/transformation/transmutation-supremacy.c");

    addChild("/guilds/mage/transformation/transmutation-supremacy.c",
        "/guilds/mage/transformation/primal-transmutation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySeventhLevel()
{
    addResearchElement("/guilds/mage/transformation/total-transformation-spell.c");
    addResearchElement("/guilds/mage/transformation/absolute-transformation.c");

    addChild("/guilds/mage/transformation/total-transformation-spell.c",
        "/guilds/mage/transformation/transmutation-surge.c");
    addChild("/guilds/mage/transformation/absolute-transformation.c",
        "/guilds/mage/transformation/transformative-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyNinthLevel()
{
    addResearchElement("/guilds/mage/transformation/transformers-zenith.c");

    addChild("/guilds/mage/transformation/transformers-zenith.c",
        "/guilds/mage/transformation/transformers-fury.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFirstLevel()
{
    addResearchElement("/guilds/mage/transformation/transformers-power.c");
    addResearchElement("/guilds/mage/transformation/transformative-focus.c");

    addChild("/guilds/mage/transformation/transformers-power.c",
        "/guilds/mage/transformation/transformers-strength.c");
    addChild("/guilds/mage/transformation/transformative-focus.c",
        "/guilds/mage/transformation/transformers-power.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyThirdLevel()
{
    addResearchElement("/guilds/mage/transformation/supreme-transformation.c");
    addResearchElement("/guilds/mage/transformation/transformed-body.c");

    addChild("/guilds/mage/transformation/supreme-transformation.c",
        "/guilds/mage/transformation/transformers-zenith.c");
    addChild("/guilds/mage/transformation/transformed-body.c",
        "/guilds/mage/transformation/transformers-zenith.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFifthLevel()
{
    addResearchElement("/guilds/mage/transformation/transformation-supremacy.c");

    addChild("/guilds/mage/transformation/transformation-supremacy.c",
        "/guilds/mage/transformation/supreme-transformation.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtySeventhLevel()
{
    addResearchElement("/guilds/mage/transformation/transmutation-supremacy-ii.c");

    addChild("/guilds/mage/transformation/transmutation-supremacy-ii.c",
        "/guilds/mage/transformation/transmutation-supremacy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyNinthLevel()
{
    addResearchElement("/guilds/mage/transformation/total-transmutation.c");

    addChild("/guilds/mage/transformation/total-transmutation.c",
        "/guilds/mage/transformation/transformation-supremacy.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Transformation");
    Description("The school of transformation is concerned with altering "
        "the fundamental properties of matter, form, and magical essence.");
    Source("mage");
    addResearchElement("/guilds/mage/transformation/root.c");
    TreeRoot("/guilds/mage/transformation/root.c");

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



//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void TwentiethLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/higher-focus.c");
    addResearchElement("/guilds/mage/higher-arcana/higher-precision.c");

    addChild("/guilds/mage/higher-arcana/higher-focus.c",
        "/guilds/mage/higher-arcana/root.c");
    addChild("/guilds/mage/higher-arcana/higher-precision.c",
        "/guilds/mage/higher-arcana/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    // higher-precision chains separately from this point
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySecondLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/arcane-reservoir-i.c");
    addResearchElement("/guilds/mage/higher-arcana/arcane-amplification.c");
    addResearchElement("/guilds/mage/higher-arcana/arcane-clarity.c");

    addChild("/guilds/mage/higher-arcana/arcane-reservoir-i.c",
        "/guilds/mage/higher-arcana/higher-focus.c");
    addChild("/guilds/mage/higher-arcana/arcane-amplification.c",
        "/guilds/mage/higher-arcana/higher-focus.c");
    addChild("/guilds/mage/higher-arcana/arcane-clarity.c",
        "/guilds/mage/higher-arcana/higher-precision.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFourthLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/higher-attunement.c");

    addChild("/guilds/mage/higher-arcana/higher-attunement.c",
        "/guilds/mage/higher-arcana/arcane-reservoir-i.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/higher-power.c");

    addChild("/guilds/mage/higher-arcana/higher-power.c",
        "/guilds/mage/higher-arcana/arcane-clarity.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySixthLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/higher-constitution.c");

    addChild("/guilds/mage/higher-arcana/higher-constitution.c",
        "/guilds/mage/higher-arcana/higher-attunement.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/higher-resilience.c");

    addChild("/guilds/mage/higher-arcana/higher-resilience.c",
        "/guilds/mage/higher-arcana/higher-power.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyEighthLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/higher-intelligence.c");

    addChild("/guilds/mage/higher-arcana/higher-intelligence.c",
        "/guilds/mage/higher-arcana/higher-constitution.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/arcane-channel.c");
    addResearchElement("/guilds/mage/higher-arcana/higher-synergy.c");

    addChild("/guilds/mage/higher-arcana/arcane-channel.c",
        "/guilds/mage/higher-arcana/higher-resilience.c");
    addChild("/guilds/mage/higher-arcana/higher-synergy.c",
        "/guilds/mage/higher-arcana/higher-intelligence.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtiethLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/arcane-reservoir-ii.c");

    addChild("/guilds/mage/higher-arcana/arcane-reservoir-ii.c",
        "/guilds/mage/higher-arcana/higher-intelligence.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFirstLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/higher-stamina.c");

    addChild("/guilds/mage/higher-arcana/higher-stamina.c",
        "/guilds/mage/higher-arcana/arcane-channel.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySecondLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/higher-vitality.c");

    addChild("/guilds/mage/higher-arcana/higher-vitality.c",
        "/guilds/mage/higher-arcana/arcane-reservoir-ii.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/arcane-depth.c");

    addChild("/guilds/mage/higher-arcana/arcane-depth.c",
        "/guilds/mage/higher-arcana/higher-stamina.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFourthLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/higher-endurance.c");

    addChild("/guilds/mage/higher-arcana/higher-endurance.c",
        "/guilds/mage/higher-arcana/higher-vitality.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/higher-mind.c");

    addChild("/guilds/mage/higher-arcana/higher-mind.c",
        "/guilds/mage/higher-arcana/arcane-depth.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySixthLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/greater-constitution.c");

    addChild("/guilds/mage/higher-arcana/greater-constitution.c",
        "/guilds/mage/higher-arcana/higher-endurance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/arcane-structure.c");

    addChild("/guilds/mage/higher-arcana/arcane-structure.c",
        "/guilds/mage/higher-arcana/higher-mind.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyEighthLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/arcane-reservoir-iii.c");
    addResearchElement("/guilds/mage/higher-arcana/arcane-resonance.c");

    addChild("/guilds/mage/higher-arcana/arcane-reservoir-iii.c",
        "/guilds/mage/higher-arcana/greater-constitution.c");
    addChild("/guilds/mage/higher-arcana/arcane-resonance.c",
        "/guilds/mage/higher-arcana/arcane-structure.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortiethLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/superior-spellcraft.c");

    addChild("/guilds/mage/higher-arcana/superior-spellcraft.c",
        "/guilds/mage/higher-arcana/arcane-reservoir-iii.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySecondLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/higher-wisdom.c");

    addChild("/guilds/mage/higher-arcana/higher-wisdom.c",
        "/guilds/mage/higher-arcana/superior-spellcraft.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFourthLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/advanced-recovery.c");

    addChild("/guilds/mage/higher-arcana/advanced-recovery.c",
        "/guilds/mage/higher-arcana/higher-wisdom.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySixthLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/arcane-reservoir-iv.c");
    addResearchElement("/guilds/mage/higher-arcana/arcane-augmentation.c");

    addChild("/guilds/mage/higher-arcana/arcane-reservoir-iv.c",
        "/guilds/mage/higher-arcana/advanced-recovery.c");
    addChild("/guilds/mage/higher-arcana/arcane-augmentation.c",
        "/guilds/mage/higher-arcana/advanced-recovery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyEighthLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/arcane-fortitude-ii.c");

    addChild("/guilds/mage/higher-arcana/arcane-fortitude-ii.c",
        "/guilds/mage/higher-arcana/arcane-reservoir-iv.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftiethLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/greater-stamina.c");

    addChild("/guilds/mage/higher-arcana/greater-stamina.c",
        "/guilds/mage/higher-arcana/arcane-fortitude-ii.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySecondLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/expert-spellcraft.c");

    addChild("/guilds/mage/higher-arcana/expert-spellcraft.c",
        "/guilds/mage/higher-arcana/greater-stamina.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFourthLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/masterful-attunement.c");
    addResearchElement("/guilds/mage/higher-arcana/higher-confluence.c");

    addChild("/guilds/mage/higher-arcana/masterful-attunement.c",
        "/guilds/mage/higher-arcana/expert-spellcraft.c");
    addChild("/guilds/mage/higher-arcana/higher-confluence.c",
        "/guilds/mage/higher-arcana/expert-spellcraft.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySixthLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/arcane-reservoir-v.c");

    addChild("/guilds/mage/higher-arcana/arcane-reservoir-v.c",
        "/guilds/mage/higher-arcana/masterful-attunement.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyEighthLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/arcane-body.c");

    addChild("/guilds/mage/higher-arcana/arcane-body.c",
        "/guilds/mage/higher-arcana/arcane-reservoir-v.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtiethLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/arcane-stamina-ii.c");
    addResearchElement("/guilds/mage/higher-arcana/supreme-arcana.c");

    addChild("/guilds/mage/higher-arcana/arcane-stamina-ii.c",
        "/guilds/mage/higher-arcana/arcane-body.c");
    addChild("/guilds/mage/higher-arcana/supreme-arcana.c",
        "/guilds/mage/higher-arcana/arcane-body.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtySecondLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/archmage-spellcraft.c");
    addResearchElement("/guilds/mage/higher-arcana/transcendent-arcana.c");

    addChild("/guilds/mage/higher-arcana/archmage-spellcraft.c",
        "/guilds/mage/higher-arcana/arcane-stamina-ii.c");
    addChild("/guilds/mage/higher-arcana/transcendent-arcana.c",
        "/guilds/mage/higher-arcana/arcane-stamina-ii.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFourthLevel()
{
    addResearchElement("/guilds/mage/higher-arcana/absolute-higher-arcana.c");

    addChild("/guilds/mage/higher-arcana/absolute-higher-arcana.c",
        "/guilds/mage/higher-arcana/archmage-spellcraft.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Higher Arcana");
    Description("Higher arcana represents the advanced principles of "
        "magical theory accessible only to mages who have devoted "
        "years of study to the craft. These teachings amplify the "
        "power of all magical disciplines and unlock abilities beyond "
        "the reach of lesser practitioners.");
    Source("mage");
    addResearchElement("/guilds/mage/higher-arcana/root.c");
    TreeRoot("/guilds/mage/higher-arcana/root.c");

    TwentiethLevel();
    TwentySecondLevel();
    TwentyFourthLevel();
    TwentyFifthLevel();
    TwentySixthLevel();
    TwentySeventhLevel();
    TwentyEighthLevel();
    TwentyNinthLevel();
    ThirtiethLevel();
    ThirtyFirstLevel();
    ThirtySecondLevel();
    ThirtyThirdLevel();
    ThirtyFourthLevel();
    ThirtyFifthLevel();
    ThirtySixthLevel();
    ThirtySeventhLevel();
    ThirtyEighthLevel();
    FortiethLevel();
    FortySecondLevel();
    FortyFourthLevel();
    FortySixthLevel();
    FortyEighthLevel();
    FiftiethLevel();
    FiftySecondLevel();
    FiftyFourthLevel();
    FiftySixthLevel();
    FiftyEighthLevel();
    SixtiethLevel();
    SixtySecondLevel();
    SixtyFourthLevel();
}

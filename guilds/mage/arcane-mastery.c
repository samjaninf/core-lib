//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FortiethLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-focus.c");
    addResearchElement("/guilds/mage/arcane-mastery/mastery-precision.c");

    addChild("/guilds/mage/arcane-mastery/mastery-focus.c",
        "/guilds/mage/arcane-mastery/root.c");
    addChild("/guilds/mage/arcane-mastery/mastery-precision.c",
        "/guilds/mage/arcane-mastery/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySecondLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-reservoir.c");
    addResearchElement("/guilds/mage/arcane-mastery/mastery-amplification.c");

    addChild("/guilds/mage/arcane-mastery/mastery-reservoir.c",
        "/guilds/mage/arcane-mastery/mastery-focus.c");
    addChild("/guilds/mage/arcane-mastery/mastery-amplification.c",
        "/guilds/mage/arcane-mastery/mastery-focus.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyThirdLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-clarity.c");
    addResearchElement("/guilds/mage/arcane-mastery/arcane-tempest.c");

    addChild("/guilds/mage/arcane-mastery/mastery-clarity.c",
        "/guilds/mage/arcane-mastery/mastery-precision.c");
    addChild("/guilds/mage/arcane-mastery/arcane-tempest.c",
        "/guilds/mage/arcane-mastery/mastery-reservoir.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFourthLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-attunement.c");

    addChild("/guilds/mage/arcane-mastery/mastery-attunement.c",
        "/guilds/mage/arcane-mastery/mastery-reservoir.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFifthLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-power.c");

    addChild("/guilds/mage/arcane-mastery/mastery-power.c",
        "/guilds/mage/arcane-mastery/mastery-clarity.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySixthLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-intelligence.c");

    addChild("/guilds/mage/arcane-mastery/mastery-intelligence.c",
        "/guilds/mage/arcane-mastery/mastery-attunement.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySeventhLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-resilience.c");

    addChild("/guilds/mage/arcane-mastery/mastery-resilience.c",
        "/guilds/mage/arcane-mastery/mastery-power.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyEighthLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-wisdom.c");

    addChild("/guilds/mage/arcane-mastery/mastery-wisdom.c",
        "/guilds/mage/arcane-mastery/mastery-intelligence.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-channel.c");

    addChild("/guilds/mage/arcane-mastery/mastery-channel.c",
        "/guilds/mage/arcane-mastery/mastery-resilience.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftiethLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-reservoir-ii.c");
    addResearchElement("/guilds/mage/arcane-mastery/mastery-synergy.c");

    addChild("/guilds/mage/arcane-mastery/mastery-reservoir-ii.c",
        "/guilds/mage/arcane-mastery/mastery-wisdom.c");
    addChild("/guilds/mage/arcane-mastery/mastery-synergy.c",
        "/guilds/mage/arcane-mastery/mastery-wisdom.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFirstLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-mind.c");

    addChild("/guilds/mage/arcane-mastery/mastery-mind.c",
        "/guilds/mage/arcane-mastery/mastery-channel.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySecondLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-vitality.c");

    addChild("/guilds/mage/arcane-mastery/mastery-vitality.c",
        "/guilds/mage/arcane-mastery/mastery-reservoir-ii.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-depth.c");
    addResearchElement("/guilds/mage/arcane-mastery/mana-collapse.c");

    addChild("/guilds/mage/arcane-mastery/mastery-depth.c",
        "/guilds/mage/arcane-mastery/mastery-mind.c");
    addChild("/guilds/mage/arcane-mastery/mana-collapse.c",
        "/guilds/mage/arcane-mastery/mastery-vitality.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFourthLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-endurance.c");

    addChild("/guilds/mage/arcane-mastery/mastery-endurance.c",
        "/guilds/mage/arcane-mastery/mastery-vitality.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFifthLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-body.c");

    addChild("/guilds/mage/arcane-mastery/mastery-body.c",
        "/guilds/mage/arcane-mastery/mastery-depth.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySixthLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-constitution.c");

    addChild("/guilds/mage/arcane-mastery/mastery-constitution.c",
        "/guilds/mage/arcane-mastery/mastery-endurance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySeventhLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-stamina-i.c");

    addChild("/guilds/mage/arcane-mastery/mastery-stamina-i.c",
        "/guilds/mage/arcane-mastery/mastery-body.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyEighthLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-reservoir-iii.c");
    addResearchElement("/guilds/mage/arcane-mastery/mastery-resonance.c");

    addChild("/guilds/mage/arcane-mastery/mastery-reservoir-iii.c",
        "/guilds/mage/arcane-mastery/mastery-constitution.c");
    addChild("/guilds/mage/arcane-mastery/mastery-resonance.c",
        "/guilds/mage/arcane-mastery/mastery-constitution.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyNinthLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-structure.c");

    addChild("/guilds/mage/arcane-mastery/mastery-structure.c",
        "/guilds/mage/arcane-mastery/mastery-stamina-i.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtiethLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-hit-points.c");

    addChild("/guilds/mage/arcane-mastery/mastery-hit-points.c",
        "/guilds/mage/arcane-mastery/mastery-reservoir-iii.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtySecondLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-stamina.c");

    addChild("/guilds/mage/arcane-mastery/mastery-stamina.c",
        "/guilds/mage/arcane-mastery/mastery-hit-points.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFourthLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-recovery.c");
    addResearchElement("/guilds/mage/arcane-mastery/mastery-confluence.c");

    addChild("/guilds/mage/arcane-mastery/mastery-recovery.c",
        "/guilds/mage/arcane-mastery/mastery-stamina.c");
    addChild("/guilds/mage/arcane-mastery/mastery-confluence.c",
        "/guilds/mage/arcane-mastery/mastery-stamina.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtySixthLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/mastery-spellcraft.c");

    addChild("/guilds/mage/arcane-mastery/mastery-spellcraft.c",
        "/guilds/mage/arcane-mastery/mastery-recovery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyThirdLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/archmage-strike.c");

    addChild("/guilds/mage/arcane-mastery/archmage-strike.c",
        "/guilds/mage/arcane-mastery/mastery-recovery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyEighthLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/archmage-reservoir.c");

    addChild("/guilds/mage/arcane-mastery/archmage-reservoir.c",
        "/guilds/mage/arcane-mastery/mastery-spellcraft.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyNinthLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/archmage-attunement.c");

    addChild("/guilds/mage/arcane-mastery/archmage-attunement.c",
        "/guilds/mage/arcane-mastery/archmage-reservoir.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhiethLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/archmage-intelligence.c");
    addResearchElement("/guilds/mage/arcane-mastery/archmage-theory.c");

    addChild("/guilds/mage/arcane-mastery/archmage-intelligence.c",
        "/guilds/mage/arcane-mastery/archmage-reservoir.c");
    addChild("/guilds/mage/arcane-mastery/archmage-theory.c",
        "/guilds/mage/arcane-mastery/archmage-reservoir.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventyFirstLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/archmage-vitality.c");
    addResearchElement("/guilds/mage/arcane-mastery/absolute-destruction.c");

    addChild("/guilds/mage/arcane-mastery/archmage-vitality.c",
        "/guilds/mage/arcane-mastery/archmage-attunement.c");
    addChild("/guilds/mage/arcane-mastery/absolute-destruction.c",
        "/guilds/mage/arcane-mastery/archmage-intelligence.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventySecondLevel()
{
    addResearchElement("/guilds/mage/arcane-mastery/archmage-wisdom.c");
    addResearchElement("/guilds/mage/arcane-mastery/archmage-synergy.c");

    addChild("/guilds/mage/arcane-mastery/archmage-wisdom.c",
        "/guilds/mage/arcane-mastery/archmage-intelligence.c");
    addChild("/guilds/mage/arcane-mastery/archmage-synergy.c",
        "/guilds/mage/arcane-mastery/archmage-intelligence.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Arcane Mastery");
    Description("The pinnacle of the mage's art, arcane mastery "
        "represents abilities and insights granted only to those who "
        "have ascended to the rank of archmage. These teachings "
        "unlock the full potential of magical power.");
    Source("mage");
    addResearchElement("/guilds/mage/arcane-mastery/root.c");
    TreeRoot("/guilds/mage/arcane-mastery/root.c");

    FortiethLevel();
    FortySecondLevel();
    FortyThirdLevel();
    FortyFourthLevel();
    FortyFifthLevel();
    FortySixthLevel();
    FortySeventhLevel();
    FortyEighthLevel();
    FortyNinthLevel();
    FiftiethLevel();
    FiftyFirstLevel();
    FiftySecondLevel();
    FiftyThirdLevel();
    FiftyFourthLevel();
    FiftyFifthLevel();
    FiftySixthLevel();
    FiftySeventhLevel();
    FiftyEighthLevel();
    FiftyNinthLevel();
    SixtiethLevel();
    SixtySecondLevel();
    SixtyFourthLevel();
    SixtySixthLevel();
    SixtyThirdLevel();
    SixtyEighthLevel();
    SixtyNinthLevel();
    SeventhiethLevel();
    SeventyFirstLevel();
    SeventySecondLevel();
}


//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/envenom.c");
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/swift-application.c");

    addChild("/guilds/league-of-assassins/poison-craft/envenom.c",
        "/guilds/league-of-assassins/poison-craft/root.c");
    addChild("/guilds/league-of-assassins/poison-craft/swift-application.c",
        "/guilds/league-of-assassins/poison-craft/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/contact-poison.c");
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/assassins-focus.c");

    addChild("/guilds/league-of-assassins/poison-craft/contact-poison.c",
        "/guilds/league-of-assassins/poison-craft/root.c");
    addChild("/guilds/league-of-assassins/poison-craft/assassins-focus.c",
        "/guilds/league-of-assassins/poison-craft/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/sleep-draught.c");

    addChild("/guilds/league-of-assassins/poison-craft/sleep-draught.c",
        "/guilds/league-of-assassins/poison-craft/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/improved-envenom.c");
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/toxicology.c");

    addChild("/guilds/league-of-assassins/poison-craft/improved-envenom.c",
        "/guilds/league-of-assassins/poison-craft/envenom.c");
    addChild("/guilds/league-of-assassins/poison-craft/toxicology.c",
        "/guilds/league-of-assassins/poison-craft/envenom.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/improved-contact-poison.c");
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/anatomical-knowledge.c");

    addChild(
        "/guilds/league-of-assassins/poison-craft/improved-contact-poison.c",
        "/guilds/league-of-assassins/poison-craft/contact-poison.c");
    addChild(
        "/guilds/league-of-assassins/poison-craft/anatomical-knowledge.c",
        "/guilds/league-of-assassins/poison-craft/toxicology.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/improved-sleep-draught.c");
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/soporific-mastery.c");

    addChild(
        "/guilds/league-of-assassins/poison-craft/improved-sleep-draught.c",
        "/guilds/league-of-assassins/poison-craft/sleep-draught.c");
    addChild(
        "/guilds/league-of-assassins/poison-craft/soporific-mastery.c",
        "/guilds/league-of-assassins/poison-craft/sleep-draught.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/poison-resistance.c");

    addChild("/guilds/league-of-assassins/poison-craft/poison-resistance.c",
        "/guilds/league-of-assassins/poison-craft/toxicology.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/virulent-poison.c");
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/viper-stance.c");

    addChild("/guilds/league-of-assassins/poison-craft/virulent-poison.c",
        "/guilds/league-of-assassins/poison-craft/improved-envenom.c");
    addChild("/guilds/league-of-assassins/poison-craft/viper-stance.c",
        "/guilds/league-of-assassins/poison-craft/assassins-focus.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/perfect-sleep-draught.c");
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/virulent-formula.c");

    addChild(
        "/guilds/league-of-assassins/poison-craft/perfect-sleep-draught.c",
        "/guilds/league-of-assassins/poison-craft/improved-sleep-draught.c");
    addChild(
        "/guilds/league-of-assassins/poison-craft/virulent-formula.c",
        "/guilds/league-of-assassins/poison-craft/virulent-poison.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/improved-virulent-poison.c");
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/contact-poison-mastery.c");

    addChild(
        "/guilds/league-of-assassins/poison-craft/improved-virulent-poison.c",
        "/guilds/league-of-assassins/poison-craft/virulent-poison.c");
    addChild(
        "/guilds/league-of-assassins/poison-craft/contact-poison-mastery.c",
        "/guilds/league-of-assassins/poison-craft/improved-contact-poison.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/blade-venom.c");

    addChild("/guilds/league-of-assassins/poison-craft/blade-venom.c",
        "/guilds/league-of-assassins/poison-craft/improved-virulent-poison.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/wasting-blight.c");
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/hardened-constitution.c");

    addChild("/guilds/league-of-assassins/poison-craft/wasting-blight.c",
        "/guilds/league-of-assassins/poison-craft/improved-virulent-poison.c");
    addChild(
        "/guilds/league-of-assassins/poison-craft/hardened-constitution.c",
        "/guilds/league-of-assassins/poison-craft/poison-resistance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/blight-mastery.c");
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/neurological-targeting.c");

    addChild("/guilds/league-of-assassins/poison-craft/blight-mastery.c",
        "/guilds/league-of-assassins/poison-craft/wasting-blight.c");
    addChild(
        "/guilds/league-of-assassins/poison-craft/neurological-targeting.c",
        "/guilds/league-of-assassins/poison-craft/anatomical-knowledge.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/improved-wasting-blight.c");
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/improved-blade-venom.c");

    addChild(
        "/guilds/league-of-assassins/poison-craft/improved-wasting-blight.c",
        "/guilds/league-of-assassins/poison-craft/wasting-blight.c");
    addChild(
        "/guilds/league-of-assassins/poison-craft/improved-blade-venom.c",
        "/guilds/league-of-assassins/poison-craft/blade-venom.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/alchemical-refinement.c");

    addChild(
        "/guilds/league-of-assassins/poison-craft/alchemical-refinement.c",
        "/guilds/league-of-assassins/poison-craft/virulent-formula.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/perfect-wasting-blight.c");

    addChild(
        "/guilds/league-of-assassins/poison-craft/perfect-wasting-blight.c",
        "/guilds/league-of-assassins/poison-craft/improved-wasting-blight.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/toxic-aura.c");
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/toxic-synergy.c");
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/perfect-blade-venom.c");

    addChild("/guilds/league-of-assassins/poison-craft/toxic-aura.c",
        "/guilds/league-of-assassins/poison-craft/virulent-poison.c");
    addChild("/guilds/league-of-assassins/poison-craft/toxic-synergy.c",
        "/guilds/league-of-assassins/poison-craft/blight-mastery.c");
    addChild("/guilds/league-of-assassins/poison-craft/perfect-blade-venom.c",
        "/guilds/league-of-assassins/poison-craft/improved-blade-venom.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/shadowed-death.c");
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/killers-calm.c");

    addChild("/guilds/league-of-assassins/poison-craft/shadowed-death.c",
        "/guilds/league-of-assassins/poison-craft/improved-wasting-blight.c");
    addChild("/guilds/league-of-assassins/poison-craft/killers-calm.c",
        "/guilds/league-of-assassins/poison-craft/viper-stance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/lethal-efficiency.c");

    addChild("/guilds/league-of-assassins/poison-craft/lethal-efficiency.c",
        "/guilds/league-of-assassins/poison-craft/neurological-targeting.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/improved-shadowed-death.c");
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/assassins-poison-mastery.c");

    addChild(
        "/guilds/league-of-assassins/poison-craft/improved-shadowed-death.c",
        "/guilds/league-of-assassins/poison-craft/shadowed-death.c");
    addChild(
        "/guilds/league-of-assassins/poison-craft/assassins-poison-mastery.c",
        "/guilds/league-of-assassins/poison-craft/lethal-efficiency.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/masters-touch.c");

    addChild("/guilds/league-of-assassins/poison-craft/masters-touch.c",
        "/guilds/league-of-assassins/poison-craft/assassins-poison-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/perfect-shadowed-death.c");

    addChild(
        "/guilds/league-of-assassins/poison-craft/perfect-shadowed-death.c",
        "/guilds/league-of-assassins/poison-craft/improved-shadowed-death.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/shadow-preparation.c");

    addChild(
        "/guilds/league-of-assassins/poison-craft/shadow-preparation.c",
        "/guilds/league-of-assassins/poison-craft/toxic-aura.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/poison-craft/supreme-poison-mastery.c");

    addChild(
        "/guilds/league-of-assassins/poison-craft/supreme-poison-mastery.c",
        "/guilds/league-of-assassins/poison-craft/masters-touch.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Poison Craft");
    Description("The poison craft arts of the League of Assassins, "
        "mastering the preparation and application of toxins, venoms, "
        "and blights to incapacitate and destroy enemies.");
    Source("League of Assassins");
    TreeRoot("/guilds/league-of-assassins/poison-craft/root.c");

    FirstLevel();
    ThirdLevel();
    FifthLevel();
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
    ThirtyFirstLevel();
    ThirtyThirdLevel();
    ThirtyFifthLevel();
    ThirtySeventhLevel();
    ThirtyNinthLevel();
    FortyFirstLevel();
    FortyFifthLevel();
    FortySeventhLevel();
    FiftyFirstLevel();
    FiftyFifthLevel();
}

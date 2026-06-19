//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/conceal.c");
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/misdirection.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/conceal.c",
        "/guilds/league-of-assassins/deception-techniques/root.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/misdirection.c",
        "/guilds/league-of-assassins/deception-techniques/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/deceptive-footwork.c");
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/feint.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/deceptive-footwork.c",
        "/guilds/league-of-assassins/deception-techniques/root.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/feint.c",
        "/guilds/league-of-assassins/deception-techniques/conceal.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/disguise.c");
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/deception-theory.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/disguise.c",
        "/guilds/league-of-assassins/deception-techniques/misdirection.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/deception-theory.c",
        "/guilds/league-of-assassins/deception-techniques/misdirection.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/improved-conceal.c");
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/improved-feint.c");
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/improved-misdirection.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/improved-conceal.c",
        "/guilds/league-of-assassins/deception-techniques/conceal.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/improved-feint.c",
        "/guilds/league-of-assassins/deception-techniques/feint.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/improved-misdirection.c",
        "/guilds/league-of-assassins/deception-techniques/misdirection.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/distraction.c");
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/social-camouflage.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/distraction.c",
        "/guilds/league-of-assassins/deception-techniques/misdirection.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/social-camouflage.c",
        "/guilds/league-of-assassins/deception-techniques/deception-theory.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/perfect-feint.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/perfect-feint.c",
        "/guilds/league-of-assassins/deception-techniques/improved-feint.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/deep-cover.c");
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/read-intentions.c");
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/perfect-misdirection.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/deep-cover.c",
        "/guilds/league-of-assassins/deception-techniques/disguise.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/read-intentions.c",
        "/guilds/league-of-assassins/deception-techniques/social-camouflage.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/perfect-misdirection.c",
        "/guilds/league-of-assassins/deception-techniques/improved-misdirection.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/perfect-conceal.c");
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/improved-disguise.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/perfect-conceal.c",
        "/guilds/league-of-assassins/deception-techniques/improved-conceal.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/improved-disguise.c",
        "/guilds/league-of-assassins/deception-techniques/disguise.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/convincing-liar.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/convincing-liar.c",
        "/guilds/league-of-assassins/deception-techniques/social-camouflage.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/shadow-strike-setup.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/shadow-strike-setup.c",
        "/guilds/league-of-assassins/deception-techniques/feint.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/shadow-presence.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/shadow-presence.c",
        "/guilds/league-of-assassins/deception-techniques/convincing-liar.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/panic-inducement.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/panic-inducement.c",
        "/guilds/league-of-assassins/deception-techniques/distraction.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/improved-distraction.c");
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/perfect-disguise.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/improved-distraction.c",
        "/guilds/league-of-assassins/deception-techniques/distraction.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/perfect-disguise.c",
        "/guilds/league-of-assassins/deception-techniques/improved-disguise.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/deception-mastery.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/deception-mastery.c",
        "/guilds/league-of-assassins/deception-techniques/read-intentions.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/phantom-identity.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/phantom-identity.c",
        "/guilds/league-of-assassins/deception-techniques/deep-cover.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/"
        "improved-shadow-strike-setup.c");
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/"
        "improved-panic-inducement.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/"
        "improved-shadow-strike-setup.c",
        "/guilds/league-of-assassins/deception-techniques/shadow-strike-setup.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/"
        "improved-panic-inducement.c",
        "/guilds/league-of-assassins/deception-techniques/panic-inducement.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/mind-games.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/mind-games.c",
        "/guilds/league-of-assassins/deception-techniques/panic-inducement.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/perfect-distraction.c");
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/perfect-panic-inducement.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/perfect-distraction.c",
        "/guilds/league-of-assassins/deception-techniques/improved-distraction.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/perfect-panic-inducement.c",
        "/guilds/league-of-assassins/deception-techniques/improved-panic-inducement.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/master-of-shadows.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/master-of-shadows.c",
        "/guilds/league-of-assassins/deception-techniques/deception-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/"
        "perfect-shadow-strike-setup.c");
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/improved-mind-games.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/"
        "perfect-shadow-strike-setup.c",
        "/guilds/league-of-assassins/deception-techniques/"
        "improved-shadow-strike-setup.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/improved-mind-games.c",
        "/guilds/league-of-assassins/deception-techniques/mind-games.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/living-shadow.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/living-shadow.c",
        "/guilds/league-of-assassins/deception-techniques/master-of-shadows.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/perfect-mind-games.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/perfect-mind-games.c",
        "/guilds/league-of-assassins/deception-techniques/improved-mind-games.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/invisible-presence.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/invisible-presence.c",
        "/guilds/league-of-assassins/deception-techniques/phantom-identity.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftySeventhLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/absolute-deception.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/absolute-deception.c",
        "/guilds/league-of-assassins/deception-techniques/living-shadow.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFirstLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/total-misdirection.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/total-misdirection.c",
        "/guilds/league-of-assassins/deception-techniques/invisible-presence.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFifthLevel()
{
    addResearchElement(
        "/guilds/league-of-assassins/deception-techniques/eclipse.c");
    addChild(
        "/guilds/league-of-assassins/deception-techniques/eclipse.c",
        "/guilds/league-of-assassins/deception-techniques/absolute-deception.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("deception techniques");
    Description("Techniques of misdirection, disguise, and psychological "
        "manipulation that allow the assassin to control how they are "
        "perceived - and to exploit that perception ruthlessly.");
    Source("League of Assassins");
    TreeRoot("/guilds/league-of-assassins/deception-techniques/root.c");

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
    ThirtySeventhLevel();
    ThirtyNinthLevel();
    FortyFirstLevel();
    FortyThirdLevel();
    FortySeventhLevel();
    FiftyFirstLevel();
    FiftyThirdLevel();
    FiftySeventhLevel();
    SixtyFirstLevel();
    SixtyFifthLevel();
}

//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/physical-training.c");
    addChild("/guilds/werric-knight/discipline/physical-training.c",
        "/guilds/werric-knight/discipline/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/mental-fortitude.c");
    addChild("/guilds/werric-knight/discipline/mental-fortitude.c",
        "/guilds/werric-knight/discipline/physical-training.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/endurance-training.c");
    addChild("/guilds/werric-knight/discipline/endurance-training.c",
        "/guilds/werric-knight/discipline/mental-fortitude.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/combat-conditioning.c");
    addChild("/guilds/werric-knight/discipline/combat-conditioning.c",
        "/guilds/werric-knight/discipline/endurance-training.c");

    addResearchElement("/guilds/werric-knight/discipline/fortitude.c");
    addChild("/guilds/werric-knight/discipline/fortitude.c",
        "/guilds/werric-knight/discipline/mental-fortitude.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TenthLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/focused-mind.c");
    addChild("/guilds/werric-knight/discipline/focused-mind.c",
        "/guilds/werric-knight/discipline/combat-conditioning.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/iron-body.c");
    addChild("/guilds/werric-knight/discipline/iron-body.c",
        "/guilds/werric-knight/discipline/focused-mind.c");

    addResearchElement("/guilds/werric-knight/discipline/resilience.c");
    addChild("/guilds/werric-knight/discipline/resilience.c",
        "/guilds/werric-knight/discipline/fortitude.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixteenthLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/steel-mind.c");
    addChild("/guilds/werric-knight/discipline/steel-mind.c",
        "/guilds/werric-knight/discipline/iron-body.c");

    addResearchElement("/guilds/werric-knight/discipline/unwavering.c");
    addChild("/guilds/werric-knight/discipline/unwavering.c",
        "/guilds/werric-knight/discipline/resilience.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentiethLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/advanced-training.c");
    addChild("/guilds/werric-knight/discipline/advanced-training.c",
        "/guilds/werric-knight/discipline/steel-mind.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/peak-performance.c");
    addChild("/guilds/werric-knight/discipline/peak-performance.c",
        "/guilds/werric-knight/discipline/advanced-training.c");

    addResearchElement("/guilds/werric-knight/discipline/absolute-discipline.c");
    addChild("/guilds/werric-knight/discipline/absolute-discipline.c",
        "/guilds/werric-knight/discipline/unwavering.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtiethLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/unbreakable-will.c");
    addChild("/guilds/werric-knight/discipline/unbreakable-will.c",
        "/guilds/werric-knight/discipline/peak-performance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/supreme-conditioning.c");
    addChild("/guilds/werric-knight/discipline/supreme-conditioning.c",
        "/guilds/werric-knight/discipline/unbreakable-will.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortiethLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/master-of-self.c");
    addChild("/guilds/werric-knight/discipline/master-of-self.c",
        "/guilds/werric-knight/discipline/supreme-conditioning.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFifthLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/legendary-discipline.c");
    addChild("/guilds/werric-knight/discipline/legendary-discipline.c",
        "/guilds/werric-knight/discipline/master-of-self.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftiethLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/transcendent-form.c");
    addChild("/guilds/werric-knight/discipline/transcendent-form.c",
        "/guilds/werric-knight/discipline/legendary-discipline.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFifthLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/perfect-discipline.c");
    addChild("/guilds/werric-knight/discipline/perfect-discipline.c",
        "/guilds/werric-knight/discipline/transcendent-form.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventiethLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/eternal-discipline.c");
    addChild("/guilds/werric-knight/discipline/eternal-discipline.c",
        "/guilds/werric-knight/discipline/perfect-discipline.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Discipline");
    Description("This research tree represents the art of training mind and body "
        "to peak performance. Through rigorous practice and unwavering commitment, "
        "you push beyond normal human limitations.");
    Source("Werric Knight");
    addResearchElement("/guilds/werric-knight/discipline/root.c");
    TreeRoot("/guilds/werric-knight/discipline/root.c");

    FirstLevel();
    ThirdLevel();
    FifthLevel();
    SeventhLevel();
    TenthLevel();
    ThirteenthLevel();
    SixteenthLevel();
    TwentiethLevel();
    TwentyFifthLevel();
    ThirtiethLevel();
    ThirtyFifthLevel();
    FortiethLevel();
    FortyFifthLevel();
    FiftiethLevel();
    FiftyFifthLevel();
    SeventiethLevel();
}
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/unwavering.c");
    addChild("/guilds/werric-knight/discipline/unwavering.c",
        "/guilds/werric-knight/discipline/fortitude.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/resilience.c");
    addChild("/guilds/werric-knight/discipline/resilience.c",
        "/guilds/werric-knight/discipline/unwavering.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement("/guilds/werric-knight/discipline/absolute-discipline.c");
    addChild("/guilds/werric-knight/discipline/absolute-discipline.c",
        "/guilds/werric-knight/discipline/resilience.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Discipline");
    Description("This research tree represents the intense mental and physical "
        "discipline required of Werric Knights, granting passive bonuses and resistances.");
    Source("Werric Knight");
    addResearchElement("/guilds/werric-knight/discipline/root.c");
    TreeRoot("/guilds/werric-knight/discipline/root.c");

    FirstLevel();
    SeventhLevel();
    FifteenthLevel();
    TwentyFifthLevel();
    ThirtyFifthLevel();
}

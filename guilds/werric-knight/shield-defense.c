//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/werric-knight/defense/positional-awareness.c");
    addChild("/guilds/werric-knight/defense/positional-awareness.c",
        "/guilds/werric-knight/defense/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/werric-knight/defense/defensive-reading.c");
    addChild("/guilds/werric-knight/defense/defensive-reading.c",
        "/guilds/werric-knight/defense/positional-awareness.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement("/guilds/werric-knight/defense/tactical-defense.c");
    addChild("/guilds/werric-knight/defense/tactical-defense.c",
        "/guilds/werric-knight/defense/defensive-reading.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/werric-knight/defense/terrain-advantage.c");
    addChild("/guilds/werric-knight/defense/terrain-advantage.c",
        "/guilds/werric-knight/defense/tactical-defense.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EighthLevel()
{
    addResearchElement("/guilds/werric-knight/defense/measured-response.c");
    addChild("/guilds/werric-knight/defense/measured-response.c",
        "/guilds/werric-knight/defense/terrain-advantage.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/werric-knight/defense/defensive-discipline.c");
    addChild("/guilds/werric-knight/defense/defensive-discipline.c",
        "/guilds/werric-knight/defense/terrain-advantage.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/werric-knight/defense/defensive-reposition.c");
    addChild("/guilds/werric-knight/defense/defensive-reposition.c",
        "/guilds/werric-knight/defense/defensive-discipline.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwelfthLevel()
{
    addResearchElement("/guilds/werric-knight/defense/defensive-coordination.c");
    addChild("/guilds/werric-knight/defense/defensive-coordination.c",
        "/guilds/werric-knight/defense/defensive-reposition.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/werric-knight/defense/strategic-withdrawal.c");
    addChild("/guilds/werric-knight/defense/strategic-withdrawal.c",
        "/guilds/werric-knight/defense/defensive-reposition.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/werric-knight/defense/defensive-circle.c");
    addChild("/guilds/werric-knight/defense/defensive-circle.c",
        "/guilds/werric-knight/defense/strategic-withdrawal.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/werric-knight/defense/adaptive-defense.c");
    addChild("/guilds/werric-knight/defense/adaptive-defense.c",
        "/guilds/werric-knight/defense/defensive-circle.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/werric-knight/defense/defensive-pivot.c");
    addChild("/guilds/werric-knight/defense/defensive-pivot.c",
        "/guilds/werric-knight/defense/adaptive-defense.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentiethLevel()
{
    addResearchElement("/guilds/werric-knight/defense/defensive-mastery.c");
    addChild("/guilds/werric-knight/defense/defensive-mastery.c",
        "/guilds/werric-knight/defense/adaptive-defense.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement("/guilds/werric-knight/defense/fortify-position.c");
    addChild("/guilds/werric-knight/defense/fortify-position.c",
        "/guilds/werric-knight/defense/defensive-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/werric-knight/defense/defensive-precision.c");
    addChild("/guilds/werric-knight/defense/defensive-precision.c",
        "/guilds/werric-knight/defense/fortify-position.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/werric-knight/defense/zone-control.c");
    addChild("/guilds/werric-knight/defense/zone-control.c",
        "/guilds/werric-knight/defense/fortify-position.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyEighthLevel()
{
    addResearchElement("/guilds/werric-knight/defense/defensive-anticipation.c");
    addChild("/guilds/werric-knight/defense/defensive-anticipation.c",
        "/guilds/werric-knight/defense/zone-control.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtiethLevel()
{
    addResearchElement("/guilds/werric-knight/defense/impenetrable-defense.c");
    addChild("/guilds/werric-knight/defense/impenetrable-defense.c",
        "/guilds/werric-knight/defense/zone-control.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement("/guilds/werric-knight/defense/counter-tactics.c");
    addChild("/guilds/werric-knight/defense/counter-tactics.c",
        "/guilds/werric-knight/defense/impenetrable-defense.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/werric-knight/defense/defensive-supremacy.c");
    addChild("/guilds/werric-knight/defense/defensive-supremacy.c",
        "/guilds/werric-knight/defense/counter-tactics.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortiethLevel()
{
    addResearchElement("/guilds/werric-knight/defense/legendary-defender.c");
    addChild("/guilds/werric-knight/defense/legendary-defender.c",
        "/guilds/werric-knight/defense/defensive-supremacy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyThirdLevel()
{
    addResearchElement("/guilds/werric-knight/defense/unassailable-position.c");
    addChild("/guilds/werric-knight/defense/unassailable-position.c",
        "/guilds/werric-knight/defense/legendary-defender.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFifthLevel()
{
    addResearchElement("/guilds/werric-knight/defense/tactical-fortress.c");
    addChild("/guilds/werric-knight/defense/tactical-fortress.c",
        "/guilds/werric-knight/defense/legendary-defender.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftiethLevel()
{
    addResearchElement("/guilds/werric-knight/defense/perfect-positioning.c");
    addChild("/guilds/werric-knight/defense/perfect-positioning.c",
        "/guilds/werric-knight/defense/tactical-fortress.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyThirdLevel()
{
    addResearchElement("/guilds/werric-knight/defense/tactical-shift.c");
    addChild("/guilds/werric-knight/defense/tactical-shift.c",
        "/guilds/werric-knight/defense/perfect-positioning.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFifthLevel()
{
    addResearchElement("/guilds/werric-knight/defense/absolute-defense.c");
    addChild("/guilds/werric-knight/defense/absolute-defense.c",
        "/guilds/werric-knight/defense/perfect-positioning.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyEighthLevel()
{
    addResearchElement("/guilds/werric-knight/defense/master-of-terrain.c");
    addChild("/guilds/werric-knight/defense/master-of-terrain.c",
        "/guilds/werric-knight/defense/absolute-defense.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtySecondLevel()
{
    addResearchElement("/guilds/werric-knight/defense/supreme-tactical-defense.c");
    addChild("/guilds/werric-knight/defense/supreme-tactical-defense.c",
        "/guilds/werric-knight/defense/master-of-terrain.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtySixthLevel()
{
    addResearchElement("/guilds/werric-knight/defense/timeless-defender.c");
    addChild("/guilds/werric-knight/defense/timeless-defender.c",
        "/guilds/werric-knight/defense/supreme-tactical-defense.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventiethLevel()
{
    addResearchElement("/guilds/werric-knight/defense/eternal-vigilance.c");
    addChild("/guilds/werric-knight/defense/eternal-vigilance.c",
        "/guilds/werric-knight/defense/timeless-defender.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Defensive Tactics");
    Description("This research tree represents advanced defensive tactics that go "
        "beyond shield use to encompass positioning, terrain advantage, and "
        "strategic defense. These are the techniques that allow a single knight "
        "to hold impossible positions.");
    Source("Werric Knight");
    addResearchElement("/guilds/werric-knight/defense/root.c");
    TreeRoot("/guilds/werric-knight/defense/root.c");

    FirstLevel();
    ThirdLevel();
    FifthLevel();
    SeventhLevel();
    EighthLevel();
    NinthLevel();
    EleventhLevel();
    TwelfthLevel();
    ThirteenthLevel();
    FifteenthLevel();
    SeventeenthLevel();
    NineteenthLevel();
    TwentiethLevel();
    TwentyThirdLevel();
    TwentyFifthLevel();
    TwentySeventhLevel();
    TwentyEighthLevel();
    ThirtiethLevel();
    ThirtyThirdLevel();
    ThirtySeventhLevel();
    FortiethLevel();
    FortyThirdLevel();
    FortyFifthLevel();
    FiftiethLevel();
    FiftyThirdLevel();
    FiftyFifthLevel();
    FiftyEighthLevel();
    SixtySecondLevel();
    SixtySixthLevel();
    SeventiethLevel();
}
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/werric-knight/shield/shield-wall.c");
    addChild("/guilds/werric-knight/shield/shield-wall.c",
        "/guilds/werric-knight/shield/defensive-stance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement("/guilds/werric-knight/shield/defensive-mastery.c");
    addChild("/guilds/werric-knight/shield/defensive-mastery.c",
        "/guilds/werric-knight/shield/shield-wall.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement("/guilds/werric-knight/shield/bulwark.c");
    addChild("/guilds/werric-knight/shield/bulwark.c",
        "/guilds/werric-knight/shield/defensive-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Shield Defense");
    Description("This research tree provides defensive techniques using shields.");
    Source("Werric Knight");
    addResearchElement("/guilds/werric-knight/shield/root.c");
    TreeRoot("/guilds/werric-knight/shield/root.c");

    ThirdLevel();
    FifthLevel();
    NinthLevel();
    FifteenthLevel();
    TwentyFirstLevel();
}

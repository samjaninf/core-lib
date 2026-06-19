//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved.
// See the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyFifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/abyssal-strike.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/shadow-lord-theory.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/abyssal-strike.c",
        "/guilds/league-of-assassins/shadow-lord-path/root.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/shadow-lord-theory.c",
        "/guilds/league-of-assassins/shadow-lord-path/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtySeventhLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/shadow-lords-precision.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/shadow-lords-precision.c",
        "/guilds/league-of-assassins/shadow-lord-path/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixtyNinthLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/deaths-embrace.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/shadow-lords-edge.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/deaths-embrace.c",
        "/guilds/league-of-assassins/shadow-lord-path/abyssal-strike.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/shadow-lords-edge.c",
        "/guilds/league-of-assassins/shadow-lord-path/abyssal-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventyFirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/improved-abyssal-strike.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/eternal-shadow.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/improved-abyssal-strike.c",
        "/guilds/league-of-assassins/shadow-lord-path/abyssal-strike.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/eternal-shadow.c",
        "/guilds/league-of-assassins/shadow-lord-path/deaths-embrace.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventyThirdLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/oblivion-blade.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/shadow-lords-swiftness.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/void-walker-form.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/void-theory.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/oblivion-blade.c",
        "/guilds/league-of-assassins/shadow-lord-path/deaths-embrace.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/shadow-lords-swiftness.c",
        "/guilds/league-of-assassins/shadow-lord-path/shadow-lords-precision.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/void-walker-form.c",
        "/guilds/league-of-assassins/shadow-lord-path/shadow-lords-edge.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/void-theory.c",
        "/guilds/league-of-assassins/shadow-lord-path/shadow-lord-theory.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventyFifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/improved-deaths-embrace.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/void-mark.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/improved-deaths-embrace.c",
        "/guilds/league-of-assassins/shadow-lord-path/deaths-embrace.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/void-mark.c",
        "/guilds/league-of-assassins/shadow-lord-path/void-theory.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventySeventhLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/shadow-execution.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/void-anatomy.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/shadow-execution.c",
        "/guilds/league-of-assassins/shadow-lord-path/oblivion-blade.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/void-anatomy.c",
        "/guilds/league-of-assassins/shadow-lord-path/oblivion-blade.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventyNinthLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/improved-oblivion-blade.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/perfect-abyssal-strike.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/shadow-lords-economy.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/oblivion-stance.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/improved-oblivion-blade.c",
        "/guilds/league-of-assassins/shadow-lord-path/oblivion-blade.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/perfect-abyssal-strike.c",
        "/guilds/league-of-assassins/shadow-lord-path/improved-abyssal-strike.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/shadow-lords-economy.c",
        "/guilds/league-of-assassins/shadow-lord-path/shadow-lords-swiftness.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/oblivion-stance.c",
        "/guilds/league-of-assassins/shadow-lord-path/void-anatomy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EightyFirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/void-rend.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/inexorable.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/void-rend.c",
        "/guilds/league-of-assassins/shadow-lord-path/shadow-execution.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/inexorable.c",
        "/guilds/league-of-assassins/shadow-lord-path/shadow-lords-edge.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EightyThirdLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/improved-shadow-execution.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/death-aspect.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/improved-shadow-execution.c",
        "/guilds/league-of-assassins/shadow-lord-path/shadow-execution.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/death-aspect.c",
        "/guilds/league-of-assassins/shadow-lord-path/eternal-shadow.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EightyFifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/annihilation-strike.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/pinnacle-of-shadow.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/fated-end.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/annihilation-strike.c",
        "/guilds/league-of-assassins/shadow-lord-path/void-rend.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/pinnacle-of-shadow.c",
        "/guilds/league-of-assassins/shadow-lord-path/eternal-shadow.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/fated-end.c",
        "/guilds/league-of-assassins/shadow-lord-path/void-mark.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EightySeventhLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/improved-void-rend.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/perfect-deaths-embrace.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/shadow-lords-will.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/improved-void-rend.c",
        "/guilds/league-of-assassins/shadow-lord-path/void-rend.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/perfect-deaths-embrace.c",
        "/guilds/league-of-assassins/shadow-lord-path/improved-deaths-embrace.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/shadow-lords-will.c",
        "/guilds/league-of-assassins/shadow-lord-path/pinnacle-of-shadow.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EightyNinthLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/improved-annihilation-strike.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/transcendent-killer.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/improved-annihilation-strike.c",
        "/guilds/league-of-assassins/shadow-lord-path/annihilation-strike.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/transcendent-killer.c",
        "/guilds/league-of-assassins/shadow-lord-path/void-anatomy.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinetyFirstLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/perfect-oblivion-blade.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/shadow-ascendancy.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/deaths-chosen.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/perfect-oblivion-blade.c",
        "/guilds/league-of-assassins/shadow-lord-path/improved-oblivion-blade.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/shadow-ascendancy.c",
        "/guilds/league-of-assassins/shadow-lord-path/inexorable.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/deaths-chosen.c",
        "/guilds/league-of-assassins/shadow-lord-path/transcendent-killer.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinetyThirdLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/perfect-shadow-execution.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/shadow-lord-mastery.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/perfect-shadow-execution.c",
        "/guilds/league-of-assassins/shadow-lord-path/improved-shadow-execution.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/shadow-lord-mastery.c",
        "/guilds/league-of-assassins/shadow-lord-path/inexorable.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinetyFifthLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/perfect-void-rend.c");
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/deaths-decree.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/perfect-void-rend.c",
        "/guilds/league-of-assassins/shadow-lord-path/improved-void-rend.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/deaths-decree.c",
        "/guilds/league-of-assassins/shadow-lord-path/fated-end.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinetyNinthLevel()
{
    addResearchElement("/guilds/league-of-assassins/shadow-lord-path/perfect-annihilation-strike.c");
    addChild("/guilds/league-of-assassins/shadow-lord-path/perfect-annihilation-strike.c",
        "/guilds/league-of-assassins/shadow-lord-path/improved-annihilation-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("shadow lord's path");
    Description("The rank-gated path of the shadow lord, representing the "
        "apex of the League of Assassins' teachings. This path contains "
        "the most powerful void-infused combat techniques, transcendent "
        "passive improvements, and persistent debuff capabilities "
        "available to the League's elite operatives.");
    Source("League of Assassins");
    TreeRoot("/guilds/league-of-assassins/shadow-lord-path/root.c");

    FirstLevel();
    SixtyFifthLevel();
    SixtySeventhLevel();
    SixtyNinthLevel();
    SeventyFirstLevel();
    SeventyThirdLevel();
    SeventyFifthLevel();
    SeventySeventhLevel();
    SeventyNinthLevel();
    EightyFirstLevel();
    EightyThirdLevel();
    EightyFifthLevel();
    EightySeventhLevel();
    EightyNinthLevel();
    NinetyFirstLevel();
    NinetyThirdLevel();
    NinetyFifthLevel();
    NinetyNinthLevel();
}
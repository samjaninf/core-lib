//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/werric-knight/defense/armor-proficiency.c");
    addChild("/guilds/werric-knight/defense/armor-proficiency.c",
        "/guilds/werric-knight/defense/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/werric-knight/defense/deflecting-blow.c");
    addChild("/guilds/werric-knight/defense/deflecting-blow.c",
        "/guilds/werric-knight/defense/armor-proficiency.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/werric-knight/defense/fortified-defense.c");
    addChild("/guilds/werric-knight/defense/fortified-defense.c",
        "/guilds/werric-knight/defense/deflecting-blow.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/werric-knight/defense/impenetrable-guard.c");
    addChild("/guilds/werric-knight/defense/impenetrable-guard.c",
        "/guilds/werric-knight/defense/fortified-defense.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/werric-knight/defense/guardian-stance.c");
    addChild("/guilds/werric-knight/defense/guardian-stance.c",
        "/guilds/werric-knight/defense/impenetrable-guard.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Defensive Tactics");
    Description("This research tree provides advanced defensive combat techniques, "
        "allowing knights to protect themselves and their allies.");
    Source("Werric Knight");
    addResearchElement("/guilds/werric-knight/defense/root.c");
    TreeRoot("/guilds/werric-knight/defense/root.c");

    FirstLevel();
    SeventhLevel();
    ThirteenthLevel();
    NineteenthLevel();
    TwentySeventhLevel();
}

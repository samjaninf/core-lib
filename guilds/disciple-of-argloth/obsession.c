//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/obsession/singular-focus.c");
    addChild("/guilds/disciple-of-argloth/obsession/singular-focus.c",
        "/guilds/disciple-of-argloth/obsession/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/obsession/relentless-pursuit.c");
    addChild("/guilds/disciple-of-argloth/obsession/relentless-pursuit.c",
        "/guilds/disciple-of-argloth/obsession/singular-focus.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/obsession/consuming-desire.c");
    addChild("/guilds/disciple-of-argloth/obsession/consuming-desire.c",
        "/guilds/disciple-of-argloth/obsession/relentless-pursuit.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/obsession/maddening-power.c");
    addChild("/guilds/disciple-of-argloth/obsession/maddening-power.c",
        "/guilds/disciple-of-argloth/obsession/consuming-desire.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/obsession/argloths-descent.c");
    addChild("/guilds/disciple-of-argloth/obsession/argloths-descent.c",
        "/guilds/disciple-of-argloth/obsession/maddening-power.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Obsession");
    Description("This research tree represents the all-consuming obsession "
        "that drove Argloth to corruption, granting powerful abilities at a cost.");
    Source("Disciple of Argloth");
    addResearchElement("/guilds/disciple-of-argloth/obsession/root.c");
    TreeRoot("/guilds/disciple-of-argloth/obsession/root.c");

    FirstLevel();
    EleventhLevel();
    TwentyFirstLevel();
    ThirtyThirdLevel();
    FortyNinthLevel();
}

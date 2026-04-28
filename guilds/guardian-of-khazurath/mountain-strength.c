//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/strength/crushing-blow.c");
    addChild("/guilds/guardian-of-khazurath/strength/crushing-blow.c",
        "/guilds/guardian-of-khazurath/strength/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/strength/titan-strike.c");
    addChild("/guilds/guardian-of-khazurath/strength/titan-strike.c",
        "/guilds/guardian-of-khazurath/strength/crushing-blow.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/strength/earthshaker.c");
    addChild("/guilds/guardian-of-khazurath/strength/earthshaker.c",
        "/guilds/guardian-of-khazurath/strength/titan-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/strength/avalanche-assault.c");
    addChild("/guilds/guardian-of-khazurath/strength/avalanche-assault.c",
        "/guilds/guardian-of-khazurath/strength/earthshaker.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/strength/mountain-rage.c");
    addChild("/guilds/guardian-of-khazurath/strength/mountain-rage.c",
        "/guilds/guardian-of-khazurath/strength/avalanche-assault.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Mountain Strength");
    Description("This research tree channels the strength of the mountains, "
        "granting powerful offensive abilities and enhanced damage.");
    Source("Guardian of Khazurath");
    addResearchElement("/guilds/guardian-of-khazurath/strength/root.c");
    TreeRoot("/guilds/guardian-of-khazurath/strength/root.c");

    ThirdLevel();
    EleventhLevel();
    NineteenthLevel();
    TwentyNinthLevel();
    FortyFirstLevel();
}

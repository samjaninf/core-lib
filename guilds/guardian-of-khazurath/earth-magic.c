//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/earth/stone-fist.c");
    addChild("/guilds/guardian-of-khazurath/earth/stone-fist.c",
        "/guilds/guardian-of-khazurath/earth/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/earth/earth-spike.c");
    addChild("/guilds/guardian-of-khazurath/earth/earth-spike.c",
        "/guilds/guardian-of-khazurath/earth/stone-fist.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/earth/tremor.c");
    addChild("/guilds/guardian-of-khazurath/earth/tremor.c",
        "/guilds/guardian-of-khazurath/earth/earth-spike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/earth/earthquake.c");
    addChild("/guilds/guardian-of-khazurath/earth/earthquake.c",
        "/guilds/guardian-of-khazurath/earth/tremor.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/earth/cataclysm.c");
    addChild("/guilds/guardian-of-khazurath/earth/cataclysm.c",
        "/guilds/guardian-of-khazurath/earth/earthquake.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Earth Magic");
    Description("This research tree provides limited earth and stone magic, "
        "allowing guardians to manipulate the element they know best.");
    Source("Guardian of Khazurath");
    addResearchElement("/guilds/guardian-of-khazurath/earth/root.c");
    TreeRoot("/guilds/guardian-of-khazurath/earth/root.c");

    ThirdLevel();
    EleventhLevel();
    NineteenthLevel();
    TwentyNinthLevel();
    FortyFirstLevel();
}

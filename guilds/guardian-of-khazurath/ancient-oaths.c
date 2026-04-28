//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/oaths/oath-of-stone.c");
    addChild("/guilds/guardian-of-khazurath/oaths/oath-of-stone.c",
        "/guilds/guardian-of-khazurath/oaths/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/oaths/oath-of-iron.c");
    addChild("/guilds/guardian-of-khazurath/oaths/oath-of-iron.c",
        "/guilds/guardian-of-khazurath/oaths/oath-of-stone.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/oaths/oath-of-the-mountain.c");
    addChild("/guilds/guardian-of-khazurath/oaths/oath-of-the-mountain.c",
        "/guilds/guardian-of-khazurath/oaths/oath-of-iron.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/oaths/eternal-vigil.c");
    addChild("/guilds/guardian-of-khazurath/oaths/eternal-vigil.c",
        "/guilds/guardian-of-khazurath/oaths/oath-of-the-mountain.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FiftyFirstLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/oaths/khazuraths-legacy.c");
    addChild("/guilds/guardian-of-khazurath/oaths/khazuraths-legacy.c",
        "/guilds/guardian-of-khazurath/oaths/eternal-vigil.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Ancient Oaths");
    Description("This research tree represents the ancient oaths sworn by the "
        "first guardians, granting powerful oath-bound abilities and ultimate defenses.");
    Source("Guardian of Khazurath");
    addResearchElement("/guilds/guardian-of-khazurath/oaths/root.c");
    TreeRoot("/guilds/guardian-of-khazurath/oaths/root.c");

    FirstLevel();
    ThirteenthLevel();
    TwentyFifthLevel();
    ThirtySeventhLevel();
    FiftyFirstLevel();
}

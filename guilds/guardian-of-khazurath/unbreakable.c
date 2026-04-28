//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/unbreakable/stand-firm.c");
    addChild("/guilds/guardian-of-khazurath/unbreakable/stand-firm.c",
        "/guilds/guardian-of-khazurath/unbreakable/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/unbreakable/unyielding.c");
    addChild("/guilds/guardian-of-khazurath/unbreakable/unyielding.c",
        "/guilds/guardian-of-khazurath/unbreakable/stand-firm.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/unbreakable/immovable-object.c");
    addChild("/guilds/guardian-of-khazurath/unbreakable/immovable-object.c",
        "/guilds/guardian-of-khazurath/unbreakable/unyielding.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/unbreakable/last-stand.c");
    addChild("/guilds/guardian-of-khazurath/unbreakable/last-stand.c",
        "/guilds/guardian-of-khazurath/unbreakable/immovable-object.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyNinthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/unbreakable/indestructible.c");
    addChild("/guilds/guardian-of-khazurath/unbreakable/indestructible.c",
        "/guilds/guardian-of-khazurath/unbreakable/last-stand.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Unbreakable");
    Description("This research tree embodies absolute endurance, "
        "granting abilities that make the guardian nearly impossible to defeat.");
    Source("Guardian of Khazurath");
    addResearchElement("/guilds/guardian-of-khazurath/unbreakable/root.c");
    TreeRoot("/guilds/guardian-of-khazurath/unbreakable/root.c");

    FirstLevel();
    EleventhLevel();
    TwentyFirstLevel();
    ThirtyThirdLevel();
    FortyNinthLevel();
}

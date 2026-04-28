//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/forbidden/dark-ritual.c");
    addChild("/guilds/disciple-of-argloth/forbidden/dark-ritual.c",
        "/guilds/disciple-of-argloth/forbidden/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/forbidden/blood-magic.c");
    addChild("/guilds/disciple-of-argloth/forbidden/blood-magic.c",
        "/guilds/disciple-of-argloth/forbidden/dark-ritual.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/forbidden/cursed-knowledge.c");
    addChild("/guilds/disciple-of-argloth/forbidden/cursed-knowledge.c",
        "/guilds/disciple-of-argloth/forbidden/blood-magic.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/forbidden/profane-power.c");
    addChild("/guilds/disciple-of-argloth/forbidden/profane-power.c",
        "/guilds/disciple-of-argloth/forbidden/cursed-knowledge.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/forbidden/ultimate-blasphemy.c");
    addChild("/guilds/disciple-of-argloth/forbidden/ultimate-blasphemy.c",
        "/guilds/disciple-of-argloth/forbidden/profane-power.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Forbidden Lore");
    Description("This research tree delves into knowledge that should remain hidden, "
        "granting powerful but dangerous magical abilities.");
    Source("Disciple of Argloth");
    addResearchElement("/guilds/disciple-of-argloth/forbidden/root.c");
    TreeRoot("/guilds/disciple-of-argloth/forbidden/root.c");

    FirstLevel();
    NinthLevel();
    SeventeenthLevel();
    TwentySeventhLevel();
    ThirtyNinthLevel();
}

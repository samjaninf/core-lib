//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/scholar/arcane-knowledge.c");
    addChild("/guilds/disciple-of-argloth/scholar/arcane-knowledge.c",
        "/guilds/disciple-of-argloth/scholar/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/scholar/enhanced-casting.c");
    addChild("/guilds/disciple-of-argloth/scholar/enhanced-casting.c",
        "/guilds/disciple-of-argloth/scholar/arcane-knowledge.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/scholar/spell-efficiency.c");
    addChild("/guilds/disciple-of-argloth/scholar/spell-efficiency.c",
        "/guilds/disciple-of-argloth/scholar/enhanced-casting.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/scholar/magical-mastery.c");
    addChild("/guilds/disciple-of-argloth/scholar/magical-mastery.c",
        "/guilds/disciple-of-argloth/scholar/spell-efficiency.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/scholar/arcanist-supreme.c");
    addChild("/guilds/disciple-of-argloth/scholar/arcanist-supreme.c",
        "/guilds/disciple-of-argloth/scholar/magical-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Dark Scholar");
    Description("This research tree represents scholarly mastery of forbidden lore, "
        "granting enhanced magical power and knowledge-based abilities.");
    Source("Disciple of Argloth");
    addResearchElement("/guilds/disciple-of-argloth/scholar/root.c");
    TreeRoot("/guilds/disciple-of-argloth/scholar/root.c");

    FirstLevel();
    NinthLevel();
    SeventeenthLevel();
    TwentySeventhLevel();
    ThirtyNinthLevel();
}

//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/knowledge/dark-insight.c");
    addChild("/guilds/disciple-of-argloth/knowledge/dark-insight.c",
        "/guilds/disciple-of-argloth/knowledge/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/knowledge/tainted-wisdom.c");
    addChild("/guilds/disciple-of-argloth/knowledge/tainted-wisdom.c",
        "/guilds/disciple-of-argloth/knowledge/dark-insight.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/knowledge/forbidden-secrets.c");
    addChild("/guilds/disciple-of-argloth/knowledge/forbidden-secrets.c",
        "/guilds/disciple-of-argloth/knowledge/tainted-wisdom.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/knowledge/corrupting-influence.c");
    addChild("/guilds/disciple-of-argloth/knowledge/corrupting-influence.c",
        "/guilds/disciple-of-argloth/knowledge/forbidden-secrets.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/knowledge/master-of-corruption.c");
    addChild("/guilds/disciple-of-argloth/knowledge/master-of-corruption.c",
        "/guilds/disciple-of-argloth/knowledge/corrupting-influence.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Corrupted Knowledge");
    Description("This research tree represents knowledge tainted by Argloth's fall, "
        "granting dark insights and corrupting magical abilities.");
    Source("Disciple of Argloth");
    addResearchElement("/guilds/disciple-of-argloth/knowledge/root.c");
    TreeRoot("/guilds/disciple-of-argloth/knowledge/root.c");

    ThirdLevel();
    EleventhLevel();
    NineteenthLevel();
    TwentyNinthLevel();
    FortyFirstLevel();
}

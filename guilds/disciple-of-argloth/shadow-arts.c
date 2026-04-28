//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/shadow/shadow-step.c");
    addChild("/guilds/disciple-of-argloth/shadow/shadow-step.c",
        "/guilds/disciple-of-argloth/shadow/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/shadow/cloak-of-shadows.c");
    addChild("/guilds/disciple-of-argloth/shadow/cloak-of-shadows.c",
        "/guilds/disciple-of-argloth/shadow/shadow-step.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/shadow/shadow-bolt.c");
    addChild("/guilds/disciple-of-argloth/shadow/shadow-bolt.c",
        "/guilds/disciple-of-argloth/shadow/cloak-of-shadows.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/shadow/dark-form.c");
    addChild("/guilds/disciple-of-argloth/shadow/dark-form.c",
        "/guilds/disciple-of-argloth/shadow/shadow-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyFirstLevel()
{
    addResearchElement("/guilds/disciple-of-argloth/shadow/become-shadow.c");
    addChild("/guilds/disciple-of-argloth/shadow/become-shadow.c",
        "/guilds/disciple-of-argloth/shadow/dark-form.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Shadow Arts");
    Description("This research tree teaches manipulation of shadows and darkness, "
        "with stealth and shadow-based magic.");
    Source("Disciple of Argloth");
    addResearchElement("/guilds/disciple-of-argloth/shadow/root.c");
    TreeRoot("/guilds/disciple-of-argloth/shadow/root.c");

    ThirdLevel();
    EleventhLevel();
    NineteenthLevel();
    TwentyNinthLevel();
    FortyFirstLevel();
}

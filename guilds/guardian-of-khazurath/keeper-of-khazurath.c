//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/keeper/guardian-aura.c");
    addChild("/guilds/guardian-of-khazurath/keeper/guardian-aura.c",
        "/guilds/guardian-of-khazurath/keeper/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/keeper/protective-stance.c");
    addChild("/guilds/guardian-of-khazurath/keeper/protective-stance.c",
        "/guilds/guardian-of-khazurath/keeper/guardian-aura.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/keeper/defend-the-halls.c");
    addChild("/guilds/guardian-of-khazurath/keeper/defend-the-halls.c",
        "/guilds/guardian-of-khazurath/keeper/protective-stance.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/keeper/fortress-commander.c");
    addChild("/guilds/guardian-of-khazurath/keeper/fortress-commander.c",
        "/guilds/guardian-of-khazurath/keeper/defend-the-halls.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement("/guilds/guardian-of-khazurath/keeper/eternal-guardian.c");
    addChild("/guilds/guardian-of-khazurath/keeper/eternal-guardian.c",
        "/guilds/guardian-of-khazurath/keeper/fortress-commander.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Keeper of Khazurath");
    Description("This research tree represents the sacred duty to guard Khazurath, "
        "granting abilities that protect allies and defend territory.");
    Source("Guardian of Khazurath");
    addResearchElement("/guilds/guardian-of-khazurath/keeper/root.c");
    TreeRoot("/guilds/guardian-of-khazurath/keeper/root.c");

    FirstLevel();
    NinthLevel();
    SeventeenthLevel();
    TwentySeventhLevel();
    ThirtyNinthLevel();
}

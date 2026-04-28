//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/arcane/mage-armor.c");
    addChild("/guilds/drambor-edlothiad/arcane/mage-armor.c",
        "/guilds/drambor-edlothiad/arcane/root.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/arcane/arcane-speed.c");
    addChild("/guilds/drambor-edlothiad/arcane/arcane-speed.c",
        "/guilds/drambor-edlothiad/arcane/mage-armor.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/arcane/enhanced-reflexes.c");
    addChild("/guilds/drambor-edlothiad/arcane/enhanced-reflexes.c",
        "/guilds/drambor-edlothiad/arcane/arcane-speed.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/arcane/spell-dancer.c");
    addChild("/guilds/drambor-edlothiad/arcane/spell-dancer.c",
        "/guilds/drambor-edlothiad/arcane/enhanced-reflexes.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FortyThirdLevel()
{
    addResearchElement("/guilds/drambor-edlothiad/arcane/arcane-mastery.c");
    addChild("/guilds/drambor-edlothiad/arcane/arcane-mastery.c",
        "/guilds/drambor-edlothiad/arcane/spell-dancer.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Arcane Warrior");
    Description("This research tree enhances melee combat prowess with "
        "arcane techniques and magical enhancements.");
    Source("Drambor Edlothiad");
    addResearchElement("/guilds/drambor-edlothiad/arcane/root.c");
    TreeRoot("/guilds/drambor-edlothiad/arcane/root.c");

    ThirdLevel();
    EleventhLevel();
    NineteenthLevel();
    TwentyNinthLevel();
    FortyThirdLevel();
}

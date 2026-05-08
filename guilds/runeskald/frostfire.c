//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/glacial-brand.c");
    addResearchElement("/guilds/runeskald/frostfire/runic-flame.c");
    addResearchElement("/guilds/runeskald/frostfire/frostfire-lore.c");
    addResearchElement("/guilds/runeskald/frostfire/ice-shard.c");
    addResearchElement("/guilds/runeskald/frostfire/ember-rune.c");

    addChild("/guilds/runeskald/frostfire/glacial-brand.c",
        "/guilds/runeskald/frostfire/root.c");
    addChild("/guilds/runeskald/frostfire/runic-flame.c",
        "/guilds/runeskald/frostfire/root.c");
    addChild("/guilds/runeskald/frostfire/frostfire-lore.c",
        "/guilds/runeskald/frostfire/root.c");
    addChild("/guilds/runeskald/frostfire/ice-shard.c",
        "/guilds/runeskald/frostfire/glacial-brand.c");
    addChild("/guilds/runeskald/frostfire/ember-rune.c",
        "/guilds/runeskald/frostfire/runic-flame.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SecondLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/frost-bolt.c");
    addResearchElement("/guilds/runeskald/frostfire/fire-bolt.c");

    addChild("/guilds/runeskald/frostfire/frost-bolt.c",
        "/guilds/runeskald/frostfire/glacial-brand.c");
    addChild("/guilds/runeskald/frostfire/fire-bolt.c",
        "/guilds/runeskald/frostfire/runic-flame.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/frost-nova.c");
    addResearchElement("/guilds/runeskald/frostfire/fire-nova.c");

    addChild("/guilds/runeskald/frostfire/frost-nova.c",
        "/guilds/runeskald/frostfire/frost-bolt.c");
    addChild("/guilds/runeskald/frostfire/fire-nova.c",
        "/guilds/runeskald/frostfire/fire-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FourthLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/glacial-armor.c");
    addResearchElement("/guilds/runeskald/frostfire/flame-shroud.c");
    addResearchElement("/guilds/runeskald/frostfire/frost-mastery.c");
    addResearchElement("/guilds/runeskald/frostfire/fire-mastery.c");

    addChild("/guilds/runeskald/frostfire/glacial-armor.c",
        "/guilds/runeskald/frostfire/frost-bolt.c");
    addChild("/guilds/runeskald/frostfire/flame-shroud.c",
        "/guilds/runeskald/frostfire/fire-bolt.c");
    addChild("/guilds/runeskald/frostfire/frost-mastery.c",
        "/guilds/runeskald/frostfire/frost-bolt.c");
    addChild("/guilds/runeskald/frostfire/fire-mastery.c",
        "/guilds/runeskald/frostfire/fire-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/frost-lance.c");
    addResearchElement("/guilds/runeskald/frostfire/flame-strike.c");

    addChild("/guilds/runeskald/frostfire/frost-lance.c",
        "/guilds/runeskald/frostfire/frost-nova.c");
    addChild("/guilds/runeskald/frostfire/flame-strike.c",
        "/guilds/runeskald/frostfire/fire-nova.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixthLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/elemental-attunement.c");
    addResearchElement("/guilds/runeskald/frostfire/frost-chain.c");
    addResearchElement("/guilds/runeskald/frostfire/fire-chain.c");

    addChild("/guilds/runeskald/frostfire/elemental-attunement.c",
        "/guilds/runeskald/frostfire/frostfire-lore.c");
    addChild("/guilds/runeskald/frostfire/frost-chain.c",
        "/guilds/runeskald/frostfire/frost-lance.c");
    addChild("/guilds/runeskald/frostfire/fire-chain.c",
        "/guilds/runeskald/frostfire/flame-strike.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/frostfire-bolt.c");
    addResearchElement("/guilds/runeskald/frostfire/frostfire-mantle.c");

    addChild("/guilds/runeskald/frostfire/frostfire-bolt.c",
        "/guilds/runeskald/frostfire/elemental-attunement.c");
    addChild("/guilds/runeskald/frostfire/frostfire-mantle.c",
        "/guilds/runeskald/frostfire/glacial-armor.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EighthLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/ice-storm.c");
    addResearchElement("/guilds/runeskald/frostfire/firestorm.c");
    addResearchElement("/guilds/runeskald/frostfire/blizzard-strike.c");
    addResearchElement("/guilds/runeskald/frostfire/inferno-surge.c");

    addChild("/guilds/runeskald/frostfire/ice-storm.c",
        "/guilds/runeskald/frostfire/frost-chain.c");
    addChild("/guilds/runeskald/frostfire/firestorm.c",
        "/guilds/runeskald/frostfire/fire-chain.c");
    addChild("/guilds/runeskald/frostfire/blizzard-strike.c",
        "/guilds/runeskald/frostfire/frost-chain.c");
    addChild("/guilds/runeskald/frostfire/inferno-surge.c",
        "/guilds/runeskald/frostfire/fire-chain.c");
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/frostfire-burst.c");

    addChild("/guilds/runeskald/frostfire/frostfire-burst.c",
        "/guilds/runeskald/frostfire/glacial-brand.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TenthLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/frostfire-torrent.c");
    addResearchElement("/guilds/runeskald/frostfire/dual-element-mastery.c");
    addResearchElement("/guilds/runeskald/frostfire/frostfire-mastery.c");

    addChild("/guilds/runeskald/frostfire/frostfire-torrent.c",
        "/guilds/runeskald/frostfire/frostfire-bolt.c");
    addChild("/guilds/runeskald/frostfire/dual-element-mastery.c",
        "/guilds/runeskald/frostfire/elemental-attunement.c");
    addChild("/guilds/runeskald/frostfire/frostfire-mastery.c",
        "/guilds/runeskald/frostfire/dual-element-mastery.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/glacier-crash.c");
    addResearchElement("/guilds/runeskald/frostfire/infernal-pyre.c");

    addChild("/guilds/runeskald/frostfire/glacier-crash.c",
        "/guilds/runeskald/frostfire/ice-storm.c");
    addChild("/guilds/runeskald/frostfire/infernal-pyre.c",
        "/guilds/runeskald/frostfire/firestorm.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwelfthLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/frostfire-wave.c");
    addResearchElement("/guilds/runeskald/frostfire/frostfire-weapon.c");
    addResearchElement("/guilds/runeskald/frostfire/frostfire-barrage.c");

    addChild("/guilds/runeskald/frostfire/frostfire-wave.c",
        "/guilds/runeskald/frostfire/frostfire-torrent.c");
    addChild("/guilds/runeskald/frostfire/frostfire-weapon.c",
        "/guilds/runeskald/frostfire/dual-element-mastery.c");
    addChild("/guilds/runeskald/frostfire/frostfire-barrage.c",
        "/guilds/runeskald/frostfire/frostfire-bolt.c");
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/frostfire-aura.c");
    addResearchElement("/guilds/runeskald/frostfire/frost-fire-aegis.c");

    addChild("/guilds/runeskald/frostfire/frostfire-aura.c",
        "/guilds/runeskald/frostfire/frostfire-burst.c");
    addChild("/guilds/runeskald/frostfire/frost-fire-aegis.c",
        "/guilds/runeskald/frostfire/frostfire-aura.c");
}

/////////////////////////////////////////////////////////////////////////////
private void SixteenthLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/frostfire-cataclysm.c");

    addChild("/guilds/runeskald/frostfire/frostfire-cataclysm.c",
        "/guilds/runeskald/frostfire/frostfire-wave.c");
}

/////////////////////////////////////////////////////////////////////////////
private void EighteenthLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/elemental-reckoning.c");

    addChild("/guilds/runeskald/frostfire/elemental-reckoning.c",
        "/guilds/runeskald/frostfire/frostfire-cataclysm.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentiethLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/elemental-dominion.c");

    addChild("/guilds/runeskald/frostfire/elemental-dominion.c",
        "/guilds/runeskald/frostfire/frostfire-aura.c");
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySecondLevel()
{
    addResearchElement("/guilds/runeskald/frostfire/twin-elemental-form.c");

    addChild("/guilds/runeskald/frostfire/twin-elemental-form.c",
        "/guilds/runeskald/frostfire/elemental-dominion.c");
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("Frostfire");
    Source("Runeskald Guild");
    Description("This tree covers the runeskaldic frostfire tradition: "
        "glacial ice bolts, runic fire bolts, combined frostfire explosions, "
        "sustained elemental auras, and the ultimate elemental dominion.");

    addResearchElement("/guilds/runeskald/frostfire/root.c");
    TreeRoot("/guilds/runeskald/frostfire/root.c");

    FirstLevel();
    SecondLevel();
    ThirdLevel();
    FourthLevel();
    FifthLevel();
    SixthLevel();
    SeventhLevel();
    EighthLevel();
    NinthLevel();
    TenthLevel();
    EleventhLevel();
    TwelfthLevel();
    ThirteenthLevel();
    SixteenthLevel();
    EighteenthLevel();
    TwentiethLevel();
    TwentySecondLevel();
}

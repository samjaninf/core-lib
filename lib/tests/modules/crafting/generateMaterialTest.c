//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/tests/framework/testFixture.c";

object Dictionary;

/////////////////////////////////////////////////////////////////////////////
void Setup()
{
    Dictionary = load_object("/lib/dictionaries/craftingDictionary.c");
}

/////////////////////////////////////////////////////////////////////////////
void CleanUp()
{
    destruct(Dictionary);
}

/////////////////////////////////////////////////////////////////////////////
void CanGenerateItemsWithOnlyComponent()
{
    object sword = clone_object("/lib/instances/items/weapons/swords/long-sword.c");
    Dictionary.getRandomCraftingMaterial(sword);

    ExpectTrue(mappingp(sword.query("crafting materials")));

    mapping components = sword.query("crafting materials");
    ExpectEq(4, sizeof(components));
    ExpectTrue(member(components, "blade"));
    ExpectTrue(member(components, "crossguard"));
    ExpectTrue(member(components, "hilt"));
    ExpectTrue(member(components, "pommel"));
}

/////////////////////////////////////////////////////////////////////////////
void CanGenerateItemsWithoutSubcomponents()
{
    object armor = clone_object("/lib/instances/items/armor/medium-armor/chainmail.c");
    Dictionary.getRandomCraftingMaterial(armor);
    ExpectTrue(mappingp(armor.query("crafting materials")));

    mapping components = armor.query("crafting materials");
    ExpectEq(2, sizeof(components));
    ExpectTrue(member(components, "metal"));
    ExpectTrue(member(components, "textile"));
}

/////////////////////////////////////////////////////////////////////////////
void CanGenerateItemsWithBothSubcomponentsAndMaterials()
{
    object ring = clone_object("/lib/instances/items/armor/accessories/ring.c");
    ring.unset("primary crafting material");
    ring.unset("material");
    ring.unset("crafting materials");

    Dictionary.getRandomCraftingMaterial(ring);
    ExpectTrue(mappingp(ring.query("crafting materials")));

    mapping components = ring.query("crafting materials");
    ExpectEq(2, sizeof(components));
    ExpectTrue(member(components, "metal"));
    ExpectTrue(member(components, "ring design"));
    ExpectTrue(ring.query("primary crafting material"));
}

/////////////////////////////////////////////////////////////////////////////
void HonorsGenerationWithDefaultMaterial()
{
    object ring = clone_object("/lib/instances/items/armor/accessories/ring.c");
    ring.unset("primary crafting material");
    ring.unset("material");
    ring.unset("crafting materials");

    Dictionary.getRandomCraftingMaterial(ring, 1);
    ExpectTrue(mappingp(ring.query("crafting materials")));

    mapping components = ring.query("crafting materials");
    ExpectEq(2, sizeof(components));
    ExpectTrue(member(components, "metal"));
    ExpectEq("silver", components["metal"]);
}
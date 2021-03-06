//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/tests/framework/testFixture.c";

object Element;
object Dictionary;

/////////////////////////////////////////////////////////////////////////////
void Setup()
{
    Dictionary = load_object("/lib/dictionaries/environmentDictionary.c");
    Dictionary->setYear(1);
    Dictionary->setDay(92);
    Dictionary->timeOfDay("noon");

    Element = clone_object("/lib/tests/support/environment/fakeFeature.c");
}

/////////////////////////////////////////////////////////////////////////////
void CleanUp()
{
    destruct(Element);
    destruct(Dictionary);
}

/////////////////////////////////////////////////////////////////////////////
void DefaultDescriptionDisplaysCorrectly()
{
    ExpectEq("a stand of majestic oak trees with branches laden with acorns, noonishly glowing",
        Element->description("default", Dictionary->ambientLight()));
}

/////////////////////////////////////////////////////////////////////////////
void DawnDescriptionShowsCorrectTimeOfDay()
{
    Dictionary->timeOfDay("dawn");
    ExpectEq("a stand of oak trees with branches laden with acorns that the faint dawn light is just beginning to illuminate",
        Element->description(0, Dictionary->ambientLight()));
}

/////////////////////////////////////////////////////////////////////////////
void MorningDescriptionShowsCorrectTimeOfDayAndSeason()
{
    Dictionary->timeOfDay("morning");
    ExpectEq("a stand of majestic oak trees with branches laden with acorns",
        Element->description(0, Dictionary->ambientLight()));

    Dictionary->season("autumn");
    ExpectEq("a stand of majestic oak trees carpeting the ground in fallen leaves of red, yellow, and orange lit from a ray of sunshine piercing through the canopy",
        Element->description(0, Dictionary->ambientLight()));
}

/////////////////////////////////////////////////////////////////////////////
void NoonDescriptionShowsCorrectTimeOfDay()
{
    Dictionary->timeOfDay("noon");
    ExpectEq("a stand of majestic oak trees with branches laden with acorns, noonishly glowing",
        Element->description(0, Dictionary->ambientLight()));
}

/////////////////////////////////////////////////////////////////////////////
void WinterAfternoonDescriptionShowsCorrectTimeOfDayAndSeason()
{
    Dictionary->timeOfDay("afternoon");
    Dictionary->season("winter");
    ExpectEq("a stand of majestic oak trees covered with a thick layer of snow, afternooningly dreary",
        Element->description(0, Dictionary->ambientLight()));
}

/////////////////////////////////////////////////////////////////////////////
void SpringEveningDescriptionShowsCorrectTimeOfDayAndSeason()
{
    Dictionary->timeOfDay("evening");
    Dictionary->season("spring");
    ExpectEq("a stand of majestic oak trees with leaves just beginning to bud, oppressive in its late-day glory",
        Element->description(0, Dictionary->ambientLight()));
}

/////////////////////////////////////////////////////////////////////////////
void DuskDescriptionShowsCorrectTimeOfDay()
{
    Dictionary->timeOfDay("dusk");
    ExpectEq("a stand of oak trees with branches laden with acorns, the details of which the last failing light of the day barely show",
        Element->description(0, Dictionary->ambientLight()));
}

/////////////////////////////////////////////////////////////////////////////
void NightDescriptionShowsCorrectTimeOfDay()
{
    Dictionary->timeOfDay("night");
    ExpectEq("the silhouette of deciduous trees outlined in the dark",
        Element->description(0, Dictionary->ambientLight()));
}

/////////////////////////////////////////////////////////////////////////////
void MidnightDescriptionShowsCorrectTimeOfDayAndChangesForSeason()
{
    Dictionary->timeOfDay("midnight");
    Dictionary->setYear(1);
    Dictionary->season("spring");

    ExpectEq("a massive silhouette of trees outlined in eery black", 
        Element->description("default", Dictionary->ambientLight()), "spring");

    Dictionary->season("summer");
    ExpectEq("the silhouette of deciduous trees outlined in eery black", 
        Element->description("default", Dictionary->ambientLight()), "summer");

    Dictionary->season("autumn");
    ExpectEq("the silhouette of oak trees outlined in eery black. There is a creepy wisp of black energy here",
        Element->description("default", Dictionary->ambientLight()), "autumn");

    Dictionary->season("winter");
    ExpectEq("the silhouette of deciduous trees outlined in eery black", 
        Element->description("default", Dictionary->ambientLight()), "winter");
}

/////////////////////////////////////////////////////////////////////////////
void MidnightDescriptionShowsCorrectTimeOfDayAndChangesForMoonPhases()
{
    Dictionary->timeOfDay("midnight");

    Dictionary->setDay(0);
    ExpectEq("a massive silhouette of trees outlined in eery black",
        Element->description("default", Dictionary->ambientLight()), "new moon");

    Dictionary->setDay(6);
    ExpectEq("the silhouette of deciduous trees outlined in eery black",
        Element->description("default", Dictionary->ambientLight()), "crescent");

    Dictionary->setDay(13);
    ExpectEq("the silhouette of oak trees outlined in eery black",
        Element->description("default", Dictionary->ambientLight()), "full");
}

/////////////////////////////////////////////////////////////////////////////
void StateChangesUpdateDescription()
{
    Dictionary->timeOfDay("dawn");
    Dictionary->season("winter");
    ExpectEq("a stand of charred tree stumps covered with a murky mist that the sickly first rays barely illuminate",
        Element->description("deadified", Dictionary->ambientLight()));
}

/////////////////////////////////////////////////////////////////////////////
void DefaultDescriptionUsedWhenStateDoesNotHaveDescription()
{
    Dictionary->timeOfDay("dawn");
    Dictionary->season("summer");
    ExpectEq("a stand of oak trees with branches laden with acorns that the faint dawn light is just beginning to illuminate",
        Element->description("blarg", Dictionary->ambientLight()));
}

/////////////////////////////////////////////////////////////////////////////
void DefaultLongDisplaysCorrectly()
{
    ExpectEq("You see many majestic oaks with branches laden with acorns, noonishly glowing.\n",
        Element->long());
}

/////////////////////////////////////////////////////////////////////////////
void LongForStateDisplaysCorrectly()
{
    Dictionary->timeOfDay("night");
    Dictionary->season("winter");

    Element->currentState("deadified");
    ExpectEq("You see many charred tree stumps covered with a murky mist "
        "outlined in the dark.\n",
        Element->long());
}

/////////////////////////////////////////////////////////////////////////////
void DefaultAliasesDisplayCorrectly()
{
    ExpectEq(({ "fake feature", "oak", "stand", "stand of oak trees" }),
        Element->aliases());
}

/////////////////////////////////////////////////////////////////////////////
void StateAliasesDisplayCorrectly()
{
    ExpectEq(({ "charred stumps", "fake feature", "stumps", "tree stumps" }),
        Element->aliases("deadified"));
}

/////////////////////////////////////////////////////////////////////////////
void SuppressEntryMessageSetsFlag()
{
    ExpectTrue(Element->displayActionText());
    Element->testSuppressEntryMessage();
    ExpectFalse(Element->displayActionText());
}

/////////////////////////////////////////////////////////////////////////////
void FullyRandomDescriptionsCanBeDisplayed()
{
    object randomTerrain = clone_object(
        "/lib/tests/support/environment/fakeRandomTerrain.c");

    ExpectEq("a cedar grotto", randomTerrain->description("default", 10));
    destruct(randomTerrain);
}

/////////////////////////////////////////////////////////////////////////////
void WhenMessagesAreSuppressedDescriptionCanBeNull()
{
    object itemWithoutDescription = clone_object(
        "/lib/tests/support/environment/itemWithoutDescription.c");

    ExpectFalse(itemWithoutDescription->description());
    destruct(itemWithoutDescription);
}

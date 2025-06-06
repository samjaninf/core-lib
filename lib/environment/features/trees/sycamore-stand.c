//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/features/baseFeature.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    Name("sycamore stand");
    addAdjectives(({ "majestic", "towering", "tall", "massive" }));
    addTimeOfDayDescription("dawn", ({ " that the faint dawn light is just beginning to illuminate" }));
    addTimeOfDayDescription("dusk", ({ ", the details of which the last failing light of the day barely show" }));
    addTimeOfDayDescription("night", ({ " outlined in the dark", " discernable only as a darker shade of black" }));
    addSeasonDescription("winter", ({ " covered with a thick layer of snow",
        " layered with a dusting of snow", " encased in a film of ice" }));
    addSeasonDescription("spring", ({ " with leaves just beginning to bud",
        " sprouting new growth" }));
    addSeasonDescription("summer", ({ " with branches laden with their small fruit",
        " covered with a thick blanket of leaves" }));
    addSeasonDescription("autumn", ({ " carpeting the ground in leaves of yellow and orange",
        " with leaves in a vivid array of yellow and orange colors" }));

    addDescriptionTemplate("a stand of ##Adjective## sycamore trees");

    harvestableResource("sycamore", 25, "/lib/instances/items/materials/wood/sycamore.c",
        "a heavily-forested stand of sycamore trees. Several trees remain",
        ({ "deciduous tree", "sycamore tree", "tree" }));
    harvestRequiresTool("sycamore", "axe");

    harvestableResource("sycamore fruit", 25,
        "/lib/instances/items/food/plants/fruit/sycamore-fruit.c", 0,
        ({ "fruit" }));
    limitHarvestBySeason("sycamore fruit", "summer");
}

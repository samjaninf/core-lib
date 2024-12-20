//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/features/baseFeature.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    Name("mesquite stand");
    addAdjectives(({ "majestic", "towering", "tall", "massive" }));
    addTimeOfDayDescription("dawn", ({ " that the faint dawn light is just beginning to illuminate" }));
    addTimeOfDayDescription("dusk", ({ ", the details of which the last failing light of the day barely show" }));
    addTimeOfDayDescription("night", ({ " outlined in the dark", " discernable only as a darker shade of black" }));
    addSeasonDescription("winter", ({ " covered with a thick layer of snow",
        " layered with a dusting of snow", " encased in a film of ice" }));
    addSeasonDescription("spring", ({ " with leaves just beginning to bud",
        " sprouting new growth" }));
    addSeasonDescription("summer", ({ " with branches laden with seed pods",
        " covered with a thick blanket of leaves" }));
    addSeasonDescription("autumn", ({ " carpeting the ground in fallen leaves of red, yellow, and orange",
        " with leaves in a vivid array of yellow and brown colors" }));

    addDescriptionTemplate("a stand of ##Adjective## mesquite trees");

    harvestableResource("mesquite", 25, "/lib/instances/items/materials/wood/mesquite.c",
        "a heavily-forested stand of mesquite trees. Several trees remain",
        ({ "deciduous tree", "mesquite tree", "tree" }));
    harvestRequiresTool("mesquite", "axe");

    harvestableResource("mesquite seed pod", 25,
        "/lib/instances/items/food/plants/seeds/mesquite-seed-pod.c", 0,
        ({ "seed pod", "pod", "seed" }));
    limitHarvestBySeason("mesquite seed pod", "summer");
}

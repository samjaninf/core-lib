//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Porta di Ferro e Stretta");
    addSpecification("source", "Scion of Dhuras");
    addSpecification("description", "This skill provides the user with the "
        "knowledge of a defensive maneuver where the dominant foot is "
        "forward and the other foot placed sideways, both knees bent. The "
        "haft is held just inside and above the knee with the hammer's fluke or head "
        "pointed at the foe's face. From this position, it is possible to "
        "easily launch several mauls and strikes.");
    addSpecification("limited by", (["equipment":({
        "hammer" })]));

    addPrerequisite("level", 
        (["type":"level", 
          "guild": "Scion of Dhuras",
          "value": 7 ]));

    addPrerequisite("/guilds/scion/paths/hammer/forms/eisenport.c",
        (["type":"research"]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus defense", 2);
    addSpecification("bonus attack", 1);
    addSpecification("bonus parry", 2);
}

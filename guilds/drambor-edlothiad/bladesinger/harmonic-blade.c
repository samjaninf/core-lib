//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Harmonic Blade");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research tunes the blade to harmonic frequencies, improving strikes.");

    addPrerequisite("/guilds/drambor-edlothiad/bladesinger/song-of-steel.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 19]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus long sword", 4);
    addSpecification("bonus damage", 2);
}
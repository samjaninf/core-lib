//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "blood-of-the-firstborn");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research 53.");

    addPrerequisite("/guilds/drambor-edlothiad/heritage/System.Collections.Hashtable System.Collections.Hashtable System.Collections.Hashtable.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": mind-beyond-time]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("", );
}
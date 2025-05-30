//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Basic Administration");
    addSpecification("source", "domains");
    addSpecification("description", "This skill provides the user with the "
        "knowledge required to oversee basic domain administration tasks.");
    addSpecification("research type", "granted");
}

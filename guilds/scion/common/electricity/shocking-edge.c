//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

protected string WeaponType = "ERROR";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
}

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        knowledgeResearchItem::reset(arg);
        addSpecification("name", "Shocking Edge");
        addSpecification("source", "Scion of Dhuras Guild");
        addSpecification("description", "This skill provides the user with the "
            "knowledge of the shocking edge technique. This form enhances "
            "the scion's Shock Strike and Lightning Strike abilities.");
        Setup();

        addPrerequisite("level",
            (["type":"level",
                "guild" : "Scion of Dhuras",
                "value" : 15]));
        addPrerequisite(sprintf("lib/guilds/scion/paths/%s/electricity/energized-strike.c", WeaponType),
            (["type":"research"]));

        addSpecification("research type", "points");
        addSpecification("research cost", 1);
        addSpecification("affected research", (["Shock Strike":2,
            "Lightning Strike" : 3]));
    }
}

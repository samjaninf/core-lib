//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/compositeResearchTemplate.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        activeResearchItem::reset(arg);
        addSpecification("name", "ABAC (4 eight bar sections)");
        addSpecification("source", "bard");
        addSpecification("description", "This research provides the user with the "
            "knowledge of how to create songs structured as four 8-bar sections, "
            "the first and third being musically identical.");

        addSpecification("research type", "points");
        addSpecification("research cost", 1);
        addSpecification("spell point cost", 25);
        addSpecification("stamina point cost", 25);

        addSpecification("segments", ({
            (["verse 1": ({ "lyric", "instrumental rhythm" })]),
            (["chorus 1": ({ "lyric", "chorus lyric", "instrumental rhythm" })]),
            (["verse 2": ({ "lyric", "instrumental rhythm" })]),
            (["bridge": ({ "lyric", "instrumental rhythm" })]),
        }));
        addSpecification("event handler", "abacEvent");
    }
}
//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/guilds/scion/common/spirit/spectral-edge.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    WeaponType = "axe";

    addSpecification("limited by", (["equipment":({ "axe" })]));
}

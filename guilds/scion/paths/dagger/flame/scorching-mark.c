//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/guilds/scion/common/flame/scorching-mark.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    WeaponType = "dagger";

    addSpecification("limited by", (["equipment":({ "dagger", "short sword" })]));
}

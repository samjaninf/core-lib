//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/guilds/scion/common/evocation/energy-shard.c";

/////////////////////////////////////////////////////////////////////////////
protected void SetupResearch()
{
    WeaponType = "staff";
    WeaponSkill = "staff";
    ValidWeaponTypes = ({ "staff" });

    addSpecification("limited by", (["equipment": ValidWeaponTypes]));
}

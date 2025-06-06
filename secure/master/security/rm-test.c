//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/secure/master/security/priviledgeGroup.c";

/////////////////////////////////////////////////////////////////////////////
protected nomask void applyGroupDetails()
{
    setName("/lib/tests/commands/wizard/rmTest");
    addPermission("/players/earl", Read | Write);

    addPriviledgedEfun("copy_file");
    addPriviledgedEfun("file_size");
    addPriviledgedEfun("mkdir");
}

//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************

/////////////////////////////////////////////////////////////////////////////
protected nomask string convertString(string input)
{
    string ret = input;
    if (!stringp(input))
    {
        ret = "";
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
protected nomask int connect()
{
    int ret = 0;

    if (!sizeof(db_handles()))
    {
        ret = db_connect(RealmsDatabase());
    }
    else
    {
        ret = db_handles()[0];
    }
    if (db_error(ret))
    {
        raise_error(db_error(ret));
    }

    if (ret)
    {
        db_exec(ret, "use " + RealmsDatabase() + ";");
    }

    while (db_fetch(ret));
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
protected nomask void disconnect(int handle)
{
    while(db_fetch(handle));
    db_close(handle);
}

/////////////////////////////////////////////////////////////////////////////
protected nomask string sanitizeString(string value)
{
    if (!value)
    {
        value = "";
    }
    
    return db_conv_string(value);
}

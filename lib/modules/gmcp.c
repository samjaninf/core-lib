//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/core/thing.c";
#include "/sys/telnet.h"

// Whether the connected client has enabled GMCP (sent IAC DO GMCP). Telnet
// negotiation state lives on the connection, but the interactive object can be
// swapped via exec(); we re-advertise and the flag is restored by the client's
// DO response, so this is nosave and transient.
private nosave int gmcpEnabled = 0;

// The per-player GMCP event subscriber. Cloned on GMCP enable and destructed
// on GMCP disable or player destruct. Kept nosave so it is never persisted and
// always rebuilt fresh when the client re-negotiates.
private nosave object gmcpSubscriber = 0;

/////////////////////////////////////////////////////////////////////////////
protected int writeBytesToConnection(int *data)
{
    int ret = 0;

    if (interactive(this_object()) && pointerp(data) && sizeof(data))
    {
        ret = binary_message(data, 0);
    }

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask int gmcpIsEnabled()
{
    return gmcpEnabled;
}

/////////////////////////////////////////////////////////////////////////////
protected nomask void setGmcpEnabled(int val)
{
    gmcpEnabled = val;
}

/////////////////////////////////////////////////////////////////////////////
public nomask int sendGmcp(string package, string json)
{
    int ret = 0;

    if (gmcpEnabled && stringp(package) && stringp(json))
    {
        int *frame = ({ IAC, SB, TELOPT_GMCP });
        string payload = sprintf("%s %s", package, json);

        foreach (int character in to_array(payload))
        {
            if (character == IAC)
            {
                frame += ({ IAC });
            }
            frame += ({ character });
        }

        frame += ({ IAC, SE });
        ret = writeBytesToConnection(frame);
    }

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask int sendOutOfBand(string package, mapping data)
{
    int ret = 0;

    if (stringp(package) && mappingp(data))
    {
        ret = sendGmcp(package,
            getService("messageEncoding")->encodeValue(data));
    }

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask int advertiseGmcp()
{
    return writeBytesToConnection(({ IAC, WILL, TELOPT_GMCP }));
}

/////////////////////////////////////////////////////////////////////////////
protected nomask void receiveGmcp(string body)
{
    // Placeholder for future client->server packages.
    // Intentionally a no-op for now beyond acknowledging enablement.
}

/////////////////////////////////////////////////////////////////////////////
private nomask void enableGmcpSubscriber()
{
    if (!objectp(gmcpSubscriber))
    {
        gmcpSubscriber = clone_object("/lib/modules/gmcp/gmcpEventSubscriber.c");
    }
    gmcpSubscriber->setPlayer(this_object());
    this_object()->registerEvent(gmcpSubscriber);

    gmcpSubscriber->pushScore();
    gmcpSubscriber->pushVitals();
    gmcpSubscriber->pushInventory();
}

/////////////////////////////////////////////////////////////////////////////
private nomask void disableGmcpSubscriber()
{
    if (objectp(gmcpSubscriber))
    {
        this_object()->unregisterEvent(gmcpSubscriber);
        destruct(gmcpSubscriber);
    }
    gmcpSubscriber = 0;
}

/////////////////////////////////////////////////////////////////////////////
private nomask void pushEnvironmentSnapshots()
{
    object env = environment(this_object());

    if (objectp(env) && function_exists("pushRoomSnapshot", env))
    {
        env->pushRegionSnapshotForViewer(this_object());
        env->pushRoomSnapshot(this_object());
    }
}

/////////////////////////////////////////////////////////////////////////////
public nomask void telnetNegotiation(int command, int option, int *data)
{
    if (option == TELOPT_GMCP)
    {
        if (command == DO)
        {
            gmcpEnabled = 1;
            pushEnvironmentSnapshots();
            enableGmcpSubscriber();
        }
        else if (command == DONT)
        {
            disableGmcpSubscriber();
            gmcpEnabled = 0;
        }
        else if (command == SB && pointerp(data))
        {
            receiveGmcp(to_string(data));
        }
    }
}

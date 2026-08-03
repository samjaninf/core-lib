//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
#ifndef gmcp_h
#define gmcp_h

// Telnet protocol bytes (see RFC 854). Defined here rather than relying on the
// driver's /sys/telnet.h so the GMCP module remains self-contained and unit
// testable outside a live interactive connection.
#define IAC   255   // Interpret As Command
#define DONT  254
#define DO    253
#define WONT  252
#define WILL  251
#define SB    250   // Subnegotiation Begin
#define SE    240   // Subnegotiation End

// GMCP (Generic MUD Communication Protocol) is telnet option 201. The client
// sends IAC DO GMCP to enable it; the server sends IAC WILL GMCP to advertise
// it. Once enabled, structured data flows as:
//     IAC SB GMCP "Package.SubPackage <json>" IAC SE
#define TELOPT_GMCP 201

#endif

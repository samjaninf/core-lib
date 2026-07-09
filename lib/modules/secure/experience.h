//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
#ifndef experienceModule_h
#define experienceModule_h

private mapping *observations = ({ });

/////////////////////////////////////////////////////////////////////////////
private nomask mapping cloneObservationEntry(mapping observation)
{
    mapping ret = observation + ([]);

    if (member(ret, "participants") && pointerp(ret["participants"]))
    {
        ret["participants"] = ret["participants"] + ({ });
    }

    if (member(ret, "context") && mappingp(ret["context"]))
    {
        ret["context"] = ret["context"] + ([]);
    }

    if (member(ret, "metadata") && mappingp(ret["metadata"]))
    {
        ret["metadata"] = ret["metadata"] + ([]);
    }

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
static nomask void loadExperience(mapping data, object persistence)
{
    if (isValidPersistenceObject(persistence))
    {
        mixed savedData = persistence->extractSaveData("experience", data);

        if (pointerp(savedData))
        {
            observations = ({ });

            foreach(mixed observation in savedData)
            {
                if (mappingp(observation))
                {
                    observations += ({ cloneObservationEntry(observation) });
                }
            }
        }
    }
}

/////////////////////////////////////////////////////////////////////////////
static nomask mapping sendExperience()
{
    return ([
        "experience": map(observations, #'cloneObservationEntry)
    ]);
}

#endif

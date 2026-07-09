//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/modules/secure/dataServices/dataService.c";

/////////////////////////////////////////////////////////////////////////////
private nomask string serializeArray(string *data)
{
    return pointerp(data) ? implode(data, "##") : "";
}

/////////////////////////////////////////////////////////////////////////////
private nomask string *deserializeArray(string data)
{
    return stringp(data) && (data != "") ? explode(data, "##") : ({ });
}

/////////////////////////////////////////////////////////////////////////////
private nomask string serializeMapping(mapping data)
{
    string ret = "";

    if (mappingp(data))
    {
        foreach(string key in m_indices(data))
        {
            ret += sprintf("%s:=:%O##", key, data[key]);
        }
    }

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
private nomask mixed parseScalar(string value)
{
    mixed ret = value;

    if (stringp(value) && sizeof(regexp(({ value }), "^-?[0-9]+$")))
    {
        ret = to_int(value);
    }
    else if (stringp(value) && sizeof(regexp(({ value }), "^\".*\"$")))
    {
        ret = value[1..(sizeof(value) - 2)];
    }

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
private nomask mapping deserializeMapping(string data)
{
    mapping ret = ([]);

    if (stringp(data) && (data != ""))
    {
        foreach(string item in explode(data, "##") - ({ "" }))
        {
            string key = "";
            string value = "";

            if (sscanf(item, "%s:=:%s", key, value) == 2)
            {
                ret[key] = parseScalar(value);
            }
        }
    }

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
protected nomask mapping getExperience(int playerId, int dbHandle)
{
    mapping ret = (["experience":({}) ]);

    string query = sprintf("select observationType, actor, subject, "
        "participants, observationTime, location, "
        "observationContext, observationMetadata "
        "from experienceObservations where playerid = '%d' "
        "order by id asc;", playerId);

    db_exec(dbHandle, query);

    if (db_error(dbHandle))
    {
        while (db_fetch(dbHandle));
        query = sprintf("select observationType, actor, subject, "
            "participants, observationTime, location, context, metadata "
            "from experienceObservations where playerid = '%d' "
            "order by id asc;", playerId);
        db_exec(dbHandle, query);
    }

    mixed result;
    do
    {
        result = db_fetch(dbHandle);
        if (result)
        {
            ret["experience"] += ({ ([
                "type": convertString(result[0]),
                "actor": convertString(result[1]),
                "subject": convertString(result[2]),
                "participants": deserializeArray(convertString(result[3])),
                "timestamp": to_int(result[4]),
                "location": convertString(result[5]),
                "context": deserializeMapping(convertString(result[6])),
                "metadata": deserializeMapping(convertString(result[7]))
            ]) });
        }
    } while (result);

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
protected nomask void saveExperience(int dbHandle, int playerId,
    mapping playerData)
{
    string query = sprintf("call pruneExperience(%d);", playerId);
    db_exec(dbHandle, query);
    mixed result = db_fetch(dbHandle);

    if (member(playerData, "experience") && pointerp(playerData["experience"]) &&
        sizeof(playerData["experience"]))
    {
        foreach(mapping observation in playerData["experience"])
        {
            query = sprintf("call saveExperienceObservation(%d,'%s','%s','%s',"
                "'%s',%d,'%s','%s','%s');",
                playerId,
                sanitizeString(observation["type"]),
                sanitizeString(observation["actor"]),
                sanitizeString(observation["subject"]),
                sanitizeString(serializeArray(observation["participants"])),
                to_int(observation["timestamp"]),
                sanitizeString(observation["location"]),
                sanitizeString(serializeMapping(observation["context"])),
                sanitizeString(serializeMapping(observation["metadata"])));

            db_exec(dbHandle, query);
            result = db_fetch(dbHandle);
        }
    }
}

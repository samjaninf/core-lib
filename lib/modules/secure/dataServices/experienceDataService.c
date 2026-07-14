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
private nomask int playerIdByName(string playerName, int dbHandle)
{
    int ret = 0;

    string query = sprintf("select id from players where name = '%s';",
        sanitizeString(lower_case(playerName)));
    db_exec(dbHandle, query);
    mixed result = db_fetch(dbHandle);

    if (result)
    {
        ret = to_int(result[0]);
    }

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
private nomask int typeMatches(string queryType, string observedType)
{
    int ret = 0;

    if (stringp(queryType) && stringp(observedType) && (queryType != ""))
    {
        queryType = lower_case(queryType);
        observedType = lower_case(observedType);

        ret = (queryType == observedType) ||
            ((sizeof(observedType) > sizeof(queryType)) &&
            (observedType[0..(sizeof(queryType) - 1)] == queryType) &&
            (observedType[sizeof(queryType)] == '.'));
    }

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
private nomask int valueMatches(mixed expected, mixed actual)
{
    int ret = 0;

    if (mappingp(expected) && mappingp(actual))
    {
        ret = 1;

        foreach(mixed key in m_indices(expected))
        {
            if (!member(actual, key) || !valueMatches(expected[key], actual[key]))
            {
                ret = 0;
                break;
            }
        }
    }
    else if (pointerp(expected) && pointerp(actual))
    {
        ret = 1;

        foreach(mixed item in expected)
        {
            if (member(actual, item) < 0)
            {
                ret = 0;
                break;
            }
        }
    }
    else if (stringp(expected) && stringp(actual))
    {
        ret = (lower_case(expected) == lower_case(actual));
    }
    else
    {
        ret = (expected == actual);
    }

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
private nomask int observationMatches(mapping observation, mapping query)
{
    int ret = 1;

    if (mappingp(query) && sizeof(query))
    {
        foreach(string key in m_indices(query))
        {
            if (key == "type")
            {
                ret = typeMatches(query[key], observation["type"]);
            }
            else if (member(observation, key))
            {
                ret = valueMatches(query[key], observation[key]);
            }
            else if (member(observation["context"], key))
            {
                ret = valueMatches(query[key], observation["context"][key]);
            }
            else if (member(observation["metadata"], key))
            {
                ret = valueMatches(query[key], observation["metadata"][key]);
            }
            else
            {
                ret = 0;
            }

            if (!ret)
            {
                break;
            }
        }
    }

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
private nomask mapping *queryExperienceByPlayerId(int playerId, mapping query,
    int limit, int offset, int dbHandle)
{
    mapping *ret = ({ });

    string queryString = sprintf("select observationType, actor, subject, "
        "participants, observationTime, location, observationContext, "
        "observationMetadata from experienceObservations "
        "where playerid = '%d' order by id asc", playerId);

    if (limit > 0)
    {
        queryString += sprintf(" limit %d", limit);

        if (offset > 0)
        {
            queryString += sprintf(" offset %d", offset);
        }
    }

    queryString += ";";

    db_exec(dbHandle, queryString);

    if (db_error(dbHandle))
    {
        while (db_fetch(dbHandle));
        queryString = sprintf("select observationType, actor, subject, "
            "participants, observationTime, location, context, metadata "
            "from experienceObservations where playerid = '%d' "
            "order by id asc;", playerId);
        db_exec(dbHandle, queryString);
    }

    mixed result;
    do
    {
        result = db_fetch(dbHandle);
        if (result)
        {
            mapping observation = ([
                "type": convertString(result[0]),
                "actor": convertString(result[1]),
                "subject": convertString(result[2]),
                "participants": deserializeArray(convertString(result[3])),
                "timestamp": to_int(result[4]),
                "location": convertString(result[5]),
                "context": deserializeMapping(convertString(result[6])),
                "metadata": deserializeMapping(convertString(result[7]))
            ]);

            if (observationMatches(observation, query))
            {
                ret += ({ observation });
            }
        }
    } while (result);

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask mapping *queryExperienceByPlayer(string playerName, mapping query,
    int limit, int offset)
{
    mapping *ret = ({ });

    int dbHandle = connect();
    int playerId = playerIdByName(playerName, dbHandle);

    if (playerId)
    {
        ret = queryExperienceByPlayerId(playerId, query, limit, offset,
            dbHandle);
    }

    disconnect(dbHandle);
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask int countExperienceByPlayer(string playerName, mapping query)
{
    return sizeof(queryExperienceByPlayer(playerName, query, 0, 0));
}

/////////////////////////////////////////////////////////////////////////////
public nomask int hasExperienceByPlayer(string playerName, mapping query)
{
    return countExperienceByPlayer(playerName, query) > 0;
}

/////////////////////////////////////////////////////////////////////////////
public nomask mapping recordExperienceObservation(string playerName,
    mapping observation)
{
    mapping ret = ([]);

    if (stringp(playerName) && mappingp(observation))
    {
        int dbHandle = connect();
        int playerId = playerIdByName(playerName, dbHandle);

        if (playerId)
        {
            if (!member(observation, "actor") || !stringp(observation["actor"]))
            {
                observation["actor"] = sprintf("/lib/realizations/player#%s",
                    capitalize(playerName));
            }
            if (!member(observation, "participants") ||
                !pointerp(observation["participants"]))
            {
                observation["participants"] = ({ });
            }
            if (!member(observation, "context") ||
                !mappingp(observation["context"]))
            {
                observation["context"] = ([]);
            }
            if (!member(observation, "metadata") ||
                !mappingp(observation["metadata"]))
            {
                observation["metadata"] = ([]);
            }
            if (!member(observation, "timestamp") ||
                !intp(observation["timestamp"]))
            {
                observation["timestamp"] = time();
            }
            if (!member(observation, "location") ||
                !stringp(observation["location"]))
            {
                observation["location"] = "";
            }
            if (!member(observation, "subject") ||
                !stringp(observation["subject"]))
            {
                observation["subject"] = "";
            }

            string query = sprintf("call saveExperienceObservation(%d,'%s','%s','%s',"
                "'%s',%d,'%s','%s','%s');",
                playerId,
                sanitizeString(lower_case(observation["type"])),
                sanitizeString(observation["actor"]),
                sanitizeString(observation["subject"]),
                sanitizeString(serializeArray(observation["participants"])),
                to_int(observation["timestamp"]),
                sanitizeString(observation["location"]),
                sanitizeString(serializeMapping(observation["context"])),
                sanitizeString(serializeMapping(observation["metadata"])));

            db_exec(dbHandle, query);
            mixed result = db_fetch(dbHandle);

            ret = observation + ([]);
        }

        disconnect(dbHandle);
    }

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask void clearExperienceByPlayer(string playerName)
{
    int dbHandle = connect();
    int playerId = playerIdByName(playerName, dbHandle);

    if (playerId)
    {
        string query = sprintf("call pruneExperience(%d);", playerId);
        db_exec(dbHandle, query);
        mixed result = db_fetch(dbHandle);
    }

    disconnect(dbHandle);
}

/////////////////////////////////////////////////////////////////////////////
protected nomask mapping getExperience(int playerId, int dbHandle)
{
    return ([ "experience": queryExperienceByPlayerId(playerId, ([]), 0, 0,
        dbHandle) ]);
}

/////////////////////////////////////////////////////////////////////////////
protected nomask void saveExperience(int dbHandle, int playerId,
    mapping playerData)
{
    if (member(playerData, "experience") && pointerp(playerData["experience"]))
    {
        string query = sprintf("call pruneExperience(%d);", playerId);
        db_exec(dbHandle, query);
        mixed result = db_fetch(dbHandle);

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

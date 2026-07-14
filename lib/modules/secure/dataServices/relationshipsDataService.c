//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/modules/secure/dataServices/dataService.c";

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
private nomask mapping relationshipByPlayerIdAndTarget(int playerId,
    string targetKey, int dbHandle)
{
    mapping ret = ([]);

    string query = sprintf("select r.targetKey, r.updated, d.dimension, d.value "
        "from relationships r "
        "left outer join relationshipDimensions d on d.relationshipId = r.id "
        "where r.playerId = %d and r.targetKey = '%s' "
        "order by d.dimension;", playerId, sanitizeString(targetKey));

    db_exec(dbHandle, query);

    mixed result;
    do
    {
        result = db_fetch(dbHandle);
        if (result)
        {
            if (!sizeof(ret))
            {
                ret = ([
                    "target": convertString(result[0]),
                    "dimensions": ([]),
                    "updated": to_int(result[1])
                ]);
            }

            if (convertString(result[2]) != "")
            {
                ret["dimensions"][convertString(result[2])] = to_int(result[3]);
            }
        }
    } while (result);

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask mapping relationshipByPlayerAndTarget(string playerName,
    string targetKey)
{
    mapping ret = ([]);

    int dbHandle = connect();
    int playerId = playerIdByName(playerName, dbHandle);

    if (playerId && stringp(targetKey))
    {
        ret = relationshipByPlayerIdAndTarget(playerId, targetKey, dbHandle);
    }

    disconnect(dbHandle);

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask int relationshipDimensionByPlayerAndTarget(string playerName,
    string targetKey, string dimension)
{
    int ret = 0;
    mapping relationship = relationshipByPlayerAndTarget(playerName, targetKey);

    if (mappingp(relationship) && member(relationship, "dimensions") &&
        member(relationship["dimensions"], dimension))
    {
        ret = to_int(relationship["dimensions"][dimension]);
    }

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask int hasRelationshipByPlayerAndTarget(string playerName,
    string targetKey)
{
    return sizeof(relationshipByPlayerAndTarget(playerName, targetKey));
}

/////////////////////////////////////////////////////////////////////////////
public nomask mapping *queryRelationshipsByPlayer(string playerName,
    mapping query)
{
    mapping *ret = ({ });

    int dbHandle = connect();
    int playerId = playerIdByName(playerName, dbHandle);

    if (playerId)
    {
        string queryString = sprintf("select targetKey from relationships "
            "where playerId = %d order by targetKey;", playerId);
        db_exec(dbHandle, queryString);

        mixed result;
        do
        {
            result = db_fetch(dbHandle);
            if (result)
            {
                mapping relationship = relationshipByPlayerIdAndTarget(playerId,
                    convertString(result[0]), dbHandle);

                int matches = 1;
                if (mappingp(query) && sizeof(query))
                {
                    foreach(string key in m_indices(query))
                    {
                        if (key == "target")
                        {
                            matches = (relationship["target"] == query[key]);
                        }
                        else if (member(relationship["dimensions"], key))
                        {
                            matches =
                                (to_int(relationship["dimensions"][key]) >=
                                    to_int(query[key]));
                        }
                        else
                        {
                            matches = 0;
                        }

                        if (!matches)
                        {
                            break;
                        }
                    }
                }

                if (matches)
                {
                    ret += ({ relationship + ([]) });
                }
            }
        } while (result);
    }

    disconnect(dbHandle);

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask mapping *relationshipHistoryByPlayerAndTarget(string playerName,
    string targetKey, mapping query)
{
    mapping *ret = ({ });

    int dbHandle = connect();
    int playerId = playerIdByName(playerName, dbHandle);

    if (playerId)
    {
        string queryString = sprintf("select h.dimension, h.delta, h.value, "
            "h.timestamp, h.producer, h.context, h.metadata "
            "from relationships r "
            "inner join relationshipHistory h on h.relationshipId = r.id "
            "where r.playerId = %d and r.targetKey = '%s' "
            "order by h.id;", playerId, sanitizeString(targetKey));

        db_exec(dbHandle, queryString);

        mixed result;
        do
        {
            result = db_fetch(dbHandle);
            if (result)
            {
                mapping entry = ([
                    "target": targetKey,
                    "dimension": convertString(result[0]),
                    "delta": to_int(result[1]),
                    "value": to_int(result[2]),
                    "timestamp": to_int(result[3]),
                    "producer": convertString(result[4]),
                    "context": deserializeMapping(convertString(result[5])),
                    "metadata": deserializeMapping(convertString(result[6]))
                ]);

                int matches = 1;
                if (mappingp(query) && sizeof(query))
                {
                    foreach(string key in m_indices(query))
                    {
                        if (!member(entry, key) || (entry[key] != query[key]))
                        {
                            matches = 0;
                            break;
                        }
                    }
                }

                if (matches)
                {
                    ret += ({ entry });
                }
            }
        } while (result);
    }

    disconnect(dbHandle);

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask mapping updateRelationshipByPlayerAndTarget(string playerName,
    string targetKey, mapping dimensionChanges, mapping context,
    mapping metadata, string producer)
{
    mapping ret = ([]);

    if (stringp(playerName) && stringp(targetKey) && mappingp(dimensionChanges) &&
        sizeof(dimensionChanges))
    {
        int dbHandle = connect();
        int playerId = playerIdByName(playerName, dbHandle);

        if (playerId)
        {
            mapping relationship = relationshipByPlayerIdAndTarget(playerId,
                targetKey, dbHandle);
            mapping dimensions = member(relationship, "dimensions") ?
                relationship["dimensions"] + ([]) : ([]);

            foreach(string dimension in m_indices(dimensionChanges))
            {
                if (!member(dimensions, dimension))
                {
                    dimensions[dimension] = 0;
                }
                dimensions[dimension] += to_int(dimensionChanges[dimension]);
            }

            int updated = time();
            string queryString = sprintf("call saveRelationship(%d, '%s', %d);",
                playerId, sanitizeString(targetKey), updated);
            db_exec(dbHandle, queryString);
            mixed result = db_fetch(dbHandle);

            foreach(string dimension in m_indices(dimensions))
            {
                queryString = sprintf("call saveRelationshipDimension(%d, '%s', '%s', %d);",
                    playerId,
                    sanitizeString(targetKey),
                    sanitizeString(dimension),
                    to_int(dimensions[dimension]));
                db_exec(dbHandle, queryString);
                result = db_fetch(dbHandle);
            }

            foreach(string changedDimension in m_indices(dimensionChanges))
            {
                queryString = sprintf("call saveRelationshipHistory(%d, '%s', '%s', %d, %d, %d, '%s', '%s', '%s');",
                    playerId,
                    sanitizeString(targetKey),
                    sanitizeString(changedDimension),
                    to_int(dimensionChanges[changedDimension]),
                    to_int(dimensions[changedDimension]),
                    updated,
                    sanitizeString(producer),
                    sanitizeString(serializeMapping(context)),
                    sanitizeString(serializeMapping(metadata)));
                db_exec(dbHandle, queryString);
                result = db_fetch(dbHandle);
            }

            ret = ([
                "target": targetKey,
                "dimensions": dimensions,
                "updated": updated
            ]);
        }

        disconnect(dbHandle);
    }

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask void clearRelationshipsByPlayer(string playerName)
{
    int dbHandle = connect();
    int playerId = playerIdByName(playerName, dbHandle);

    if (playerId)
    {
        string query = sprintf("call pruneRelationships(%d);", playerId);
        db_exec(dbHandle, query);
        mixed result = db_fetch(dbHandle);
    }

    disconnect(dbHandle);
}

/////////////////////////////////////////////////////////////////////////////
protected nomask mapping getRelationships(int playerId, int dbHandle)
{
    mapping ret = ([
        "relationships": ([]),
        "relationshipHistory": ([])
    ]);

    string query = sprintf("select targetKey from relationships "
        "where playerId = %d order by targetKey;", playerId);
    db_exec(dbHandle, query);

    mixed result;
    do
    {
        result = db_fetch(dbHandle);
        if (result)
        {
            string target = convertString(result[0]);
            ret["relationships"][target] =
                relationshipByPlayerIdAndTarget(playerId, target, dbHandle);

            ret["relationshipHistory"][target] = ({ });
            string historyQuery = sprintf("select h.dimension, h.delta, h.value, "
                "h.timestamp, h.producer, h.context, h.metadata "
                "from relationships r "
                "inner join relationshipHistory h on h.relationshipId = r.id "
                "where r.playerId = %d and r.targetKey = '%s' order by h.id;",
                playerId, sanitizeString(target));
            db_exec(dbHandle, historyQuery);

            mixed historyResult;
            do
            {
                historyResult = db_fetch(dbHandle);
                if (historyResult)
                {
                    ret["relationshipHistory"][target] += ({ ([
                        "target": target,
                        "dimension": convertString(historyResult[0]),
                        "delta": to_int(historyResult[1]),
                        "value": to_int(historyResult[2]),
                        "timestamp": to_int(historyResult[3]),
                        "producer": convertString(historyResult[4]),
                        "context": deserializeMapping(convertString(historyResult[5])),
                        "metadata": deserializeMapping(convertString(historyResult[6]))
                    ]) });
                }
            } while (historyResult);
        }
    } while (result);

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
protected nomask void saveRelationships(int dbHandle, int playerId,
    mapping playerData)
{
    if (member(playerData, "relationships") && mappingp(playerData["relationships"]))
    {
        string query = sprintf("call pruneRelationships(%d);", playerId);
        db_exec(dbHandle, query);
        mixed result = db_fetch(dbHandle);

        foreach(string target in m_indices(playerData["relationships"]))
        {
            mapping relationship = playerData["relationships"][target];
            query = sprintf("call saveRelationship(%d, '%s', %d);",
                playerId,
                sanitizeString(target),
                to_int(relationship["updated"]));
            db_exec(dbHandle, query);
            result = db_fetch(dbHandle);

            if (member(relationship, "dimensions") &&
                mappingp(relationship["dimensions"]))
            {
                foreach(string dimension in m_indices(relationship["dimensions"]))
                {
                    query = sprintf("call saveRelationshipDimension(%d, '%s', '%s', %d);",
                        playerId,
                        sanitizeString(target),
                        sanitizeString(dimension),
                        to_int(relationship["dimensions"][dimension]));
                    db_exec(dbHandle, query);
                    result = db_fetch(dbHandle);
                }
            }
        }

        if (member(playerData, "relationshipHistory") &&
            mappingp(playerData["relationshipHistory"]))
        {
            foreach(string target in m_indices(playerData["relationshipHistory"]))
            {
                if (pointerp(playerData["relationshipHistory"][target]))
                {
                    foreach(mapping history in playerData["relationshipHistory"][target])
                    {
                        query = sprintf("call saveRelationshipHistory(%d, '%s', '%s', %d, %d, %d, '%s', '%s', '%s');",
                            playerId,
                            sanitizeString(target),
                            sanitizeString(history["dimension"]),
                            to_int(history["delta"]),
                            to_int(history["value"]),
                            to_int(history["timestamp"]),
                            sanitizeString(history["producer"]),
                            sanitizeString(serializeMapping(history["context"])),
                            sanitizeString(serializeMapping(history["metadata"])));
                        db_exec(dbHandle, query);
                        result = db_fetch(dbHandle);
                    }
                }
            }
        }
    }
}

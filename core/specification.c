//*****************************************************************************
// Class: specification
// File Name: specification.c
//
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************

protected mapping researchData = ([
    // "name": <name of the research>
    // "description": <research's description>
    // "type": active|passive|sustained|ritual|knowledge
    // "scope": self|targeted|area|environmental|region|global
    // "effect": beneficial|combat|enchantment|summoning|strategic
    // "research type": points|timed|tree root
    // "research cost": <value> - points to purchase or time delay
    // "limited by": ([
    //      "opponent race": <valid race>
    //      "opponent guild": <valid guild>
    //      "environment": <valid environment type>
    //      "intoxicated": <level>
    //      "drugged": <level>
    //      "near death": <percentage of hit points left (0-100)>
    //      "stamina drained": <percentage of stamina left (0-100)>
    //      "spell points drained": <percentage of spell points left (0-100)>
    // ])
    // Other data is specified in specific type-inherited methods
]);

/////////////////////////////////////////////////////////////////////////////
protected nomask object getDictionary(string service)
{
    object ret = 0;

    if (service && stringp(service))
    {
        string dictionary = sprintf("/lib/dictionaries/%sDictionary.c",
            service);
        if (file_size(dictionary) > -1)
        {
            ret = load_object(dictionary);
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
protected nomask int validLimitor(mapping limitor)
{
    int ret = 0;
    if (limitor && mappingp(limitor))
    {
        string *limitorKeys = m_indices(limitor);
        if (sizeof(limitorKeys))
        {
            ret = 1;
        }

        foreach(string key in limitorKeys)
        {
            if (key && stringp(key))
            {
                switch (key)
                {
                    case "opponent race":
                    {
                        object racialDictionary = getDictionary("racial");
                        if (racialDictionary)
                        {
                            ret &&= racialDictionary->isValidRace(
                                limitor[key]) || racialDictionary->isCreatureRace(limitor[key]);
                        }
                        break;
                    }
                    case "opponent guild":
                    {
                        object guildDictionary = getDictionary("guilds");
                        if (guildDictionary)
                        {
                            ret &&= guildDictionary->isValidGuild(
                                limitor[key]);
                        }
                        break;
                    }
                    case "opponent faction":
                    {
                        object factionDictionary = getDictionary("factions");
                        if (factionDictionary)
                        {
                            ret &&= factionDictionary->isValidFaction(
                                limitor[key]);
                        }
                        break;
                    }
                    case "crafting type":
                    {
                        object craftingDictionary = getDictionary("crafting");
                        if (craftingDictionary)
                        {
                            ret &&= craftingDictionary->isValidType(
                                limitor[key]);
                        }
                        break;
                    }
                    case "environment":
                    {
                        object environmentDictionary =
                            getDictionary("environment");
                        if (environmentDictionary)
                        {
                            ret &&= environmentDictionary->isValidType(
                                limitor[key]);
                        }
                        break;
                    }
                    case "equipment":
                    {
                        object materialsDictionary = getDictionary("materials");
                        if (materialsDictionary)
                        {
                            if (pointerp(limitor[key]) && sizeof(limitor[key]))
                            {
                                int isValid = 0;
                                string *list = limitor[key];
                                foreach(string equipment in list)
                                {
                                    isValid ||= materialsDictionary->isValidArmorType(equipment) ||
                                        materialsDictionary->isValidArmorBlueprint(equipment) ||
                                        materialsDictionary->isValidWeaponType(equipment) ||
                                        materialsDictionary->isValidWeaponBlueprint(equipment);
                                }
                                ret &&= isValid;
                            }
                            else
                            {
                                ret &&= materialsDictionary->isValidArmorType(limitor[key]) ||
                                    materialsDictionary->isValidArmorBlueprint(limitor[key]) ||
                                    materialsDictionary->isValidWeaponType(limitor[key]) ||
                                    materialsDictionary->isValidWeaponBlueprint(limitor[key]);
                            }
                        }
                        break;
                    }
                    case "intoxicated":
                    case "drugged":
                    {
                        ret &&= intp(limitor[key]);
                        break;
                    }
                    case "near death":
                    case "stamina drained":
                    case "spell points drained":
                    {
                        ret &&= intp(limitor[key]) && (limitor[key] >= 0)
                            && (limitor[key] <= 100);
                        break;
                    }
                    default:
                    {
                        ret = 0;
                    }
                }
            }
            else
            {
                ret = 0;
            }
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
protected int addSpecification(string type, mixed value)
{
    int ret = 0;

    if (type && stringp(type))
    {
        switch (type)
        {
            case "name":
            case "description":
            {
                if (value && stringp(value))
                {
                    ret = 1;
                    researchData[type] = value;
                }
                else
                {
                    raise_error(sprintf("ERROR - specification: The '%s' value "
                        "must be a string.\n", type));
                }
                break;
            }
            case "limited by":
            {
                if (validLimitor(value))
                {
                    ret = 1;
                    researchData["limited by"] = value;
                }
                else
                {
                    raise_error("ERROR - specification: The value of 'limited "
                        "by' must be a valid limiting mapping. See the "
                        "specification.validLimitor method for details.\n");
                }
                break;
            }
            default:
            {
                raise_error("ERROR - specification: The provided specification "
                    "type is unknown. It must be one of: name, description, "
                    "or limited by.\n");
            }
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask int EffectIsLimited()
{
    return member(researchData, "limited by");
}

/////////////////////////////////////////////////////////////////////////////
protected int blockSkillApplication(string skill, object owner, object target)
{
    // Overwrite this method for special processing beyond what is offered
    // via "limited by".
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
public nomask varargs int canApplySkill(string skill, object owner, object target, int verbose)
{
    int ret = 1;
    notify_fail("");

    if (member(researchData, "limited by") && owner && objectp(owner))
    {
        if (member(researchData["limited by"], "opponent race"))
        {
            ret &&= target && objectp(target) &&
                function_exists("Race", target) && (target->Race() ==
                    researchData["limited by"]["opponent race"]);
            if (!ret && verbose)
            {
                printf("Your opponent is not of the %s race.\n",
                    researchData["limited by"]["opponent race"]);
            }
        }
        if (member(researchData["limited by"], "opponent guild"))
        {
            ret &&= target && objectp(target) &&
                function_exists("memberOfGuild", target) &&
                target->memberOfGuild(
                    researchData["limited by"]["opponent guild"]);
            if (!ret && verbose)
            {
                printf("Your opponent is not of the %s guild.\n",
                    researchData["limited by"]["opponent guild"]);
            }
        }
        if (member(researchData["limited by"], "opponent faction"))
        {
            ret &&= target && objectp(target) &&
                function_exists("memberOfFaction", target) &&
                target->memberOfFaction(
                    researchData["limited by"]["opponent faction"]);
            if (!ret && verbose)
            {
                object faction = getDictionary("factions")->factionObject(
                    researchData["limited by"]["opponent faction"]);

                if (faction)
                {
                    printf("Your opponent is not of the %s faction.\n",
                        faction->name());
                }
            }
        }
        if (member(researchData["limited by"], "crafting type"))
        {
            ret &&= objectp(target);

            if (stringp(researchData["limited by"]["crafting type"]) &&
                target)
            {
                ret &&= (target->query("crafting type") ==
                    researchData["limited by"]["crafting type"]);
            }
            else if (pointerp(researchData["limited by"]["crafting type"]) &&
                target)
            {
                int checkList = 0;
                foreach(string key in researchData["limited by"]["crafting type"])
                {
                    checkList += (target->query("crafting type") == key);
                }
                ret &&= checkList;
            }
            if (!ret && verbose)
            {
                printf("The item is of the wrong type to be affected by this research.\n");
            }
        }
        if (member(researchData["limited by"], "environment"))
        {
            object environmentDictionary =
                getDictionary("environment");
            if (environmentDictionary)
            {
                ret &&= environment(owner) &&
                    environmentDictionary->isEnvironmentOfType(environment(owner),
                        researchData["limited by"]["environment"]);
            }
            if (!ret && verbose)
            {
                printf("You are not in the correct environment (%s) to do that.\n",
                    researchData["limited by"]["environment"]);
            }
        }
        if (member(researchData["limited by"], "intoxicated"))
        {
            ret &&= function_exists("Intoxicated", owner) &&
                (owner->Intoxicated() >=
                    researchData["limited by"]["intoxicated"]);
            if (!ret && verbose)
            {
                printf("You are not intoxicated enough to do that.\n");
            }
        }
        if (member(researchData["limited by"], "drugged"))
        {
            ret &&= function_exists("Drugged", owner) &&
                (owner->Drugged() >= researchData["limited by"]["drugged"]);
            if (!ret && verbose)
            {
                printf("You are not drugged enough to do that.\n");
            }
        }
        if (member(researchData["limited by"], "near death"))
        {
            ret &&= function_exists("hitPoints", owner) &&
                (owner->hitPoints() <= researchData["limited by"]["near death"]);
            if (!ret && verbose)
            {
                printf("You are not injured enough to do that.\n");
            }
        }
        if (member(researchData["limited by"], "stamina drained"))
        {
            ret &&= function_exists("staminaPoints", owner) &&
                (owner->staminaPoints() <= researchData["limited by"]["stamina drained"]);
            if (!ret && verbose)
            {
                printf("You are not weary enough to do that.\n");
            }
        }
        if (member(researchData["limited by"], "spell points drained"))
        {
            ret &&= function_exists("spellPoints", owner) &&
                (owner->spellPoints() <= researchData["limited by"]["spell points drained"]);
            if (!ret && verbose)
            {
                printf("You are not drained enough to do that.\n");
            }
        }
        if (member(researchData["limited by"], "equipment"))
        {
            if (pointerp(researchData["limited by"]["equipment"]) &&
                sizeof(researchData["limited by"]["equipment"]))
            {
                int hasEquipment = 0;
                string *list = researchData["limited by"]["equipment"];
                foreach(string equipment in list)
                {
                    hasEquipment ||= owner->usingEquipmentOfType(equipment);
                }
                ret &&= hasEquipment;
            }
            else
            {
                ret &&= function_exists("usingEquipmentOfType", owner) &&
                    owner->usingEquipmentOfType(researchData["limited by"]["equipment"]);
            }

            if (!ret && verbose)
            {
                printf("You must be using the proper equipment for that (%s).\n",
                    stringp(researchData["limited by"]["equipment"]) ? 
                        researchData["limited by"]["equipment"] :
                        implode(researchData["limited by"]["equipment"], ", "));
            }
        }
    }
    return ret && !blockSkillApplication(skill, owner, target);
}

/////////////////////////////////////////////////////////////////////////////
public mixed query(string element)
{
    mixed ret = 0;

    if (member(researchData, element))
    {
        ret = researchData[element];

        if (pointerp(ret))
        {
            ret += ({});
        }
        if (mappingp(ret))
        {
            ret += ([]);
        }
    }
    else
    {
        switch (element)
        {
            case "bonuses":
            {
                ret = sort_array(filter(m_indices(researchData),
                    (: sizeof(regexp(({ $1 }), "bonus")) &&
                        (researchData[$1] > 0) :)), (: $1 > $2 :));
                break;
            }
            case "penalties":
            {
                ret = sort_array(filter(m_indices(researchData),
                    (: sizeof(regexp(({ $1 }), "penalty to")) ||
                        (sizeof(regexp(({ $1 }), "bonus")) &&
                        (researchData[$1] < 0)) :)),
                    (: $1 > $2 :));
                break;
            }
            case "apply to":
            {
                ret = sort_array(filter(m_indices(researchData),
                    (: (sizeof(regexp(({ $1 }), "apply")) > 0) :)),
                    (: $1 > $2 :));
                break;
            }
            case "raw bonuses":
            {
                ret = sort_array(filter(m_indices(researchData),
                    (: (sizeof(regexp(({ $1 }), "bonus")) > 0) :)),
                    (: $1 > $2 :));
                break;
            }
            case "enchantments":
            {
                ret = ([]);
                string *enchantments = filter(m_indices(researchData),
                    (: ((sizeof(regexp(({ $1 }), "bonus .* enchantment")) > 0) &&
                    (researchData[$1] > 0)) :));

                if (sizeof(enchantments))
                {
                    foreach(string enchantment in enchantments)
                    {
                        ret[regreplace(enchantment,
                            "bonus (.*) enchantment", "\\1")] =
                            researchData[enchantment];
                    }
                }
                break;
            }
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask string displayLimiters(string colorConfiguration, object configuration)
{
    string ret = "";

    if (member(researchData, "limited by") &&
        sizeof(researchData["limited by"]))
    {
        string limiter = "This is only applied when %s %s %s.";
        string *prereqKeys = sort_array(
            m_indices(researchData["limited by"]), (: $1 > $2 :));

        foreach(string key in prereqKeys)
        {
            switch (key)
            {
            case "opponent race":
            case "opponent guild":
            case "crafting type":
            case "environment":
            {
                string types = stringp(researchData["limited by"][key]) ?
                    researchData["limited by"][key] :
                    implode(researchData["limited by"][key], ", ");

                ret += sprintf(limiter, key, "is", types);
                break;
            }
            case "opponent faction":
            {
                object faction = getDictionary("factions")->factionObject(
                    researchData["limited by"][key]);
                if (faction)
                {
                    ret += sprintf(limiter, key, "is", faction->name());
                }
                break;
            }
            case "intoxicated":
            case "drugged":
            case "near death":
            case "stamina drained":
            case "spell points drained":
            {
                ret += sprintf(limiter, "you", "are", key);
                break;
            }
            case "equipment":
            {
                string equipment = "";
                if (pointerp(researchData["limited by"][key]) &&
                    sizeof(researchData["limited by"][key]))
                {
                    equipment = implode(researchData["limited by"][key], " or ");
                }
                else
                {
                    equipment = researchData["limited by"][key];
                }
                ret += sprintf(limiter, "you're", "using:", equipment);
                break;
            }
            }
        }
    }

    if (ret != "")
    {
        ret = configuration->decorate(format(ret, 78),
            "field header", "research", colorConfiguration);
    }
    return ret;
}

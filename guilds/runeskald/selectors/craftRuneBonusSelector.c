//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/core/baseSelector.c";

private string RuneTier = 0;
private string RuneType = 0;
private string Material = 0;
private int MaxBonuses = 1;
private mapping ChosenBonuses = ([]);

// All possible bonuses per rune type. Each entry: key is the display label,
// value is a mapping with:
//   "key"   - the key set on the rune object
//   "value" - the base integer value (scaled by tier multiplier at display/craft)
//
// Key prefixes and what fuseRune() does with them:
//   "bonus ..."           - applied directly as a living bonus
//   "rune enchantment X"  - merged into the "enchantments" mapping (on-hit
//                           elemental damage), value X on weapons only
//   "material attack X"   - set by craftRune() from material data; fuseRune()
//                           merges into "enchantments" on weapons only
//   "material resist X"   - set by craftRune() from material data; fuseRune()
//                           applies as "bonus resist X" on armor only
//   "material attack rating" - applied as "bonus attack" on weapons only
private mapping RuneBonusesByType = ([
    // Power runes: physical and magical offensive force
    "power": ([
        "Attack":              ([ "key": "bonus attack",               "value": 1 ]),
        "Damage":              ([ "key": "bonus damage",               "value": 1 ]),
        "Strength":            ([ "key": "bonus strength",             "value": 1 ]),
        "Intelligence":        ([ "key": "bonus intelligence",         "value": 1 ]),
        "Wisdom":              ([ "key": "bonus wisdom",               "value": 1 ]),
        "Magical On-Hit":      ([ "key": "rune enchantment magical",   "value": 1 ]),
        "Energy On-Hit":       ([ "key": "rune enchantment energy",    "value": 1 ]),
        "Radiant On-Hit":      ([ "key": "rune enchantment radiant",   "value": 1 ]),
        "Psionic On-Hit":      ([ "key": "rune enchantment psionic",   "value": 1 ]),
        "Long Sword":          ([ "key": "bonus long sword",           "value": 1 ]),
        "Two-Handed Sword":    ([ "key": "bonus two-handed sword",     "value": 1 ]),
        "Axe":                 ([ "key": "bonus axe",                  "value": 1 ]),
        "Mace":                ([ "key": "bonus mace",                 "value": 1 ]),
        "Hammer":              ([ "key": "bonus hammer",               "value": 1 ]),
        "Pole Arm":            ([ "key": "bonus pole arm",             "value": 1 ]),
        "Flail":               ([ "key": "bonus flail",                "value": 1 ]),
        "Unarmed":             ([ "key": "bonus unarmed",              "value": 1 ]),
        "Soak":                ([ "key": "bonus soak",                 "value": 1 ]),
        "Hit Points":          ([ "key": "bonus hit points",           "value": 5 ]),
        "Stamina Points":      ([ "key": "bonus stamina points",       "value": 5 ]),
        "Spell Points":        ([ "key": "bonus spell points",         "value": 5 ]),
    ]),
    // Ward runes: all defenses and resistances
    "ward": ([
        "Armor Class":         ([ "key": "bonus armor class",          "value": 1 ]),
        "Defense":             ([ "key": "bonus defense",              "value": 1 ]),
        "Soak":                ([ "key": "bonus soak",                 "value": 1 ]),
        "Constitution":        ([ "key": "bonus constitution",         "value": 1 ]),
        "Hit Points":          ([ "key": "bonus hit points",           "value": 5 ]),
        "Heal Hit Points":     ([ "key": "bonus heal hit points",      "value": 1 ]),
        "Heal Hit Points Rate":([ "key": "bonus heal hit points rate", "value": 1 ]),
        "Resist Fire":         ([ "key": "bonus resist fire",          "value": 1 ]),
        "Resist Cold":         ([ "key": "bonus resist cold",          "value": 1 ]),
        "Resist Electricity":  ([ "key": "bonus resist electricity",   "value": 1 ]),
        "Resist Acid":         ([ "key": "bonus resist acid",          "value": 1 ]),
        "Resist Poison":       ([ "key": "bonus resist poison",        "value": 1 ]),
        "Resist Physical":     ([ "key": "bonus resist physical",      "value": 1 ]),
        "Resist Magical":      ([ "key": "bonus resist magical",       "value": 1 ]),
        "Resist Shadow":       ([ "key": "bonus resist shadow",        "value": 1 ]),
        "Resist Air":          ([ "key": "bonus resist air",           "value": 1 ]),
        "Resist Water":        ([ "key": "bonus resist water",         "value": 1 ]),
        "Resist Earth":        ([ "key": "bonus resist earth",         "value": 1 ]),
        "Resist Chaos":        ([ "key": "bonus resist chaos",         "value": 1 ]),
        "Resist Energy":       ([ "key": "bonus resist energy",        "value": 1 ]),
        "Resist Radiant":      ([ "key": "bonus resist radiant",       "value": 1 ]),
        "Resist Psionic":      ([ "key": "bonus resist psionic",       "value": 1 ]),
        "Resist Steam":        ([ "key": "bonus resist steam",         "value": 1 ]),
        "Resist Sonic":        ([ "key": "bonus resist sonic",         "value": 1 ]),
    ]),
    // Blade runes: edged weapon skills, finesse, attack, damage, dexterity
    "blade": ([
        "Long Sword":          ([ "key": "bonus long sword",            "value": 1 ]),
        "Two-Handed Sword":    ([ "key": "bonus two-handed sword",      "value": 1 ]),
        "Hand and a Half":     ([ "key": "bonus hand and a half sword", "value": 1 ]),
        "Short Sword":         ([ "key": "bonus short sword",           "value": 1 ]),
        "Dagger":              ([ "key": "bonus dagger",                "value": 1 ]),
        "Axe":                 ([ "key": "bonus axe",                   "value": 1 ]),
        "Pole Arm":            ([ "key": "bonus pole arm",              "value": 1 ]),
        "Attack":              ([ "key": "bonus attack",                "value": 1 ]),
        "Damage":              ([ "key": "bonus damage",                "value": 1 ]),
        "Dexterity":           ([ "key": "bonus dexterity",             "value": 1 ]),
        "Soak":                ([ "key": "bonus soak",                  "value": 1 ]),
    ]),
    // Storm runes: electricity, air, sonic, energy - atmospheric force
    "storm": ([
        "Electricity On-Hit":  ([ "key": "rune enchantment electricity", "value": 1 ]),
        "Air On-Hit":          ([ "key": "rune enchantment air",         "value": 1 ]),
        "Sonic On-Hit":        ([ "key": "rune enchantment sonic",       "value": 1 ]),
        "Energy On-Hit":       ([ "key": "rune enchantment energy",      "value": 1 ]),
        "Intelligence":        ([ "key": "bonus intelligence",           "value": 1 ]),
        "Spell Points":        ([ "key": "bonus spell points",           "value": 5 ]),
        "Spellcraft":          ([ "key": "bonus spellcraft",             "value": 1 ]),
        "Heal Spell Points":   ([ "key": "bonus heal spell points",      "value": 1 ]),
        "Resist Electricity":  ([ "key": "bonus resist electricity",     "value": 1 ]),
        "Resist Sonic":        ([ "key": "bonus resist sonic",           "value": 1 ]),
        "Resist Air":          ([ "key": "bonus resist air",             "value": 1 ]),
        "Resist Energy":       ([ "key": "bonus resist energy",          "value": 1 ]),
        "Soak":                ([ "key": "bonus soak",                   "value": 1 ]),
    ]),
    // Frost runes: cold, water, earth, acid - cold/corrosion/earth
    "frost": ([
        "Cold On-Hit":         ([ "key": "rune enchantment cold",        "value": 1 ]),
        "Water On-Hit":        ([ "key": "rune enchantment water",       "value": 1 ]),
        "Earth On-Hit":        ([ "key": "rune enchantment earth",       "value": 1 ]),
        "Acid On-Hit":         ([ "key": "rune enchantment acid",        "value": 1 ]),
        "Defense":             ([ "key": "bonus defense",                "value": 1 ]),
        "Dexterity":           ([ "key": "bonus dexterity",              "value": 1 ]),
        "Constitution":        ([ "key": "bonus constitution",           "value": 1 ]),
        "Stamina Points":      ([ "key": "bonus stamina points",         "value": 5 ]),
        "Heal Stamina":        ([ "key": "bonus heal stamina",           "value": 1 ]),
        "Resist Cold":         ([ "key": "bonus resist cold",            "value": 1 ]),
        "Resist Water":        ([ "key": "bonus resist water",           "value": 1 ]),
        "Resist Earth":        ([ "key": "bonus resist earth",           "value": 1 ]),
        "Resist Acid":         ([ "key": "bonus resist acid",            "value": 1 ]),
        "Soak":                ([ "key": "bonus soak",                   "value": 1 ]),
        "Armor Class":         ([ "key": "bonus armor class",            "value": 1 ]),
    ]),
    // Flame runes: fire, chaos, steam - combustion and heat
    "flame": ([
        "Fire On-Hit":         ([ "key": "rune enchantment fire",        "value": 1 ]),
        "Chaos On-Hit":        ([ "key": "rune enchantment chaos",       "value": 1 ]),
        "Steam On-Hit":        ([ "key": "rune enchantment steam",       "value": 1 ]),
        "Wisdom":              ([ "key": "bonus wisdom",                 "value": 1 ]),
        "Spell Points":        ([ "key": "bonus spell points",           "value": 5 ]),
        "Heal Spell Points":   ([ "key": "bonus heal spell points",      "value": 1 ]),
        "Resist Fire":         ([ "key": "bonus resist fire",            "value": 1 ]),
        "Resist Chaos":        ([ "key": "bonus resist chaos",           "value": 1 ]),
        "Resist Steam":        ([ "key": "bonus resist steam",           "value": 1 ]),
        "Soak":                ([ "key": "bonus soak",                   "value": 1 ]),
        "Hit Points":          ([ "key": "bonus hit points",             "value": 5 ]),
    ]),
]);// Tier multipliers applied to bonus values.
private mapping TierMultiplier = ([
    "basic":   1,
    "elder":   2,
    "ancient": 4,
    "primal":  6,
]);

/////////////////////////////////////////////////////////////////////////////
public nomask void setTier(string tier)       { RuneTier  = tier; }
public nomask void setRuneType(string t)      { RuneType  = t;    }
public nomask void setMaterial(string m)      { Material  = m;    }
public nomask void setMaxBonuses(int max)     { MaxBonuses = max; }

/////////////////////////////////////////////////////////////////////////////
public nomask void InitializeSelector()
{
    AllowUndo = 1;
    AllowAbort = 1;
    NumColumns = 2;
    Data = ([]);
    ChosenBonuses = ([]);
}

/////////////////////////////////////////////////////////////////////////////
private nomask string chosenBonusSummary()
{
    if (!sizeof(ChosenBonuses))
    {
        return configuration->decorate("  None chosen yet.\n", "failure",
            "selector", colorConfiguration);
    }
    string ret = "";
    foreach (string label in sort_array(m_indices(ChosenBonuses), (: $1 > $2 :)))
    {
        ret += configuration->decorate(sprintf("  %s\n", label),
            "information", "selector", colorConfiguration);
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
protected nomask void setUpUserForSelection()
{
    int mult = TierMultiplier[RuneTier];

    Type = sprintf("Enchant %s %s Rune", capitalize(RuneTier),
        capitalize(RuneType));
    Description = sprintf("Choose up to %d bonus%s for your %s %s rune "
        "(material: %s).\nChosen bonuses:\n%s",
        MaxBonuses,
        MaxBonuses > 1 ? "es" : "",
        RuneTier, RuneType, Material,
        chosenBonusSummary());

    Data = ([]);
    mapping bonusOptions = RuneBonusesByType[RuneType];
    int optionCount = 1;

    int slotsLeft = MaxBonuses - sizeof(ChosenBonuses);

    foreach (string label in sort_array(m_indices(bonusOptions), (: $1 > $2 :)))
    {
        int alreadyChosen = member(ChosenBonuses, label);
        int canChoose = !alreadyChosen && (slotsLeft > 0);

        // Scale the displayed value by tier multiplier.
        int scaledValue = bonusOptions[label]["value"] * mult;
        string scaledLabel = sprintf("%s (+%d)", label, scaledValue);

        Data[to_string(optionCount)] = ([
            "name": scaledLabel,
            "description": sprintf("Add '%s' to your rune "
                "(scaled x%d for %s tier).",
                scaledLabel, mult, RuneTier),
            "label": label,
            "key": bonusOptions[label]["key"],
            "value": scaledValue,
            "is disabled": !canChoose && !alreadyChosen,
            "canShow": 1,
        ]);
        optionCount++;
    }

    int canCraft = sizeof(ChosenBonuses) > 0;

    Data[to_string(optionCount)] = ([
        "name": "Craft Rune",
        "description": sprintf("Carve and charge the rune, consuming one "
            "piece of %s from your inventory.", Material),
        "type": "craft",
        "is disabled": !canCraft,
        "canShow": 1,
    ]);
    optionCount++;

    Data[to_string(optionCount)] = ([
        "name": "Exit Bonus Selection",
        "description": "Return to the material selection menu without crafting.",
        "type": "exit",
        "canShow": 1,
    ]);
}

/////////////////////////////////////////////////////////////////////////////
private nomask int consumeMaterial(string materialName)
{
    object *inventory = filter(deep_inventory(User),
        (: (member(inherit_list($1), "/lib/items/material.c") > -1) &&
           ($1->query("blueprint") == $2) :), materialName);

    if (!sizeof(inventory))
    {
        return 0;
    }

    object mat = inventory[0];
    int qty = mat->query("quantity");
    if (qty > 1)
    {
        mat->set("quantity", qty - 1);
    }
    else
    {
        destruct(mat);
    }
    return 1;
}

/////////////////////////////////////////////////////////////////////////////
void craftRune()
{
    if (!consumeMaterial(Material))
    {
        tell_object(User, configuration->decorate(sprintf(
            "You have no %s in your inventory!\n", Material),
            "failure", "selector", colorConfiguration));
    }
    else
    {
        object rune = clone_object("/lib/items/rune.c");

        string runeName = sprintf("%s %s rune", RuneTier, RuneType);
        rune->set("name", runeName);
        rune->set("short", runeName);
        rune->set("aliases", ({ "rune", RuneType + " rune", RuneTier + " rune" }));
        rune->set("rune type", RuneType);
        rune->set("rune tier", RuneTier);
        rune->set("material", Material);

        string longDesc = sprintf(
            "A %s %s rune carved from %s. The deeply-cut lines glow faintly "
            "with pent-up power.",
            RuneTier, RuneType, Material);
        rune->set("long", longDesc);

        int baseValue;
        switch (RuneTier)
        {
            case "basic":   baseValue = 50;    break;
            case "elder":   baseValue = 250;   break;
            case "ancient": baseValue = 1000;  break;
            case "primal":  baseValue = 5000;  break;
            default:        baseValue = 50;
        }

        foreach (string label in m_indices(ChosenBonuses))
        {
            string key = ChosenBonuses[label]["key"];
            int value  = ChosenBonuses[label]["value"];
            rune->set(key, value);
            baseValue += value * 10;
        }

        object materialService = getService("materials");
        mapping materialData = materialService->getMaterialData(Material);

        if (mappingp(materialData))
        {
            if (member(materialData, "attack") && mappingp(materialData["attack"]))
            {
                foreach (string damageType in m_indices(materialData["attack"]))
                {
                    rune->set("material attack " + damageType,
                        (rune->query("material attack " + damageType) || 0)
                        + materialData["attack"][damageType]);
                }
            }
            if (member(materialData, "attack rating"))
            {
                rune->set("material attack rating",
                    (rune->query("material attack rating") || 0)
                    + materialData["attack rating"]);
            }
            if (member(materialData, "defense") && mappingp(materialData["defense"]))
            {
                foreach (string defenseType in m_indices(materialData["defense"]))
                {
                    rune->set("material resist " + defenseType,
                        (rune->query("material resist " + defenseType) || 0)
                        + materialData["defense"][defenseType]);
                }
            }

            if (member(materialData, "value multiplier"))
            {
                baseValue = to_int(baseValue * materialData["value multiplier"]);
            }
        }

        rune->set("value", baseValue);

        move_object(rune, User);

        tell_object(User, configuration->decorate(sprintf(
            "You carefully carve and charge %s.\n", runeName),
            "details", "selector", colorConfiguration));
    }
}

/////////////////////////////////////////////////////////////////////////////
protected nomask int processSelection(string selection)
{
    int ret = -1;
    if (User)
    {
        string selType = member(Data[selection], "type") ?
            Data[selection]["type"] : "";

        ret = (selType == "exit") || (selection == "abort");

        if (!ret && selType == "craft")
        {
            if (!Data[selection]["is disabled"])
            {
                craftRune();
                ret = 1;
            }
        }
        else if (!ret && selType == "")
        {
            string label = Data[selection]["label"];
            if (!Data[selection]["is disabled"])
            {
                if (member(ChosenBonuses, label))
                {
                    m_delete(ChosenBonuses, label);
                }
                else if (sizeof(ChosenBonuses) < MaxBonuses)
                {
                    ChosenBonuses[label] = ([
                        "key":   Data[selection]["key"],
                        "value": Data[selection]["value"],
                    ]);
                }
            }
            setUpUserForSelection();
            ret = 0;
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask void onSelectorCompleted(object caller)
{
    if (User)
    {
        notifySynchronous("onSelectorCompleted");
    }
    caller->cleanUp();
}

/////////////////////////////////////////////////////////////////////////////
protected nomask int suppressMenuDisplay()
{
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
protected string choiceFormatter(string choice)
{
    int isDisabled = member(Data[choice], "is disabled") &&
        Data[choice]["is disabled"];
    string displayType = isDisabled ? "choice disabled" : "choice enabled";

    string suffix = "";
    if (!member(Data[choice], "type") &&
        member(ChosenBonuses, Data[choice]["label"]))
    {
        int useUnicode = User->charsetConfiguration() == "unicode";
        suffix = configuration->decorate(
            useUnicode ? " (\u2605)" : " (*)",
            "information", "selector", colorConfiguration);
    }
    else
    {
        suffix = displayDetails(choice);
    }

    return sprintf("    [%s]%s - %s%s",
        configuration->decorate("%s", "number", "selector", colorConfiguration),
        padSelectionDisplay(choice),
        configuration->decorate("%-22s", displayType, "selector",
            colorConfiguration),
        suffix);
}

/////////////////////////////////////////////////////////////////////////////
protected string displayDetails(string choice)
{
    int useUnicode = User->charsetConfiguration() == "unicode";
    string ret = (member(Data[choice], "is disabled") &&
        Data[choice]["is disabled"]) ?
        configuration->decorate(useUnicode ? " (\u2573)" : " (X)",
            "choice disabled", "selector", colorConfiguration) : "    ";
    return ret;
}

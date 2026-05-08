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
    // Power runes: offensive combat - attack, damage, weapon skills, strength
    "power": ([
        "Attack (+2)":              ([ "key": "bonus attack",           "value": 2  ]),
        "Attack (+4)":              ([ "key": "bonus attack",           "value": 4  ]),
        "Damage (+2)":              ([ "key": "bonus damage",           "value": 2  ]),
        "Damage (+4)":              ([ "key": "bonus damage",           "value": 4  ]),
        "Strength (+1)":            ([ "key": "bonus strength",         "value": 1  ]),
        "Strength (+2)":            ([ "key": "bonus strength",         "value": 2  ]),
        "Long Sword (+2)":          ([ "key": "bonus long sword",       "value": 2  ]),
        "Two-Handed Sword (+2)":    ([ "key": "bonus two-handed sword", "value": 2  ]),
        "Axe (+2)":                 ([ "key": "bonus axe",              "value": 2  ]),
        "Mace (+2)":                ([ "key": "bonus mace",             "value": 2  ]),
        "Hammer (+2)":              ([ "key": "bonus hammer",           "value": 2  ]),
        "Unarmed (+2)":             ([ "key": "bonus unarmed",          "value": 2  ]),
        "Soak (+2)":                ([ "key": "bonus soak",             "value": 2  ]),
        "Hit Points (+15)":         ([ "key": "bonus hit points",       "value": 15 ]),
        "Stamina Points (+15)":     ([ "key": "bonus stamina points",   "value": 15 ]),
    ]),
    // Ward runes: defense, resistances, constitution, armor, soak, recovery
    "ward": ([
        "Armor Class (+2)":         ([ "key": "bonus armor class",              "value": 2  ]),
        "Armor Class (+4)":         ([ "key": "bonus armor class",              "value": 4  ]),
        "Defense (+2)":             ([ "key": "bonus defense",                  "value": 2  ]),
        "Soak (+3)":                ([ "key": "bonus soak",                     "value": 3  ]),
        "Soak (+5)":                ([ "key": "bonus soak",                     "value": 5  ]),
        "Constitution (+1)":        ([ "key": "bonus constitution",             "value": 1  ]),
        "Constitution (+2)":        ([ "key": "bonus constitution",             "value": 2  ]),
        "Hit Points (+20)":         ([ "key": "bonus hit points",               "value": 20 ]),
        "Hit Points (+40)":         ([ "key": "bonus hit points",               "value": 40 ]),
        "Heal Hit Points (+3)":     ([ "key": "bonus heal hit points",          "value": 3  ]),
        "Heal Hit Points Rate (+1)":([ "key": "bonus heal hit points rate",     "value": 1  ]),
        "Resist Fire (+3)":         ([ "key": "bonus resist fire",              "value": 3  ]),
        "Resist Cold (+3)":         ([ "key": "bonus resist cold",              "value": 3  ]),
        "Resist Electricity (+3)":  ([ "key": "bonus resist electricity",       "value": 3  ]),
        "Resist Acid (+3)":         ([ "key": "bonus resist acid",              "value": 3  ]),
        "Resist Poison (+3)":       ([ "key": "bonus resist poison",            "value": 3  ]),
        "Resist Physical (+2)":     ([ "key": "bonus resist physical",          "value": 2  ]),
        "Resist Magical (+3)":      ([ "key": "bonus resist magical",           "value": 3  ]),
        "Resist Shadow (+3)":       ([ "key": "bonus resist shadow",            "value": 3  ]),
    ]),
    // Blade runes: weapon skill bonuses, attack, damage, dexterity
    "blade": ([
        "Long Sword (+2)":          ([ "key": "bonus long sword",               "value": 2  ]),
        "Long Sword (+4)":          ([ "key": "bonus long sword",               "value": 4  ]),
        "Hand and a Half Sword (+2)":([ "key": "bonus hand and a half sword",   "value": 2  ]),
        "Two-Handed Sword (+2)":    ([ "key": "bonus two-handed sword",         "value": 2  ]),
        "Short Sword (+2)":         ([ "key": "bonus short sword",              "value": 2  ]),
        "Dagger (+2)":              ([ "key": "bonus dagger",                   "value": 2  ]),
        "Axe (+2)":                 ([ "key": "bonus axe",                      "value": 2  ]),
        "Polearm (+2)":             ([ "key": "bonus polearm",                  "value": 2  ]),
        "Staff (+2)":               ([ "key": "bonus staff",                    "value": 2  ]),
        "Attack (+2)":              ([ "key": "bonus attack",                   "value": 2  ]),
        "Damage (+2)":              ([ "key": "bonus damage",                   "value": 2  ]),
        "Dexterity (+1)":           ([ "key": "bonus dexterity",                "value": 1  ]),
        "Dexterity (+2)":           ([ "key": "bonus dexterity",                "value": 2  ]),
        "Soak (+2)":                ([ "key": "bonus soak",                     "value": 2  ]),
    ]),
    // Storm runes: electricity and air on-hit, spell points, intelligence,
    //              spellcraft, recovery, sonic/energy damage
    "storm": ([
        "Electricity On-Hit (+3)":  ([ "key": "rune enchantment electricity",   "value": 3  ]),
        "Electricity On-Hit (+5)":  ([ "key": "rune enchantment electricity",   "value": 5  ]),
        "Air On-Hit (+3)":          ([ "key": "rune enchantment air",           "value": 3  ]),
        "Sonic On-Hit (+3)":        ([ "key": "rune enchantment sonic",         "value": 3  ]),
        "Energy On-Hit (+3)":       ([ "key": "rune enchantment energy",        "value": 3  ]),
        "Intelligence (+1)":        ([ "key": "bonus intelligence",             "value": 1  ]),
        "Intelligence (+2)":        ([ "key": "bonus intelligence",             "value": 2  ]),
        "Spell Points (+15)":       ([ "key": "bonus spell points",             "value": 15 ]),
        "Spell Points (+30)":       ([ "key": "bonus spell points",             "value": 30 ]),
        "Spellcraft (+2)":          ([ "key": "bonus spellcraft",               "value": 2  ]),
        "Spellcraft (+4)":          ([ "key": "bonus spellcraft",               "value": 4  ]),
        "Heal Spell Points (+3)":   ([ "key": "bonus heal spell points",        "value": 3  ]),
        "Heal Spell Points Rate (+1)":([ "key": "bonus heal spell points rate", "value": 1  ]),
        "Resist Electricity (+5)":  ([ "key": "bonus resist electricity",       "value": 5  ]),
        "Resist Sonic (+5)":        ([ "key": "bonus resist sonic",             "value": 5  ]),
        "Soak (+2)":                ([ "key": "bonus soak",                     "value": 2  ]),
    ]),
    // Frost runes: cold on-hit, defense, stamina, constitution, slow, recovery
    "frost": ([
        "Cold On-Hit (+3)":         ([ "key": "rune enchantment cold",          "value": 3  ]),
        "Cold On-Hit (+5)":         ([ "key": "rune enchantment cold",          "value": 5  ]),
        "Water On-Hit (+3)":        ([ "key": "rune enchantment water",         "value": 3  ]),
        "Defense (+2)":             ([ "key": "bonus defense",                  "value": 2  ]),
        "Defense (+4)":             ([ "key": "bonus defense",                  "value": 4  ]),
        "Dexterity (+1)":           ([ "key": "bonus dexterity",                "value": 1  ]),
        "Constitution (+1)":        ([ "key": "bonus constitution",             "value": 1  ]),
        "Stamina Points (+15)":     ([ "key": "bonus stamina points",           "value": 15 ]),
        "Stamina Points (+30)":     ([ "key": "bonus stamina points",           "value": 30 ]),
        "Heal Stamina (+3)":        ([ "key": "bonus heal stamina points",      "value": 3  ]),
        "Heal Stamina Rate (+1)":   ([ "key": "bonus heal stamina rate",        "value": 1  ]),
        "Resist Cold (+5)":         ([ "key": "bonus resist cold",              "value": 5  ]),
        "Resist Water (+3)":        ([ "key": "bonus resist water",             "value": 3  ]),
        "Soak (+3)":                ([ "key": "bonus soak",                     "value": 3  ]),
        "Armor Class (+2)":         ([ "key": "bonus armor class",              "value": 2  ]),
    ]),
    // Flame runes: fire/chaos on-hit, wisdom, spell points, recovery, soak
    "flame": ([
        "Fire On-Hit (+3)":         ([ "key": "rune enchantment fire",          "value": 3  ]),
        "Fire On-Hit (+5)":         ([ "key": "rune enchantment fire",          "value": 5  ]),
        "Chaos On-Hit (+3)":        ([ "key": "rune enchantment chaos",         "value": 3  ]),
        "Magical On-Hit (+3)":      ([ "key": "rune enchantment magical",       "value": 3  ]),
        "Wisdom (+1)":              ([ "key": "bonus wisdom",                   "value": 1  ]),
        "Wisdom (+2)":              ([ "key": "bonus wisdom",                   "value": 2  ]),
        "Spell Points (+15)":       ([ "key": "bonus spell points",             "value": 15 ]),
        "Heal Spell Points (+3)":   ([ "key": "bonus heal spell points",        "value": 3  ]),
        "Heal Spell Points Rate (+1)":([ "key": "bonus heal spell points rate", "value": 1  ]),
        "Recover Spell Points (+2)":([ "key": "bonus recover spell points",     "value": 2  ]),
        "Resist Fire (+5)":         ([ "key": "bonus resist fire",              "value": 5  ]),
        "Resist Chaos (+3)":        ([ "key": "bonus resist chaos",             "value": 3  ]),
        "Soak (+3)":                ([ "key": "bonus soak",                     "value": 3  ]),
        "Hit Points (+20)":         ([ "key": "bonus hit points",               "value": 20 ]),
    ]),
]);

// Tier multipliers applied to bonus values.
private mapping TierMultiplier = ([
    "basic":   1,
    "elder":   2,
    "ancient": 3,
    "primal":  5,
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
        string scaledLabel = regreplace(label, "[0-9]+",
            to_string(scaledValue), 1);

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

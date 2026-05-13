//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Bladesong of Creation");
    addSpecification("source", "Drambor Edlothiad");
    addSpecification("description", "This research provides the knowledge to "
        "perform the mythical Bladesong of Creation, the first song ever sung.");

    addPrerequisite("/guilds/drambor-edlothiad/bladesinger/legendary-blade-singer.c", (["type": "research"]));
    addPrerequisite("level", (["type": "level", "guild": "/guilds/drambor-edlothiad/drambor-edlothiad.c", "value": 65]));

    addSpecification("limited by", (["equipment": ({ "long sword", "hand and a half sword", "two-handed sword", "short sword", "dagger" }) ]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 200);
    addSpecification("stamina point cost", 50);
    addSpecification("cooldown", 240);
    addSpecification("duration", 120);
    addSpecification("bonus attack", 22);
    addSpecification("bonus defense", 18);
    addSpecification("bonus damage", 18);

    addSpecification("modifiers", ({
        (["type": "skill", "name": "long sword", "formula": "additive", "rate": 0.10]),
        (["type": "skill", "name": "spellcraft", "formula": "logarithmic", "rate": 1.25]),
        (["type": "level", "name": "level", "formula": "logarithmic", "rate": 1.05]),
        (["type": "attribute", "name": "charisma", "formula": "additive", "rate": 0.05]),
    }));

    addSpecification("command template", "bladesong of creation");
    addSpecification("use ability message", "##InitiatorName## ##Infinitive::sing## the Bladesong of Creation, the first song, and reality trembles.");
}
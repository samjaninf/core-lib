//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/tests/framework/testFixture.c";

object Player;
object Selector;
object Wagon;

/////////////////////////////////////////////////////////////////////////////
void Init()
{
    ignoreList += ({
        "resetPlayerMessages",
        "findOptionByText",
        "setupWagon",
        "onSelectorCompleted"
    });
}

/////////////////////////////////////////////////////////////////////////////
public void onSelectorCompleted(object caller)
{
    if (objectp(caller))
    {
        caller->cleanUp();
    }
}

/////////////////////////////////////////////////////////////////////////////
private void setupWagon()
{
    Wagon = Player->addVehicle("wagon", "eledhel");
    if (objectp(Wagon))
    {
        object vehicleService = getService("vehicle");
        mapping blueprint =
            vehicleService->queryVehicleBlueprint("wagon");
        Wagon->initializeVehicle(blueprint);
    }
}

/////////////////////////////////////////////////////////////////////////////
void Setup()
{
    Player = clone_object("/lib/tests/support/services/mockPlayer.c");
    Player->Name("enhancetest");
    Player->addCommands();
    Player->colorConfiguration("none");
    Player->charsetConfiguration("ascii");
    Player->addPlayerHolding("eledhel trading post");
    Player->initializeTrader();
    Player->addCash(10000);

    setupWagon();

    Selector = clone_object(
        "/lib/modules/domains/trading/selectors/vehicleEnhanceSelector.c");
    Selector->setLocation("eledhel");
    Selector->setVehicle(Wagon);
    move_object(Selector, Player);
    Selector->registerEvent(this_object());
}

/////////////////////////////////////////////////////////////////////////////
void CleanUp()
{
    if (objectp(Selector))
    {
        destruct(Selector);
    }
    if (objectp(Player))
    {
        destruct(Player);
    }
}

/////////////////////////////////////////////////////////////////////////////
private void resetPlayerMessages()
{
    if (Player && function_exists("resetCatchList", Player))
    {
        Player->resetCatchList();
    }
}

/////////////////////////////////////////////////////////////////////////////
private string findOptionByText(string searchText)
{
    string result = "0";
    string message = Player->caughtMessage();
    if (!message || message == "")
    {
        return result;
    }
    string *lines = explode(message, "\n");

    foreach (string line in lines)
    {
        line = regreplace(line, "\x1B\\[[0-9;]*[A-Za-z]", "", 1);
        if (sizeof(regexp(({ line }), searchText)))
        {
            result = regreplace(line,
                "^[^0-9]*([0-9]+).*", "\\1", 1);
            break;
        }
    }
    return result;
}

/////////////////////////////////////////////////////////////////////////////
void EnhanceMenuDisplaysLayoutAndSlots()
{
    resetPlayerMessages();
    Selector->initiateSelector(Player);

    string message = Player->caughtMessage();
    ExpectSubStringMatch("Enhance Vehicle", message);
    ExpectSubStringMatch("View Vehicle Layout", message);
    ExpectSubStringMatch("Return to Vehicle Menu", message);
}

/////////////////////////////////////////////////////////////////////////////
void EnhanceMenuShowsUpgradeSlots()
{
    resetPlayerMessages();
    Selector->initiateSelector(Player);

    string message = Player->caughtMessage();
    ExpectSubStringMatch("Upgrade.*Slot", message);
}

/////////////////////////////////////////////////////////////////////////////
void ReturnOptionExitsEnhanceMenu()
{
    resetPlayerMessages();
    Selector->initiateSelector(Player);

    string exitOption = findOptionByText("Return to Vehicle Menu");
    command(exitOption, Player);

    string message = Player->caughtMessage();
    ExpectSubStringMatch("Return to Vehicle Menu", message);
}

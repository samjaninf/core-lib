//*****************************************************************************
// Copyright (c) 2017-2026 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/core/baseSelector.c";

private string Location;
private object SubselectorObj;
private int justDisplayedStatus = 0;

/////////////////////////////////////////////////////////////////////////////
public nomask void setLocation(string location)
{
    Location = location;
}

/////////////////////////////////////////////////////////////////////////////
public nomask void InitializeSelector()
{
    AllowUndo = 0;
    AllowAbort = 1;
    Description = "Main Menu";
    Type = "Vehicle Management";
    Data = ([]);
}

/////////////////////////////////////////////////////////////////////////////
protected nomask void setUpUserForSelection()
{
    object Service = getService("vehicleManagement");
    if (Service)
    {
        Data = Service->getVehicleMenu(User, Location);
    }
    Data[to_string(sizeof(Data) + 1)] = ([
        "name": "Exit Vehicle Management Menu",
        "type": "exit",
        "description": "This option lets you exit the vehicle management menu.\n",
        "canShow": 1
    ]);
}

/////////////////////////////////////////////////////////////////////////////
protected nomask int processSelection(string selection)
{
    int ret = -1;
    if (User)
    {
        ret = (Data[selection]["type"] == "exit") || (selection == "abort");

        if (!ret && Data[selection]["canShow"])
        {
            string type = Data[selection]["type"];
            ret = 0;

            switch(type)
            {
                case "purchase":
                {
                    SubselectorObj = clone_object(
                        "/lib/modules/domains/trading/selectors/vehiclePurchaseSelector.c");
                    SubselectorObj->setLocation(Location);
                    break;
                }
                case "view":
                {
                    object *vehicles = User->getVehiclesAtLocation(Location);
                    foreach(object vehicle in vehicles)
                    {
                        if (objectp(vehicle))
                        {
                            tell_object(User, vehicle->getVehicleStatus(User));
                        }
                    }
                    justDisplayedStatus = 1;
                    ret = -1;
                    break;
                }
                case "manage":
                {
                    object vehicle = Data[selection]["vehicle"];
                    if (objectp(vehicle))
                    {
                        SubselectorObj = clone_object(
                            "/lib/modules/domains/trading/selectors/vehicleEnhanceSelector.c");
                        SubselectorObj->setLocation(Location);
                        SubselectorObj->setVehicle(vehicle);
                    }
                    break;
                }
            }

            if (SubselectorObj)
            {
                move_object(SubselectorObj, User);
                SubselectorObj->registerEvent(this_object());
                SubselectorObj->initiateSelector(User);
            }
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask void onSelectorCompleted(object caller)
{
    if (User)
    {
        setUpUserForSelection();
        tell_object(User, displayMessage());
    }
    caller->cleanUp();
}

/////////////////////////////////////////////////////////////////////////////
protected nomask int suppressMenuDisplay()
{
    int ret = objectp(SubselectorObj) || justDisplayedStatus;
    if (justDisplayedStatus)
    {
        justDisplayedStatus = 0;
    }
    return ret;
}

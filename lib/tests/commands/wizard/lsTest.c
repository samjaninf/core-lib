//*****************************************************************************
// Copyright (c) 2025 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/tests/framework/testFixture.c";

object Wizard;
object Catch;

/////////////////////////////////////////////////////////////////////////////
void Init()
{
    setRestoreCaller(this_object());
    object database = clone_object("/lib/tests/modules/secure/fakeDatabase.c");
    database.PrepDatabase();

    object dataAccess = clone_object("/lib/modules/secure/dataAccess.c");
    dataAccess.savePlayerData(database.GetWizardOfLevel("admin"));

    destruct(dataAccess);
    destruct(database);
}

/////////////////////////////////////////////////////////////////////////////
void Setup()
{
    Catch = clone_object("/lib/tests/support/services/catchShadow.c");

    Wizard = clone_object("/lib/realizations/wizard.c");
    Wizard.restore("earl");
    Wizard.addCommands();
    Catch.beginShadow(Wizard);
    setUsers(({ Wizard }));
}

/////////////////////////////////////////////////////////////////////////////
void CleanUp()
{
    destruct(Wizard);
}

/////////////////////////////////////////////////////////////////////////////
void ExecuteRegexpIsNotGreedy()
{
    ExpectFalse(Wizard.executeCommand("lss"), "lss");
    ExpectFalse(Wizard.executeCommand("lls"), "lls");
}

/////////////////////////////////////////////////////////////////////////////
void LsListsContentsOfSpecifiedDirectory()
{
    ExpectTrue(Wizard.executeCommand("ls /"));
    ExpectSubStringMatch("brokenFile.c.+guild", Wizard.caughtMessages());
}

/////////////////////////////////////////////////////////////////////////////
void LsWithoutParameterListsContentsOfCurrentDirectory()
{
    ExpectTrue(Wizard.executeCommand("ls"));
    ExpectSubStringMatch("blah", Wizard.caughtMessages());
}

/////////////////////////////////////////////////////////////////////////////
void LsWithLFlagListsLongContentsOfCurrentDirectory()
{
    Wizard.pwd("/lib");
    ExpectTrue(Wizard.executeCommand("ls -l"));
    ExpectSubStringMatch("dr-.*R: apprentice.*core/", Wizard.caughtMessages());
}

/////////////////////////////////////////////////////////////////////////////
void LsDisplaysNormalFilesCorrectly()
{
    ExpectTrue(Wizard.executeCommand("ls /"));
    ExpectSubStringMatch("0;33mLICENSE[^\*]", Wizard.caughtMessages());
}

/////////////////////////////////////////////////////////////////////////////
void LsDisplaysCompiledFilesCorrectly()
{
    ExpectTrue(Wizard.executeCommand("ls /lib/modules"));
    ExpectSubStringMatch("0;33;1mcombat.c\*", Wizard.caughtMessages());
}

/////////////////////////////////////////////////////////////////////////////
void LsDisplaysDirectoriesCorrectly()
{
    ExpectTrue(Wizard.executeCommand("ls /lib/modules"));
    ExpectSubStringMatch("0;34;1mconversations/", Wizard.caughtMessages());
}

/////////////////////////////////////////////////////////////////////////////
void LsDisplaysUnreadableFilesCorrectly()
{
    ExpectTrue(Wizard.executeCommand("ls /lib/modules"));
    ExpectSubStringMatch("0;31msecure", Wizard.caughtMessages());
}

/////////////////////////////////////////////////////////////////////////////
void WildcardsWork()
{
    ExpectTrue(Wizard.executeCommand("ls -l /lib/modules/"));

    // The + 1 in the calculation is for the listing of the directory itself
    ExpectEq(sizeof(get_dir("/lib/modules/*")) + 1, sizeof(explode(Wizard.caughtMessages(), "\n")));

    Wizard.resetCatchList();
    ExpectTrue(Wizard.executeCommand("ls -l /lib/modules/b*"));

    // The + 3 is for two empty rows (from . and ..) and the directory itself
    ExpectEq(sizeof(get_dir("/lib/modules/b*")) + 3, sizeof(explode(Wizard.caughtMessages(), "\n")));
}

/////////////////////////////////////////////////////////////////////////////
void LsOfEmptyDirectoryDisplaysCorrectly()
{
    ExpectTrue(Wizard.executeCommand("ls empty"));
    ExpectSubStringMatch("No files present", Wizard.caughtMessages());
}

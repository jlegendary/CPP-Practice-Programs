Problem:
 Write a program that declares a struct to store the data of a football player (player’s name, player’s position, number of touchdowns, number of catches, number of passing yards, number of receiving yards, and the number of rushing yards). Declare an array of 10 components to store the data of 10 football players. Your program must contain a function to input data and a function to output data. Add functions to search the array to find the index of a specific player, and update the data of a player. (An input file has been provided with test data.) Before the program terminates, save the updated data in a file (you can just read in the file before the main menu and write out the file once the use has chosen to quit). Your program should contain two menus. Once which has the following options:
 
 
 Select a player (by name)
 Display player information
 Update player information
 Quit
 If option 3 is selected a second menu should be displayed showing a list of what items can be updated. When the user selects an item, the program should ask the user for the new information and then update the appropriate piece of information in the player list. The user should be allowed to update statistics for that player until they decide to quit.
 
 
Analysis:
 Make a menu based program. First menu will be to select a player or quit
 First menu will lead to the choices for players. Then it will lead to choice to display the information 
 or update the information.
 Use struct array to hold all the information about the player.
 Create a function that can read the text file, and save to a new file.

 Header file will contain class.
 Implementation file will contain most action.
 Main function will call implemented files.
 
 
Algorithm:
    - Read information from txt file
    - Write into struct array
    - Build a menu based switch system to move from players
    - Then allow to select to display or update information
    - Write into txt file from struct array
    - End program
 
Postconditions:
 Calls struct
 calls readtoarray
 Calls footballmenu
 

 
=================================
 void FootballData::readToArray()
=================================
 Read from txt file into struct array
 
Postconditions:
 struct FootballPlayers data array will be filled with data from txt file
 
 
==================================
void FootballData::footballMenu()
==================================
 Output a menu based program
 Allows you to choose a player or quit
 Calls either selectPlayers or quitProgram
 
Preconditions:
 Program input:
    menuInput: the input to choose the menu
Postconditions:
 Program output:
    menu based system
    quit program: only if typed 2
 
====================================
 void FootballData::selectPlayers()
====================================
 Selects players among the choice
 1 for displaying information
 2 for updating information
 
Preconditions:
 Program input:
    g_i: global variable to identify which players
    choice: choice made either display or update
Postconditions:
 Program output:
    displayPlayers function or
    updatePlayers function
 
 
==================================
 void FootballData::viewPlayers()
==================================
 List the players and allow to choose from the list

Preconditions: none
Postconditions: 
 Output: choices from 0 to 9
 
 
===================================
void FootballData::displayPlayers()
===================================
 Displays information about players
 
Preconditions:
 g_i: global variable is used here to display the selected player
Postconditions:
 selected information about a player
 
=====================================
 void FootballData::updatePlayers()
=====================================
 Update players information
 
Preconditions:
 choice: input choice on which to update
Postconditions:
 updates specific information
 
===================================
 void FootballData::quitProgram()
===================================
 quits program and saves the struct array into UpdatedPlayerData.txt file
 
Preconditions:
 informations from struct array
Postconditions:
 outFile: saves struct array information into txt file
 
 

 
**********
 TESTING
**********
 => 1 ==> 0 ===> 1 ====> Display Bill's information    => GOOD
 => 1 ==> 1 ===> 1 ====> Display Jackson's information => GOOD
 => 1 ==> 3 ===> 2 ====> 2 ======> Quarterback =====> 2 ========> McCoy's position has been updated => GOOD
 
 
 

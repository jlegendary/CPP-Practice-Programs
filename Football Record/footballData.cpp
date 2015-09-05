//
//  footballData.cpp
//   Implementation file
//
//  Created by JLegendary on 9/5/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//

 
#include "footballData.h"
#include <iostream>
#include <fstream>

// global variable i to select a player
int g_i;


// struct for football players information
struct FootballPlayers
{
    std::string playerName;
    std::string playersPosition;
    int  numOfTouchdown;
    int  numOfCatch;
    int  numOfPass;
    int  numOfReceivingYards;
    int  numOfRushingYards;
};

// struct array
struct FootballPlayers data[10];

// function to read file and output into array
void FootballData::readToArray()
{
    struct FootballPlayers;
    int count;
    
    std::ifstream inFile;
    inFile.open("PlayerData.txt");
    
    // If inFile can't open
    if (!inFile)
    {
        std::cout << "Can't open file."
        << "/n Program terminated!" << std::endl;
    }
    
    // output inFile to struct array
    while(inFile >> data[count].playerName >> data[count].playersPosition >> data[count].numOfTouchdown >> data[count].numOfCatch >> data[count].numOfPass >> data[count].numOfReceivingYards >> data[count].numOfRushingYards)
        count++;
        
        // Close inFile
        inFile.close();
}




// Calls menu
void FootballData::footballMenu()
{
    int menuInput;
    // While menu Input is not 3, 2 is to save then quit
    while (menuInput != 3)
    {
        std::cout << "\n\n*******************" << std::endl;
        std::cout << "      Menu: " << std::endl;
        std::cout << "*******************" << std::endl;
        std::cout << "1. Select a player " << std::endl;
        std::cout << "2. Quit: " << std::endl;
        
        std::cout << "Enter a menu option: \n";
        std::cout << "\n=====> ";
        std::cin >> menuInput;
        
        switch(menuInput)
        {
            case 1:
                selectPlayers();
                break;
            case 2:
                // saves into the UpdatedPlayerData.txt and quits
                quitProgram();
                std::cout << "Saving...\n Terminating program";
                exit(1);
                break;
        }
    }
}

// Search players
void FootballData::selectPlayers()
{
    int choice;
    std::cout << "You have chosen to select a player\n\n";
    std::cout << "Choose among the ten players: " << std::endl;
    viewPlayers();
    std::cout << "======> ";

    std::cin >> g_i;
    
    // Choose to display or update information
    std:: cout << "\nYou typed: " << data[g_i].playerName << " \n";
    
    std::cout << "Type 1 to display information about " << data[g_i].playerName << "\n";
    std::cout << "Type 2 to update information about " << data[g_i].playerName << "\n";
    std::cout << "======> ";
    std::cin >> choice;
    switch(choice)
    {
        case 1:
            displayPlayers();
            break;
        case 2:
            updatePlayers();
            break;
    }
    
    
}

// View the current player
void FootballData::viewPlayers()
{
    std::cout << "Press 0 for Bill\n";
    std::cout << "Press 1 for Jackson\n";
    std::cout << "Press 2 for Grahm\n";
    std::cout << "Press 3 for McCoy\n";
    std::cout << "Press 4 for Daryl\n";
    std::cout << "Press 5 for Santiago\n";
    std::cout << "Press 6 for Hanks\n";
    std::cout << "Press 7 for Johnson\n";
    std::cout << "Press 8 for Miller\n";
    std::cout << "Press 9 for Ruth\n\n";
 
}

// display information about players
void FootballData::displayPlayers()
{
    std::cout << "\nYour choice was "          << g_i << std::endl;
    std::cout << "\nShowing information for "     << data[g_i].playerName << std::endl;
    std::cout << "\tName: "                      << data[g_i].playerName << std::endl;
    std::cout << "\tPosition: "                  << data[g_i].playersPosition << std::endl;
    std::cout << "\tNumber of touchdowns: "      << data[g_i].numOfTouchdown << std::endl;
    std::cout << "\tNumber of catches: "         << data[g_i].numOfCatch << std::endl;
    std::cout << "\tNumber of passes: "          << data[g_i].numOfPass << std::endl;
    std::cout << "\tNumber of receiving yards: " << data[g_i].numOfReceivingYards << std::endl;
    std::cout << "\tNumber of rushing yards: "   << data[g_i].numOfRushingYards << std::endl;
}

//update into the array
void FootballData::updatePlayers()
{
    int choice;
    std::cout << "You chose to update the " << data[g_i].playerName
              << " information!\n" << std::endl;
    std::cout << "Type 1 to update name\n";
    std::cout << "Type 2 to update position \n";
    std::cout << "Type 3 to update number of touchdowns \n";
    std::cout << "Type 4 to update number of catches \n";
    std::cout << "Type 5 to update number of passes \n";
    std::cout << "Type 6 to update receiving yards \n";
    std::cout << "Type 7 to update rushing yard \n";
    std::cout << "======> ";
    
    // If updated, choose what to update
    std::cin >> choice;
    switch(choice)
    {
        case 1:
            std::cout << "You chose to update name\n";
            std::cout << "What should the updated name be: " << std::endl;
            std::cin >> data[g_i].playerName;
            break;
        case 2:
            std::cout << "You chose to update position\n";
            std::cout << "What should the updated position be: " << std::endl;
            std::cin >> data[g_i].playersPosition;
            break;
        case 3:
            std::cout << "You chose to update number of touchdowns\n";
            std::cout << "What should the updated number of touchdown be: " << std::endl;
            std::cin >> data[g_i].numOfTouchdown;
            break;
        case 4:
            std::cout << "You chose to update number of catches\n";
            std::cout << "What should the updated number of catches be: " << std::endl;
            std::cin >> data[g_i].numOfCatch;
            break;
        case 5:
            std::cout << "You chose to update number of passes\n";
            std::cout << "What should the updated number of passes be: " << std::endl;
            std::cin >> data[g_i].numOfPass;
            break;
        case 6:
            std::cout << "You chose to update number of receiving yards\n";
            std::cout << "What should the updated number of receiving yards be: " << std::endl;
            std::cin >> data[g_i].numOfReceivingYards;
            break;
        case 7:
            std::cout << "You chose to update number of rushing  yards\n";
            std::cout << "What should the updated number of rushing yards be: " << std::endl;
            std::cin >> data[g_i].numOfRushingYards;
            break;
    }
    
}

// Saves and quits the program
// It copys what is in array into a outFile
void FootballData::quitProgram()
{
    std::ofstream outFile;
    // open outFile
    outFile.open("UpdatedPlayerData.txt");
    
    if (!outFile)
    {
        std::cout << "Can't open file."
        << std::endl;
    }
    
    // from 0 to 9, all the players' informations
    for (int i=0;i<10;)
    {
        outFile << data[i].playerName << " "
                << data[i].playersPosition << " "
                << data[i].numOfTouchdown << " "
                << data[i].numOfCatch << " "
                << data[i].numOfPass << " "
                << data[i].numOfReceivingYards << " "
                << data[i].numOfRushingYards << "\n";
        i++;
    }

    // close outFile
    outFile.close();
}
//
//  main.cpp
//
//  Created by JLegendary on 7/17/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//

#include <iostream>
enum objectType {ROCK, PAPER, SCISSORS};

void displayRules();
bool validChoic(char select);
objectType retrievePlay(char select);
void theResult(objectType player1, objectType player2, int& winner);
void convertEnumType (objectType object);
objectType chooseWinnerObject (objectType player1, objectType player2);
void displayFinalResults(int gameCount, int winCountPlayer1, int winCountPlayer2);



// Display the game's rules
void displayRules()
{
    std::cout << "*********************************************" << std::endl;
    std::cout << "Welcome to the Rock, Paper, and Scissor game" << std::endl;
    std::cout << "Take turns inputting your choice: " << std::endl;
    std::cout << "\tR or r for Rock" << std::endl;
    std::cout << "\tP or p for Paper" << std::endl;
    std::cout << "\tS or s for sissor" << std::endl;
}


// Checks if player's choice is valid
bool validChoice(char select)
{
    switch (select)
    {
            case 'R':
            case 'r':
            case 'P':
            case 'p':
            case 'S':
            case 's':
                return true;
            default:
                return false;
    }
}


// Converts the choice and returns object type
objectType retrievePlay(char select)
{
    objectType object;
    
    switch(select)
    {
            case 'R':
            case 'r':
                object = ROCK;
                break;
            case 'P':
            case 'p':
                object = PAPER;
                break;
            case 'S':
            case 's':
            object = SCISSORS;
    }
        return object;
}


// If which player wins, or is it a tie
void theResult(objectType player1, objectType player2, int& winner)
{
    objectType winnerObject;
    
    if (player1 == player2)
    {
        winner = 0;
        std::cout << "Both players chose: ";
        convertEnumType(player1);
        std::cout << "The game ends in a tie" << std::endl;
    }
    else
    {
        //Output players' choices
        winnerObject = winningObject(player1, player2);
        std::cout << "Player 1 selected: ";
        convertEnumType(player1);
        std::cout << "Player 2 selected: ";
        convertEnumType(player2);
        
        //Choose winner
        if (player1 == winnerObject)
            winner = 1;
        else if (player2 == winnerObject)
            winner = 2;
        
        //Output winner
        std::cout << "Player " << winner <<  "wins the game" << std::endl;
    }
    
}


// Covert Enum types
void convertEnumType (objectType object)
{
    switch(object)
    {
        case ROCK:
            std::cout << "Rock!";
            break;
        case PAPER:
            std::cout << "Paper!";
            break;
        case SCISSORS:
            std::cout << "Scissors!";
            break;
    }
}


// Choose winner object
objectType chooseWinnerObject (objectType player1, objectType player2)
{
    if ((player1 == ROCK && player2 == SCISSORS) || (player2 == ROCK && player1 == SCISSORS))
        return ROCK;
    else if ((player1 == ROCK && player2 == PAPER) || (player2 == ROCK && player1 == PAPER))
        return PAPER;
    else
        return SCISSORS;
}


// Display final results
void displayFinalResults(int gameCount, int winCountPlayer1, int winCountPlayer2)
{
    std::cout << "The total game played: " << gameCount << std::endl;
    std::cout << "Player 1 won: " << winCountPlayer1 << "games" << std::endl;
    std::cout << "Player 2 won: " << winCountPlayer2 << "games" << std::endl;
}


int main()
{
    int gameCount=0;
    int winCountPlayer1=0;
    int winCountPlayer2=0;
    int winnerPlayer;
    char playerResponse;
    
    char playerOneChoice;
    char playerTwoChoice;
    objectType player1;
    objectType player2;
    
    displayRules();
    
    std::cout << "Enter Y/y to play the game: ";
    std::cin >> playerResponse;
    std::cout << std::endl;
    
    while (playerResponse == 'Y' || playerResponse == 'y')
    {
        std::cout << "Enter player 1's choice: ";
        std::cin >> playerOneChoice;
        std::cout << std::endl;
        
        std::cout << "Enter player2's choice: ";
        std::cin >> playerTwoChoice;
        std::cout << std::endl;
        
        if (validChoice(playerOneChoice) && validChoice(playerTwoChoice))
        {
            player1 = retrievePlay(playerOneChoice);
            player2 = retrievePlay(playerTwoChoice);
            gameCount++;
            theResult(player1, player2, winnerPlayer);
            
            if (winnerPlayer == 1)
                winCountPlayer1++;
            else if (winnerPlayer == 2)
                winCountPlayer2++;
        }
        std::cout << "Enter Y/y to play a game of Rock, Paper, Scissors: ";
        std::cin >> playerResponse;
        std::cout << std::endl;
        
        return 0;
    }
}




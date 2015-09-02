//
//  main.cpp
//   Candidate View
//
//  Created by JLegendary on 9/2/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    //Declare variables
    int counter = 0;
    int sum = 0;
    double percentage = 0;
    int arraySize = 0;
    int maxVotes = 0;
    int counterMax = 0;
    
    //Declare dynamic arrays
    string *names;
    int *votes;

    //Prompt user for the array size and create arrays
    cout << "Enter the number of candidates: ";
    cin >> arraySize;
    
    // Terminate if wrong data type
    while (!cin)
    {
        cin.clear();
        cin.ignore(200, '\n');
        cout << "\nInput failed. Wrong data type.\nEnter the number of candidates: ";
        cin >> arraySize;
    }
    cout << endl;
    
    
    //Create string arrays to hold names and votes using the array size input by the user
    names = new string[arraySize];
    votes = new int[arraySize];
    

    //Get input from user
    //loop through the array #of user input
    for (counter = 0; counter < arraySize; counter++)
    {
        cout << "Enter the candidate name: ";
        cin >> names[counter];
        cout << "Enter the number of votes received:";
        cin >> votes[counter];
        while (!cin)
        {
            cin.clear();
            cin.ignore(200, '\n');
            cout << "Input data mismatch.\nPlease enter the number of votes received";
            cout << " for " << names[counter] << ": ";
            cin >> votes[counter];
        }
        sum = sum + votes[counter];
        cout << endl;
        cout << "Candidate: " << names[counter] << "   Votes: " << votes[counter] << endl << "\n";
        
        
    }
    
    //Display results
    cout << fixed << showpoint << setprecision(2);
    cout << "\n\n";
    cout << "Election Results" << endl;
    cout << setw(15) << left << "Candidate        Votes  % of total votes" << endl;
    for (counter = 0; counter < arraySize; counter++)
    {
        cout << setw(15) << left << names[counter];
        cout << setw(6) << right << votes[counter];
        
        //Calculate percentage for each candidate
        percentage = static_cast<double>(votes[counter]) / sum * 100;
        cout << setw(10) << right << percentage;
        cout << endl;
    }
    
    //Output the total number of votes cast
    cout << setw(15) << left << "Total:";
    cout << setw(6) << right << sum << endl;
    
    

    //Find max number of votes
    for (counter = 0; counter < arraySize; counter++)
    {
        if (votes[counter] > maxVotes)
        {
            maxVotes = votes[counter];
            counterMax = counter;
        }
    }
    // Display winner
    cout << "The winner of the Election is: " << names[counterMax] << endl;

    
    return 0;
}

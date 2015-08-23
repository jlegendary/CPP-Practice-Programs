//
//  main.cpp
//  Type of Triangle
//   Find the type of triangle
//
//  Created by JLegendary on 8/22/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//   JLegendary@me.com


#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void hidePassword(string &pWord);
void hideSSN(string &SSN);

int main()
{
    string inputLine, name, SSN, userID, password;
    
    cout << "Enter name, SSN, User ID, and password: " << endl;
    getline(cin, inputLine);
    
    long startIndex = inputLine.find(' ');
    long stopIndex = inputLine.find_first_of("0123456789", startIndex=0);
    long nChars = stopIndex - startIndex;
    name = inputLine.substr(startIndex, nChars);
    
    startIndex = stopIndex;
    stopIndex = inputLine.find(' ', startIndex);
    nChars = stopIndex - startIndex;
    SSN = inputLine.substr(startIndex, nChars);
    
    startIndex = inputLine.find_first_not_of(" ", stopIndex);
    stopIndex = inputLine.find(' ', startIndex);
    nChars = stopIndex - startIndex;
    userID = inputLine.substr(startIndex, nChars);
    
    startIndex = inputLine.find_first_not_of(" ", stopIndex);
    stopIndex = inputLine.find(' ', startIndex);
    if (static_cast<unsigned int>(stopIndex) > inputLine.length())
        stopIndex = inputLine.length();
    nChars = stopIndex - startIndex;
    password = inputLine.substr(startIndex, nChars);
    
    hideSSN(SSN);
    hidePassword(password);
    
    cout << "Your information: "
         << "\nName: " << name << "\n"
         << "SSN: " << SSN << "\n"
         << "User ID: " << userID << "\n"
         << "Password: " << password << endl;
    
    return 0;
}


void hideSSN(string &SSN)
{
    string replaceString = "";
    long startIndex = 0;
    long stopIndex = SSN.find('-');
    long nChars = stopIndex - startIndex;
    replaceString.append(nChars, 'x');
    SSN.replace(startIndex, nChars, replaceString);
    
    replaceString = "";
    startIndex = stopIndex + 1;
    stopIndex = SSN.find('-', startIndex);
    nChars = stopIndex - startIndex;
    replaceString.append(nChars, 'x');
    SSN.replace(startIndex, nChars, replaceString);
    
    replaceString = "";
    startIndex = stopIndex + 1;
    stopIndex = SSN.length();
    nChars = stopIndex - startIndex;
    replaceString.append(nChars, 'x');
    SSN.replace(startIndex, nChars, replaceString);
}


void hidePassword(string &pWord)
{
    string replaceString = "";
    long startIndex = 0;
    long stopIndex = pWord.length();
    long nChars = stopIndex - startIndex;
    replaceString.append(nChars, 'x');
    pWord.replace(startIndex, nChars, replaceString);
}
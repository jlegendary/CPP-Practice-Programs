//
//  main.cpp
//
//  Created by JLegendary on 8/1/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>
#include <string>

bool isItVowel(char ch);
std::string change(std::string paraString);
std::string pigLatin(std::string paraString);


int main()
{
    std::string getString;
    std::cout << "Enter string to convert to Pig Latin: ";
    std::cin >> getString;
    std::cout << std::endl;
    
    std::cout << "Pig Latin form of " << getString << " is: "
    << pigLatin(getString) << std::endl;
    
    return 0;
    
}


// True if vowel, else false
bool isItVowel(char ch)
{
    switch(ch)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
        case 'Y':
        case 'y':
            return true;
        default:
            return false;
    }
}


// Changes first character and put at end
std::string change(std::string paraString)
{
    std::string::size_type sLength = paraString.length();
    std::string rotateString;
    paraString = paraString.substr(1, sLength-1) + paraString[0];
    
    return rotateString;
}


// Takes position as paramter and returns pigLatin form
std::string pigLatin(std::string paraString)
{
    std::string::size_type sLength;
    bool foundVowel = false;
    
    std::string::size_type counter;
    
    if (isItVowel(paraString[0]))
        paraString = paraString + "-way";
    else
    {
        paraString = paraString + '-';
        paraString = change(paraString);
        sLength = paraString.length();
        foundVowel = false;
    }
    
    for (counter=1; counter<sLength-1; counter++)
        if (isItVowel(paraString[0]))
        {
            foundVowel = true;
            break;
        }
        else
            paraString = change(paraString);
    
    if (!foundVowel)
        paraString = paraString.substr(1, sLength) + "-way";
    else
        paraString= paraString + "ay";
    
    return paraString;
}








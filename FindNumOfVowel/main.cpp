//
//  main.cpp
//
//  Created by JLegendary on 8/10/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>
#include <cctype>
#include <string>

using namespace std;

bool isVowel(char ch);

int main()
{
    string word;
    int index = 0;
    int vowelCount = 0;
    cout << "Enter a string: " << endl;
    cin >> word;
    
    for (index = 0; index < word.length(); index++)
    {
        if (isVowel(word[index]) == true)
            vowelCount++;
    }
 
    cout << "Number of vowels is: " << vowelCount << endl;
    
    return 0;
}


bool isVowel(char ch)
{
    ch = tolower(ch);
    if (ch == 'a' || ch =='e' || ch =='i' || ch =='o' || ch =='u')
        
        return true;
    else
        return false;
}
//
//  main.cpp
//   Uppercase Strings
//
//  Created by JLegendary on 8/29/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//   JLegendary@me.com
//


#include <iostream>
#include <string>

int main()
{
    std::string inputWords;
    // max character to hold
    char alphabet[100];
    
    // Input and output
    std::cout<<"Please input string(s): "<< std::endl;
    
    // get whole line input
    getline(std::cin, inputWords);
    
    // copy inputWords into arrayChar
    strcpy(alphabet, inputWords.c_str());
    
    // for each char in the array, uppercase each
    for(int i=0; i<inputWords.length(); i++)
    {
        alphabet[i]=toupper(alphabet[i]);
        std::cout<<alphabet[i];
    }
    
    return 0;
    
}
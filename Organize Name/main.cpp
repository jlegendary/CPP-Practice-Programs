//
//  Organize Name
//   Arrange name from lastName, firstName middleName to first middle last.
//
//  Created by JLegendary on 8/5/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//   JLegendary@me.com


#include <iostream>
#include <fstream>

std::string arrangeName(std::string inputName);

int main()
{
    std::ifstream inputFile;
    inputFile.open("StudentNames.txt");
    std::string inputName, outputName;
    
    getline(inputFile, inputName);
    while (inputFile)
    {
        outputName = arrangeName(inputName);
        std::cout << outputName << std::endl;
        getline(inputFile, inputName);
    }
    inputFile.close();
    
    return 0;
}


std::string arrangeName(std::string inputName)
{
    double lastNameLength = inputName.find(",");
    std::string lastName = inputName.substr(0, lastNameLength);
    
    int firstNameStart = lastNameLength + 2;
    int nameLength = static_cast<int>(inputName.length());
    std::string firstName = inputName.substr(firstNameStart, nameLength);
    
    return (firstName + " " + lastName);
}
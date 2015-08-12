//
//  main.cpp
//
//  Created by JLegendary on 8/11/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>

int reverseDigit(int);

int main()
{
    int number;
    int reversedNumber;
    std::cout << "Enter the numbers to reverse: " << std::endl;
    std::cin >> number;
    
    reversedNumber = reverseDigit(number);
    std::cout << "Numbers reversed: " << reversedNumber << std::endl;
    
    return 0;
}

    
    
int reverseDigit (int number)
{
    bool isNegative;
    isNegative = false;

    if (number < 0)
    {
        number = number * -1;
        isNegative = true;
    }
    

    int reversedNumber = 0;
    int digit;
    
    while (number > 0)
    {
        digit = number % 10;
        number /=10;
        reversedNumber = reversedNumber * 10 + digit;
    }
    
    if (isNegative == true)
        reversedNumber = reversedNumber * -1;


    
    return reversedNumber;
}
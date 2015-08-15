//
//  Number of Odd, Even, Zero digits.
//
//  Created by JLegendary on 8/14/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>

void digitTest(long long checkNum, int &oddNum, int &evenNum, int &zeroNum);

int main()
{
    long long checkNum;
    int oddNum, evenNum, zeroNum;
    
    std::cout << "Enter a interger to check to see how many number are odd, even, or 0: " << std::endl;
    std::cin >> checkNum;
    
    digitTest(checkNum, oddNum, evenNum, zeroNum);
    
    std::cout << "Number of odd digits: " << oddNum << std::endl;
    std::cout << "Number of even digits: " << evenNum << std::endl;
    std::cout << "Number of zero digits: " << zeroNum << std::endl;
    
    return 0;
}

void digitTest(long long checkNum, int &oddNum, int &evenNum, int &zeroNum)
{
    int digit;
    oddNum = 0;
    evenNum= 0;
    zeroNum= 0;
    
    if (checkNum<0)
        checkNum = checkNum*-1;
    
    while (checkNum>0)
    {
        digit = checkNum%10;
        if (digit == 0)
            zeroNum = zeroNum+1;
        else if (digit%2 ==0)
            evenNum = evenNum+1;
        else
            oddNum = oddNum+1;
        checkNum = checkNum/10;
    }
}
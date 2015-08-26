//
//  main.cpp
//   Array
//
//  Created by JLegendary on 8/25/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>
#include <cmath>

int main()
{
    double alpha[50];

    // first 25 components are equal to the square of the index variable
    for (int iii = 0; iii < 50; iii++)
    {
        if (iii<25)
        {
            alpha[iii]=pow(iii, 2);
        }
        else
        {
            alpha[iii]= 3*iii;
        }
    }
    
    // output
    std::cout << "Alpha array: \n" << std::endl;
    
    // output 10 elements per line
    for (int iii = 0; iii < 50; iii++)
    {
        std::cout << alpha[iii] << " ";
        if ( (iii+1) % 10 == 0)
        {
            std::cout << std::endl;
        }
    }
    return 0;
}
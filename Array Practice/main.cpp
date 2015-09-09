//
//  main.cpp
//    Array Practice
//
//  Created by JLegendary on 9/8/15. JLegendary@me.com
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>
#include <cmath>

int main()
{
    double alpha[50];
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

    std::cout << "Alpha array: \n" << std::endl;
    
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

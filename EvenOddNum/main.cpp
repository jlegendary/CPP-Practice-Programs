//
//  main.cpp
//
//  Created by JLegendary on 8/8/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>
using namespace std;

int numInt, evSum, odSum, curInt;

int main()
{
    evSum = 0;
    odSum = 0;
    
    cout << "Enter the number of integers to sum: " << endl;
    cin >> numInt;
    

    while (curInt < numInt)
    {
        if (curInt % 2 == 0)
            evSum += curInt;
        else
            odSum += curInt;
        curInt += 1;
    }
    
    cout << "Sum of even intergers: " << evSum << endl;
    cout << "Sum of odd intergers: " << odSum << endl;
    
    return 0;
}

//
//  main.cpp
//
//  Created by JLegendary on 8/4/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    double side1, side2, side3;
    double sideA, sideB, sideC;
    
    cout << "Enter the lengths of the 3 sides:" << endl;
    cin >> side1 >> side2 >> side3;
    
    if (side1 > side2 && side1 > side3)
    {
        sideC = side1;
        sideA = side2;
        sideB = side3;
    }
    else if (side2 > side1 && side2 > side3)
    {
        sideC = side2;
        sideA = side1;
        sideB = side3;
    }
    else
    {
        sideC = side3;
        sideA = side1;
        sideB = side2;
    }
    
    if (pow(sideC, 2) == pow(sideA, 2) + pow(sideB, 2))
        cout << "Right triangle" << endl;
    else
        cout << "Not a right triangle" << endl;
    
    return 0;
}
//
//  main.cpp
//
//  Created by JLegendary on 8/6/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>
#include <cmath>

using namespace std;


double length, width;
double pointSize;
char spacing;
double charLine, linePage;
double top, bottom;
const int pointsPerInch = 72;

int main()
{
    double left, right;
    
    cout << "Enter the length and width of the paper in inches: " << endl;
    cin >> length >> width;
    cout << "Enter the top and bottom margins in inches: " << endl;
    cin >> top >> bottom;
    cout << "Enter the left and right margins in inches: " << endl;
    cin >> left >> right;
    cout << "Enter point size: " << endl;
    cin >> pointSize;
    cout << "Enter s or S for single spaced. Enter d or D for double spaced: " << endl;
    cin >> spacing;
    
    charLine = ((width - left - right) * pointsPerInch) / pointSize;
    if (spacing == 's' || spacing == 'S')
        linePage = ((length - top - bottom) * pointsPerInch) / pointSize;
    else
        linePage = ((length - top - bottom) * pointsPerInch) / (pointSize * 2);
 
    cout << "Number of characters per line is: " << charLine << endl;
    cout << "Number of lines per page is: " << linePage << endl;
    
    return 0;
    
}
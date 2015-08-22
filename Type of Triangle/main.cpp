//
//  main.cpp
//  Type of Triangle
//   Find the type of triangle
//
//  Created by JLegendary on 8/22/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//   JLegendary@me.com


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

enum trianglesType {scalene, isosceles, equilateral, noTriangle};

void getSides(double &a, double &b, double &c);
trianglesType getTriangleType(double a, double b, double c);
void showTriangleType(trianglesType typeToDisplay);

int main()
{
    double side1, side2, side3;
    trianglesType aTriangleType;
    
    getSides(side1, side2, side3);
    aTriangleType = getTriangleType(side1, side2, side3);
    showTriangleType(aTriangleType);
    
    return 0;
}


void getSides(double &a, double &b, double &c)
{
    cout << "Enter the length of three sides of the triangle: " << endl;
    cin >> a >> b >> c;
}


trianglesType getTriangleType(double a, double b, double c)
{
    trianglesType returnType;
    if (a + b <= c || b + c <= a || c + a <= b)
        returnType = noTriangle;
    else if (a == b && b == c)
        returnType = equilateral;
    else if (a == b || b == c || c == a)
        returnType = isosceles;
    else
        returnType = scalene;
    
    return returnType;
}


void showTriangleType(trianglesType displayTriangleType)
{
    cout << endl;
    if (displayTriangleType == scalene)
        cout << "The triangle is scalene." << endl;
    else if (displayTriangleType == isosceles)
        cout << "The triangle is isosceles." << endl;
    else if (displayTriangleType == equilateral)
        cout << "The triangle is equilateral." << endl;
    else if (displayTriangleType == noTriangle)
        cout << "The sides won't make any type of triangle" << endl;
}


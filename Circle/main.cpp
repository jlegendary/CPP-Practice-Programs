//
//  main.cpp
//    Circle Program
//
//  Created by JLegendary on 8/12/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>
#include <cmath>
#include <iomanip>

void getPoints(double &x1, double &x2, double &y1, double &y2);
double calcRadius(double, double, double, double);
double calcDiameter(double);
double calcCircumference(double);
double calcArea(double);
void showCircleParameters(double, double, double, double);

const double PI = 3.1416;

int main()
{
    double x1, x2, y1, y2;
    double radius;
    double diameter;
    double circumference;
    double area;
    
    getPoints(x1,x2,y1,y2);
    radius = calcRadius(x1,y1,x2,y2);
    diameter = calcDiameter(radius);
    circumference = calcCircumference(radius);
    area = calcArea(radius);
    
    showCircleParameters(radius, diameter, circumference, area);

    return 0;
}


void getPoints(double &x1, double &x2, double &y1, double &y2)
{
    std::cout << "Enter the center coordinates of the circle: " << std::endl;
    std::cin >> x1 >> y1;
    std::cout << std::endl;
    
    std::cout << "Enter the coordinates of a point on the edge of the circle: " << std::endl;
    std::cin >> x2 >> y2;
    std::cout << std::endl;
}


double calcRadius(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x2-x1),2) + pow((y2-y1),2));
}


double calcDiameter(double radius)
{
    return radius * 2;
}


double calcCircumference(double radius)
{
    return 2 * PI * radius;
}


double calcArea(double radius)
{
    return PI * radius * radius;
}


void showCircleParameters(double radius, double diameter, double circumference, double area)
{
    std::cout << std::showpoint << std::fixed << std::setprecision(3);
    std::cout << "Circle Parameters: " << std::endl;
    std::cout << "Radius: " << radius << std::endl;
    std::cout << "Diameter: " << diameter << std::endl;
    std::cout << "Circumference: " << circumference << std::endl;
    std::cout << "Area: " << area << std::endl;
}
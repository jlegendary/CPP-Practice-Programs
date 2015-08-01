//
//  main.cpp
//  Chapter 2- Problem 1
//
//  Created by Lejendary on 6/6/15.
//  Copyright (c) 2015 Lejendary. All rights reserved.
//cout << "Total is: " << static_cast<int> (m) << m << endl;

#include <iostream>
using namespace std;

    // variables
double numOne, numTwo, numThree, numFour, numFive;
double m;
int t;

    // main
int main ()
{
    //input
    cout << "Input five decimal numbers: " << endl;
    cin >> numOne >> numTwo >> numThree >> numFour >> numFive;
    //sum
    m = numOne + numTwo + numThree + numFour + numFive;
    //convert to integer by switching to int
    t = m + 0.5;
    // output
    cout << "Total is: " << t << endl;
    return 0;
}


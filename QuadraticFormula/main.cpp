//
//  main.cpp
//
//  Created by JLegendary on 8/5/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double a, b, c;
double discriminant;
double root1, root2;


int main()
{
    cout << "Enter the coefficients a, b, and c: " << endl;
    cin >> a >> b >> c;
    cout <<  setprecision(3);
    
    discriminant = pow(b, 2) - 4 * a*c;
    
    if (discriminant >= 0)
    {
        root1 = (-b + sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);
        root2 = (-b - sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);
        if (root1 == root2)
        {
            cout << "This equation has a single repeated real root: " << root1 << ", " << root2 << endl;
        }
        else
        {
            cout << "This equation has two real roots: " << root1 << ", " << root2 << endl;
        }
    }
    else
        cout << "This equation has two complex roots " << endl;

    
    return 0;
}
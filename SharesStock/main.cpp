//
//  main.cpp
//
//  Created by JLegendary on 8/3/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

    // variables
const double servCharge = 0.015;
int numShareSold;
double buyShare, sellShare, amountInvested, totServCharge, netAmount;

int main ()
{   //inputs
    cout << "How many shares did you sell? " << endl;
    cin >> numShareSold;
    cout << "\nWhat was the purchase price of each share? \n$";
    cin >> buyShare;
    cout << "\nWhat was the selling price of each share? \n$";
    cin >> sellShare;
    
    //formulas
    amountInvested = numShareSold * buyShare;
    totServCharge = (numShareSold * sellShare) * servCharge;
    netAmount = (numShareSold * sellShare) - totServCharge;
    
    //decimals
    cout << fixed << showpoint << setprecision(2);
    
    //outputs
    cout << "Amount invested: $" << amountInvested << endl;
    cout << "Service charged: $" << totServCharge << endl;
    cout << "Final profit/loss: $" << netAmount - amountInvested << endl;
    
    return 0;
}

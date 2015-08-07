//
//  main.cpp
//
//  Created by JLegendary on 8/7/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>
using namespace std;

double billingAmount, desirPay;
double charge, credit;
double balance, finbalance;

int main()
{
    cout << "Enter in the billing amount and desired payment: \n" ;
    cin >> billingAmount >> desirPay ;
    
      // Paid in full
    if (desirPay == billingAmount)
    {
        cout << "\nRemaining bill balance: $0";
        credit = billingAmount * 0.01;
        if (10 > credit)
        {   // If 1% of balance is less than $10, will be credit 1% of balance
            cout << "\nCredited: $" << credit ;
            cout << "\nUpdated bill balance: -$" << credit;
        }
        else
        {   // If 1% of balance is more than $10, will be credited $10
            cout << "\nCredited: $" << "10" ;
            cout << "\nUpdated bill balance: -$" << 10;
        }
    }
    
    
      // Paid at least 50%
    else if (desirPay >= billingAmount * 0.5 && desirPay <= billingAmount)
    {   // Charged 5% of the balance
        charge = (billingAmount - desirPay) * 0.05;
        balance = billingAmount - desirPay;
        finbalance = balance + charge;
        cout << "\nRemaining bill balance: $" << balance
             << "\nCharged: $" << charge
             << "\nUpdated bill balance: $" << finbalance;
    }
    
    
      // Paid at least 20% and less than 50%
    else if (desirPay >= billingAmount * 0.2 && desirPay < billingAmount * 0.5)
    {   // charged 10% of the balance
        charge = (billingAmount - desirPay) * 0.1;
        balance = billingAmount - desirPay;
        finbalance = balance + charge;
        cout << "\nRemaining bill balance: $" << balance
             << "\nCharged: $" << charge
             << "\nUpdated bill balance: $" << finbalance;
    }
    
    
      // Everything else
    else
    {   // charged 20% of balance
        charge = (billingAmount - desirPay) * 0.2;
        balance = billingAmount - desirPay;
        finbalance = balance + charge;
        cout << "\nRemaining bill balance: $" << balance
             << "\nCharged: $" << charge
             << "\nUpdated bill balance: $" << finbalance;
    }
    
    return 0;
}






//
//  Accountant Calculator
//   Find the accountant bill.
//
//  Created by JLegendary on 8/13/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>
#include <iomanip>

double totalBill(double income, double consultTime, double hrRate);
void information(double &income, double &consultTime, double &hrRate);

const double incomeLimit = 25000;

int main()
{
    double bill,income, consultTime, hrRate;
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    information(income, consultTime, hrRate);

    
    bill= totalBill(income, consultTime, hrRate);
    std::cout << "\nThe total billing amount is $" << bill << std::endl;
    return 0;
}

void information(double &income, double &consultTime, double &hrRate)
{
    std::cout << "Enter the income: $";
    std::cin >> income;
    std::cout << "\nEnter the consult time in minutes: ";
    std::cin >> consultTime;
    std::cout << "\nEnter the charging hourly rate: $";
    std::cin >>hrRate;
}

double totalBill(double income, double consultTime, double hrRate)
{
    double bill = 0.0;
    if(income<=incomeLimit)
    {
        if(consultTime <= 30)
        {
            bill=0;
        }
        else
        {
            bill=((consultTime - 30)*.40);
        }
    }
    if (income >25000)
    {
        if(consultTime <= 20)
        {
            bill=0;
        }
        else
        {
            bill=((consultTime - 20)*.70);
        }
    }
    return bill;
}


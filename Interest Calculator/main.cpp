//
//  Interest Calculator
//
//  Created by JLegendary on 8/13/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>
#include <iomanip>
#include <cmath>

void loanInfo(double &L, double&r, int&m, int&t, int &k);
double calcPeriodicPayment (double L, double i, int m, int t, int k);
double calcUnpaidBalan (double perodicPayment, double i,int m, int t, int k);

int main()
{
    double L, r, i;
    int m, t, k;
    double periodicPayment, unpaidBalan;
    int choice;
    
    do
    {
        loanInfo(L,r,m,t,k);
        i=r/m;
        
        periodicPayment = calcPeriodicPayment(L,i,m,t,k);
        unpaidBalan     = calcUnpaidBalan(periodicPayment,i,m,t,k);
        
        std::cout << std::showpoint << std::fixed << std::setprecision(2);
        std::cout << "The periodic payment: $" << periodicPayment << std::endl;
        std::cout << "The unpaid balance: $" << unpaidBalan << std::endl;
        std::cout << "For new loan information, type '1'" << std::endl;

        std::cin >> choice;
    } while (choice == '1');

    return 0;
}


void loanInfo(double &L, double &r, int &m, int &t, int &k)
{
    std::cout << "Enter the initial loan amount: " << std::endl;
    std::cin >> L;
    
    std::cout << "\nEnter the interest rate: " << std::endl;
    std::cin >> r;
    std::cout << "Interest rate: " << r/100 << "%" << std::endl;
    
    std::cout << "\nEnter the number of periods per year: " << std::endl;
    std::cin >> m;
    
    std::cout << "\nEnter the length of the loan in years: " << std::endl;
    std::cin >> t;
    
    std::cout << "\nEnter the number of payments already made: " << std::endl;
    std::cin >> k;
}


double calcPeriodicPayment(double L, double i, int m, int t,int k)
{
    return (L*i) / (1 - pow((1 + i), (-m * t)));
}


double calcUnpaidBalan(double periodicPayment, double i, int m, int t, int k)
{
    return (periodicPayment * ((1 - pow((1 + i), -(m*t - k))) / i));
}
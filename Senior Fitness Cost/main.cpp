//
//  Senior Citizen membership to fitness center
//  
//
//  Created by JLegendary on 8/16/15. 
//  Copyright (c) 2015 JLegendary. All rights reserved.
//  Email: JLegendary@me.com
//


#include <iostream>
#include <iomanip>

using namespace std;

void getCosts(double &monthCost, int &seniorAge, double &trainingCost);
void costDiscountInfo(double monthCost, int seniorAge, double trainingCost);
void memberInfo(int &age, int &memberMonths, int &trainMonths);
void memberCost(int age, int seniorAge, double monthCost, int memberMonths, double trainCost, int trainSessions);

int main()
{
    double monthlyCost;
    int seniorAgeCutoff;
    double trainingCost;
    
    int memberAge, membershipMonths, trainingMonths;
    
    getCosts(monthlyCost, seniorAgeCutoff, trainingCost);
    
    int menuOption = 0;
    while (menuOption != 4)
    {
        cout << endl;
        cout << "        Menu" << endl;
        cout << "--------------------" << endl;
        cout << "1. Show costs and discounts" << endl;
        cout << "2. Get member information" << endl;
        cout << "3. Calculate cost of membership" << endl;
        cout << "4. Quit" << endl;
        
        cout << "Enter a menu option: ";
        cin >> menuOption;
        
        if (menuOption == 1)
            costDiscountInfo(monthlyCost, seniorAgeCutoff, trainingCost);
        else if (menuOption == 2)
            memberInfo(memberAge, membershipMonths, trainingMonths);
        else if (menuOption == 3)
            memberCost(memberAge, seniorAgeCutoff, monthlyCost, membershipMonths, trainingCost, trainingMonths);
        else if (menuOption != 4)
            cout << "Invalid input: no such menu option!" << endl;
    }
    return 0;
}

void getCosts(double &monthCost, int &seniorAge, double &trainingCost)
{
    cout << "Enter the normal monthly membership cost: " << endl;
    cin >> monthCost;
    cout << "Enter the senior citizen age: " << endl;
    cin >> seniorAge;
    cout << "Enter the training session cost: " << endl;
    cin >> trainingCost;
}

void costDiscountInfo(double monthCost, int seniorAge, double trainingCost)
{
    const int MIN_MONTHS_FOR_DISCOUNT = 12;
    const double MONTH_DISCOUNT = 0.15;
    const double SENIOR_CITIZEN_DISCOUNT = 0.30;
    const int MIN_TRAIN_FOR_DISCOUNT = 6;
    const double TRAIN_DISCOUNT = 0.20;
    
    cout << "Minimum number of months to get the " << MONTH_DISCOUNT * 100 << "% discount per month: " << MIN_MONTHS_FOR_DISCOUNT << endl;
    cout << "Minimum number of training sessions to get the " << TRAIN_DISCOUNT * 100 << "% discount per session: " << MIN_TRAIN_FOR_DISCOUNT << endl;
    cout << "Senior citizen discount: " << SENIOR_CITIZEN_DISCOUNT * 100 << "%" << endl;
}

void memberInfo(int &age, int &memberMonths, int &trainMonths)
{
    cout << "Enter the member age: " << endl;
    cin >> age;
    cout << "Enter the number of membership months being purchased: " << endl;
    cin >> memberMonths;
    cout << "Enter the number of training sessions being purchased: " << endl;
    cin >> trainMonths;
}

void memberCost(int age, int seniorAge, double monthCost, int memberMonths, double trainCost, int trainSessions)
{
    const int MIN_MONTHS_FOR_DISCOUNT = 12;
    const double MONTH_DISCOUNT = 0.15;
    const double SENIOR_CITIZEN_DISCOUNT = 0.30;
    const int MIN_TRAIN_FOR_DISCOUNT = 6;
    const double TRAIN_DISCOUNT = 0.20;
    
    double monthOwed, trainOwed, memberOwed;
    
    monthOwed = monthCost * memberMonths;
    trainOwed = trainCost * trainSessions;
    
    if (age >= seniorAge) //apply senior discount
        monthOwed = monthOwed - (monthCost * memberMonths * SENIOR_CITIZEN_DISCOUNT);
    if (memberMonths >= MIN_MONTHS_FOR_DISCOUNT) //apply month discount
        monthOwed = monthOwed - (monthCost * memberMonths * MONTH_DISCOUNT);
    if (trainSessions >= MIN_TRAIN_FOR_DISCOUNT) //apply training session discount
        trainOwed = trainOwed - (trainCost * trainSessions * TRAIN_DISCOUNT);
    
    memberOwed = monthOwed + trainOwed;
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Member cost for " << memberMonths << " months = $" << monthOwed << endl;
    cout << "Training cost for " << trainSessions << " sessions = $" << trainOwed << endl;
    cout << "Total cost for membership = $" << memberOwed << endl;
}

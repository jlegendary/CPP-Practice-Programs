//
//  Day Of Year
//   Find the day number of the year.
//
//  Created by JLegendary on 8/13/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>

int daysInMonth(int month, int year);
bool isLeapYear(int year);

int main()
{
    int month, day, year;
    char ch;
    
    std::cout << "Enter date in form month-day-year. e.g., 1-1-2006 is January 1, 2006 " << std::endl;
    std::cin >> month >> ch >> day >> ch >> year;
    std::cout << std::endl;
    
    int mCount  = 0;
    int dayNumber = 0;
    
    while (mCount < month-1)
    {
        dayNumber = dayNumber + daysInMonth(mCount+1, year);
        mCount = mCount+1;
    }
    dayNumber = dayNumber + day;
    
    std::cout <<"The day number of the year for " << month << "-" << day << "-" << year << " is " << dayNumber << std::endl;
    
    return 0;
}


int daysInMonth(int month, int year)
{
    const int JAN=1;
    const int FEB=2;
    const int MAR=3;
    const int APR=4;
    const int MAY=5;
    const int JUNE=6;
    const int JULY=7;
    const int AUG=8;
    const int SEP=9;
    const int OCT=10;
    const int NOV=11;
    const int DEC=12;
    
    int days;
    if(month==JAN || month==MAR || month==MAY || month==JULY || month==AUG || month==OCT || month==DEC)
        days = 31;
    else if (month == APR || month==JUNE || month==SEP || month==NOV)
        days = 30;
    else if (month ==FEB)
    {
        if (isLeapYear(year) ==true)
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
    }
    return days;
    }


bool isLeapYear(int year)
{
    if ((year % 100 == 0) && (year % 400 == 0))
        return true;
    else if ((year % 4 == 0) && (year % 100 !=0))
        return true;
    else if(year % 400 !=0)
        return false;
    else
        return false;
}




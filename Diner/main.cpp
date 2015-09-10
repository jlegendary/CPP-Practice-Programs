//
//  main.cpp
//   Diner Program
//
//  Created by JLegendary on 9/10/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//    JLegendary@me.com
//


#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_MENU_ITEMS=8;
const double SALES_TAX = .05;

struct menuItemStr
{
    string menuItem;
    double menuPrice;
    int orderCount=0;
};

void getMenuItems(menuItemStr menuList[]);
void showMenu(menuItemStr menuList[], int numItems);
void printTotal(menuItemStr menuList[], int numItems);


int main ()
{
    menuItemStr menuList[MAX_MENU_ITEMS];
    getMenuItems(menuList);
    showMenu(menuList,MAX_MENU_ITEMS);
    printTotal(menuList,MAX_MENU_ITEMS);
}


void getMenuItems(menuItemStr menuList[])
{
    menuList[0].menuItem="Plain Egg";
    menuList[0].menuPrice=1.45;
    
    menuList[1].menuItem="Bacon and Egg";
    menuList[1].menuPrice=2.45;
    
    menuList[2].menuItem="Muffin";
    menuList[2].menuPrice=0.99;
    
    menuList[3].menuItem="French Toast";
    menuList[3].menuPrice=1.99;
    
    menuList[4].menuItem="Fruit Basket";
    menuList[4].menuPrice=2.49;
    
    menuList[5].menuItem="Cereal";
    menuList[5].menuPrice=0.69;
    
    menuList[6].menuItem="Coffee";
    menuList[6].menuPrice=0.50;
    
    menuList[7].menuItem="Tea";
    menuList[7].menuPrice=0.75;
}


void showMenu(menuItemStr menuList[], int numItems)
{
    cout << "Welcome to Johnny's Resturant: " << endl;
    cout << "_______________________________\n\n" << endl;
    cout << left << setw(15) << "Menu item:" << setw(15) << "Food:" << right << setw(15) << "Price:" << endl;
    for(int i=0 ; i<numItems; i++)
    {
        cout << left << setw(15) << setprecision(2) << fixed << i << setw(15) <<
        left << menuList[i].menuItem <<  setw(10) << right << " $" << menuList[i].menuPrice <<endl;
    }
}


void printTotal(menuItemStr menuList[], int numItems)
{
    int menuItemNo;
    int quantity;
    double tax;
    double finalPrice;
    char input='y';
    double totalPrice=0;
    
    while(true)
    {
        if(tolower(input) == 'n')
        {
            break;
        }
        cout << "\nEnter menu item and amount: ";
        cin >> menuItemNo >> quantity;
        menuList[menuItemNo].orderCount += quantity;
        cout << "\nDo you want more items: y for Yes, n for No: ";
        cin >> input;
        cout << "\n";
    }
    
    for(int i=0; i<numItems; i++)
    {
        if(menuList[i].orderCount>0)
        {
            cout << "n\n\n\n\n\t\tWelcome to Johnny's Resturant: " << endl;
            cout << "_____________________________________________\n" << endl;
            cout << left << setw(15) << "Menu item:" << setw(15) << "Food:" << right << setw(15) << "Price:" << endl;
            cout << left << setw(15) << menuList[i].orderCount<< setw(15) <<
            menuList[i].menuItem << right << setw(10) << " $" << menuList[i].menuPrice * menuList[i].orderCount << endl;
            totalPrice += menuList[i].menuPrice * menuList[i].orderCount;
        }
    }
    cout << "\n\n\n" << setw(45) << "_________________" << endl;
    tax = totalPrice * SALES_TAX;
    finalPrice = totalPrice + tax;
    cout << setw(40) << "Tax   : $" << tax << endl;
    cout << setw(40) << "Total : $"<< finalPrice <<endl;
}
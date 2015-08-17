//
//  coffeeShop.cpp
//   Coffee Store
//
//  Created by JLegendary on 8/17/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include "coffeeStore.h"
#include <iostream>       // Need for input and output
#include <iomanip>        // Need for setprecision to 2 decimal points

// Calls menu
void coffeeStore::menu()
{
    // Set 2 decimal points
    std::cout << std::showpoint << std::fixed << std::setprecision(2);
    int menuInput = 0;
    // While menu Input is not 5, 5 is to quit
    while (menuInput != 5)
    {
        std::cout << "\n\n\n\n\n\n\n*******************" << std::endl;
        std::cout << "      Menu: " << std::endl;
        std::cout << "*******************" << std::endl;
        std::cout << "1. Buy coffee: " << std::endl;
        std::cout << "2. Show cups of coffee sold: " << std::endl;
        std::cout << "3. Show number of coffee sold: " << std::endl;
        std::cout << "4. Show total profit: " << std::endl;
        std::cout << "5. Quit: " << std::endl;
    
        std::cout << "Enter a menu option: \n";
        std::cout << "\n=====> ";
        std::cin >> menuInput;
      // Switch from 4 choices
        switch(menuInput)
        {
            // Calls buyCoffee function and allows to purchase size and quantity
            case 1:
                buyCoffee();
                break;
            // Calls number of cups sold: small, medium, and large
            case 2:
                cupsSold();
                break;
            // Calls total amount of coffee in ounces sold
            case 3:
                coffeeSold();
                break;
            // Calls total amount of money made
            case 4:
                moneyMade();
                break;
        }
    }
}

// buyCoffee function
void coffeeStore::buyCoffee()
    {
        int type   = 0;
        int amount = 0;
        std::cout << "\nEnter coffee choices: ";
        std::cout << "\n1. Small";
        std::cout << "\n2. Medium";
        std::cout << "\n3. Large\n\n";
        std::cout << "=====> ";
        std::cin >> type;
        
        // Switch to sizes and then to quantity
        switch(type)
        {
            // Small
            case 1:
                std::cout << "\nYou chose a small coffee";
                std::cout << "\nHow many do you want?";
                std::cout << "\n=====> ";
                std::cin >> amount;
                
                // Update money made
                netMade += smallPrice * amount;
                
                // Update small cup of coffee sold
                smallSold += amount;
                
                // Singular or plural on small coffee(s)
                if (amount == 1)
                {
                    std::cout << amount << " Small coffee bought for $" << smallPrice * amount;
                    std::cout << "\n" << std::endl;
                }
                else
                {
                    std::cout << amount << " Small coffees bought for $" << smallPrice * amount;
                    std::cout << "\n" << std::endl;
                }
                break;
                
                // Medium coffee
            case 2:
                std::cout << "\nYou chose a medium coffee";
                std::cout << "\nHow many do you want?";
                std::cout << "\n=====> ";
                std::cin >> amount;
                
                // Update money made
                netMade += mediumPrice * amount;
                
                // Update medium cup of coffee sold
                mediumSold += amount;
                
                // Singular or plural on medium coffee(s)
                if (amount == 1)
                {
                    std::cout << amount << " Medium coffee bought for $" << mediumPrice * amount;
                    std::cout << "\n" << std::endl;
                }
                else
                {
                    std::cout << amount << " Medium coffees bought for $" << mediumPrice * amount;
                    std::cout << "\n" << std::endl;
                }
                break;
                
                // Large coffee
            case 3:
                std::cout << "\nYou chose a large coffee";
                std::cout << "\nHow many do you want?";
                std::cout << "\n=====> ";
                std::cin >> amount;
                
                // Update money made
                netMade += largePrice * amount;
                
                // Update number of large cup of coffee sold
                largeSold += amount;
                
                // Singular or plural for large cup(s)
                if (amount == 1)
                {
                    std::cout << amount << " Large coffee bought for $" << largePrice * amount;
                    std::cout << "\n" << std::endl;
                }
                else
                {
                    std::cout << amount << " Large coffees bought for $" << largePrice * amount;
                    std::cout << "\n" << std::endl;
                }
                break;
        }
        
    }

// Number of coffee sold
void coffeeStore::cupsSold()
    {
        std::cout << "\nTotal number of cup of coffee sold: \n";
        std::cout << "\n\tTotal number of small cups sold: " << smallSold;
        std::cout << "\n\tTotal number of medium cups sold: " << mediumSold;
        std::cout << "\n\tTotal number of large cups sold: " << largeSold;
        
    }

// Coffee ounces sold
void coffeeStore::coffeeSold()
    {
        // Forumla for total ounces of coffee sold, by adding small, medium, and large
        int totalOz = (smallSold * smallSize) + (mediumSold * mediumSize) + (largeSold * largePrice);
        
        // Output total ounces of coffee sold
        std::cout << "\nCoffee sold in ounce: " << totalOz << std::endl;
      
    }

// Total money made
void coffeeStore::moneyMade()
    {
        // Formula for total money made, combine small, medium, and large
        double totalMoney = (smallSold * smallPrice) + (mediumSold * mediumPrice) + (largeSold * largePrice);
        
        // Output total money made
        std::cout << "\nTotal money made: $" << totalMoney << std::endl;
    
       
    }


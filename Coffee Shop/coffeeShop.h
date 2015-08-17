//
//  coffeeStore.h
//    Coffee Store
//
//  Created by JLegendary on 7/3/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#ifndef coffeeStore
#define coffeeStore

class coffeeStore
{
public:
    void menu();
    void buyCoffee();
    void cupsSold();
    void coffeeSold();
    void moneyMade();
    
private:
    double netMade = 0;

    const double smallPrice = 1.75;
    const double mediumPrice= 1.90;
    const double largePrice = 2.00;
    
    const int smallSize = 9;
    const int mediumSize= 12;
    const int largeSize = 16;
    
    int smallSold = 0;
    int mediumSold= 0;
    int largeSold = 0;
};


#endif

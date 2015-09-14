//
//  main.cpp
//    swimmingPool main file
//
//  Created by JLegendary on 9/13/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>
#include "Header.h"
#include <iomanip>
using namespace std;

int main()
{
    int timeHourNeedToFill, timeMinNeedToFill;
    int timeHourNeedToDrain, timeMinNeedToDrain;
    double amountWaterLeftAfterHalfDrain;
    int hourNeedFillPoolIfHalfFull, minNeedFillPoolIfHalfFull;
    double amountWaterAfrerAddingWaterForThreeHours;
    
    // Sets length, width, depth, fill rate, drain rate, and amount of water
    swimmingPool swimmingPool{30,15,10,20,19.5,0};
    
    cout << "Pool Data: " << endl;
    
    cout << "\nLength: " << swimmingPool.getLength() << " feet" << endl;
    
    cout << "\nWidth: " << swimmingPool.getWidth() << " feet" << endl;
    
    cout << "\nDepth: " << swimmingPool.getDepth() << " feet" << endl;
    
    cout << "\nFill Rate: " << swimmingPool.getWaterFlowRateIn() << " gal/min" << endl;
    
    cout << "\nDrain Rate: " << setprecision(1) << fixed << swimmingPool.getWaterFlowRateOut() << " gal/min" << endl;

    cout << "\nAmount of water in pool: " << setprecision(0) << swimmingPool.getTotalWaterInPool() << " gallon" << endl;
    
    cout << "\nWater needed to fill the pool: " << swimmingPool.poolTotalWaterCapacity()<< " gallons" << endl;
    
    timeHourNeedToFill = swimmingPool.timeToFillThePool()/60;
    timeMinNeedToFill = swimmingPool.timeToFillThePool()%60;
    cout << "\nTime needed to fill the pool: "  << timeHourNeedToFill <<
            " hours and " << timeMinNeedToFill << " minutes" << endl;

    cout << "\nAfter filling pool to capacity, amount of water in pool is: " <<
            swimmingPool.waterNeededToFillThePool() <<  " gallons" <<endl;
    
    timeHourNeedToDrain = swimmingPool.timeToDrainThePool()/60;
    timeMinNeedToDrain = swimmingPool.timeToDrainThePool()%60;
    cout << "\nTime needed to drain the pool completely: " << timeHourNeedToDrain <<
            " hours and " << timeMinNeedToDrain << " minutes" << endl;

    amountWaterLeftAfterHalfDrain = swimmingPool.waterNeededToFillThePool() - (swimmingPool.getWaterFlowRateOut()* swimmingPool.timeToDrainThePool()/2);
    cout << "\nAmount of water left after draining half the pool: " << setprecision(1) << amountWaterLeftAfterHalfDrain << " gallons" << endl;

    hourNeedFillPoolIfHalfFull = (swimmingPool.timeToFillThePool()/2)/60;
    minNeedFillPoolIfHalfFull = (swimmingPool.timeToFillThePool()/2)% 60;
    cout << "\nTime needed to fill the pool if it is half full: " << hourNeedFillPoolIfHalfFull << " hours and " << minNeedFillPoolIfHalfFull << " minute" << endl;

    amountWaterAfrerAddingWaterForThreeHours = amountWaterLeftAfterHalfDrain + (swimmingPool.getWaterFlowRateIn()*60*3);
    cout << "\nAmount of water after adding water an addition 3 hours: " << setprecision(1) << amountWaterAfrerAddingWaterForThreeHours << " gallons\n" ;

    
    return 0;
}
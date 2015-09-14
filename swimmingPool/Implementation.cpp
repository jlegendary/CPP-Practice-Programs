//
//  Implementation.cpp
//    swimmingPool Implementation file
//
//  Created by JLegendary on 9/13/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>
#include "header.h"

using namespace std;

// Sets inital for constructor to set in main
void swimmingPool::set(double l, double w, double d, double fi, double fo, double wInPool)
{
    length = l;
    width = w;
    depth = d;
    waterFlowInRate = fi;
    waterFlowOutRate = fo;
    amountOfWaterInPool = wInPool;
}


// Sets length
void swimmingPool::setLength(double l)
{
    length = l;
}


// Sets length
void swimmingPool::setWidth(double w)
{
    width = w;
}


// Sets depth
void swimmingPool::setDepth(double d)
{
    depth = d;
}


// Sets water fill in rate
void swimmingPool::setWaterFlowRateIn(double fi)
{
    waterFlowInRate = fi;
}


// Sets water fill out rate
void swimmingPool::setWaterFlowRateOut(double fo)
{
    waterFlowOutRate = fo;
}


// Sets total pool water capacity
double swimmingPool::poolTotalWaterCapacity()
{
    return length * width * depth * GALLONS_IN_A_CUBIC_FEET;  // 33600 gallon
    
}


// Add water to amount of water in pool
//   If amount of water in pool is over the limit (33600), it will display pool overflow
void swimmingPool::addWater(double time, double fillRate)
{
    amountOfWaterInPool = amountOfWaterInPool + time * fillRate;
    
    if (amountOfWaterInPool > poolTotalWaterCapacity())
    {
        cout << "Pool overflow.";
        amountOfWaterInPool = poolTotalWaterCapacity();
    }
}


// Subtracts water to amount of water in pool
//   If amount of water is less than 0, it will be set to 0
void swimmingPool::drainWater(double time, double drainRate)
{
    amountOfWaterInPool = amountOfWaterInPool - time * drainRate;
    
    if (amountOfWaterInPool < 0)
        amountOfWaterInPool = 0;
}



// Gets length
double swimmingPool::getLength()
{
    return length;
}


// Gets width
double swimmingPool::getWidth()
{
    return width;
}


// Gets depth
double swimmingPool::getDepth()
{
    return depth;
}


// Gets water flow in rate
double swimmingPool::getWaterFlowRateIn()
{
    return waterFlowInRate;
}

// Gets water flow out rate
double swimmingPool::getWaterFlowRateOut()
{
    return waterFlowOutRate;
}


// Gets total water in pool
double swimmingPool::getTotalWaterInPool()
{
    return amountOfWaterInPool;
}


// Time to fill the pool
int swimmingPool::timeToFillThePool()
{
    return ((poolTotalWaterCapacity() - amountOfWaterInPool) / waterFlowInRate);
}


// Time to drain the pool
int swimmingPool::timeToDrainThePool()
{
    return (poolTotalWaterCapacity() / waterFlowOutRate);
}


// Amount of water needed to fill the pool
double swimmingPool::waterNeededToFillThePool()
{
    if (amountOfWaterInPool < poolTotalWaterCapacity())
        return poolTotalWaterCapacity() - amountOfWaterInPool;
    else
        return 0;
}


// Parameter to be set by main function
swimmingPool::swimmingPool(double l, double w, double d, double fi, double fo, double wInPool)
{
    length = l;
    width = w;
    depth = d;
    waterFlowInRate = fi;
    waterFlowOutRate = fo;
    amountOfWaterInPool = wInPool;
}









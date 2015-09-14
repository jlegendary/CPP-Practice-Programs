//
//  Header.h
//    swimmingPool Header file
//
//  Created by JLegendary on 9/13/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#ifndef swimmingPool_Header_h
#define swimmingPool_Header_h

/*
 * This is the header file for a class that implements the properties of a swimming pool
 */
const double GALLONS_IN_A_CUBIC_FEET = 7.48;

class swimmingPool {
public:
    void set(double l, double w, double d,
             double fi, double fo, double wInPool);
    /*
     * Sets the length, width, depth, flow rate in, flow rate out, and sets the
     * amount of water in the pool
     * Parameters:
     *     double l - length of pool in feet
     *     double w - width of pool in feet
     *     double d - depth of pool in feet
     *     double fi - flow rate in (gallons per minute)
     *     double fo - flow rate out (gallons per minute)
     *     double wInPool - initial amount of water in the pool (gallons)
     * Preconditions: all measurements and rates must be > 0. The amount of
     *                water in the pool cannot exceed the maximum capacity.
     * Postconditions: The pool's measurements and flow rates are set.
     *
     */
    
    /*
     * The following are the mutators for the private instance variables
     */
    void setLength(double l);
    void setWidth(double w);
    void setDepth(double d);
    void setWaterFlowRateIn(double fi);
    void setWaterFlowRateOut(double fo);
    
    void addWater(double time, double rate);
    /*
     * Add water to the pool for the specified amount of time
     * Parameters:
     *    double time - time in minutes
     *    double rate - flow rate in gallons per minute
     * Postconditions:
     *    The amount of water in the pool is deteremined based on the time and
     *    the flow rate in. If the capacity of the pool is exceeded, an
     *    overflow message is written and the amount of water in the pool is
     *    set to the maximum capacity.
     */
    
    void drainWater(double time, double rate);
    /*
     * Drain water from the pool for the specified amount of time
     * Parameters:
     *    double time - time in minutes
     *    double rate - rate in gallons per minute
     * Postconditions:
     *    The amount of water in the pool is deteremined based on the time and
     *    the flow rate out. If the pool is drained below 0 gallons, the amount
     *    of water in the pool is set to 0.
     */
    
    double poolTotalWaterCapacity();
    /*
     * The maximum capacity of the pool is determined based on the pool's
     * dimensions
     */
    
    /*
     * The following are accessors for the private instance variables
     */
    double getLength();
    double getWidth();
    double getDepth();
    double getWaterFlowRateIn();
    double getWaterFlowRateOut();
    double getTotalWaterInPool();
    
    int timeToFillThePool();
    /*
     * Returns the amount of time (in minutes) required to fill the pool based
     * on the amount of water in the pool and the flow rate in
     */
    
    int timeToDrainThePool();
    /*
     * Returns the amount of time (in minutes) required to drain the pool based
     * on the amount of water in the pool and the flow rate out
     */
    
    double waterNeededToFillThePool();
    /*
     * Returns the amount of water needed to fill the pool based on the current
     * amount of water already in the pool
     */
    
    swimmingPool(double l = 0, double w = 0, double d = 0,
                 double fi = 0, double fo = 0, double wInPool = 0);
    //Constructor
    
private:
    double length;    // in feet
    double width;     // in feet
    double depth;     // in feet
    double waterFlowInRate;    // in gallons per minute
    double waterFlowOutRate;   // in gallons per minute
    double amountOfWaterInPool;   // in gallons
};


#endif

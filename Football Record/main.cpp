//
//  main.cpp
//   main Football Record file
//
//  Created by JLegendary on 9/5/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//   JLegendary@me.com
//


#include <iostream>
#include <fstream>                  // Need for read file
#include "footballData.h"           // Header file

// main function
int main()
{
    FootballData Data;
    Data.readToArray();
    Data.footballMenu();
    
    return 0;
}





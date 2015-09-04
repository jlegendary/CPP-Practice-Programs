//
//  main.cpp
//   Marathon log
//
//  Created by JLegendary on 9/4/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//   JLegendary@me.com
//


#include <iostream>
#include <fstream>

using namespace std;

// initalize
void getData(string[],int[][7]);
void getAvg(int[][7],int[]);
void printOutput(string[],int[][7],int[]);

int main()
{
    int mile[5][7];
    string names[5];
    int average[5];
    
    getData(names,mile);
    getAvg(mile,average);
    printOutput (names,mile,average);

    return 0;
}

// Inputs the name and miles from file
void getData(string names[],int mile[][7])
{
    ifstream inFile;
    int i,j;
    inFile.open("marathon.txt");
    
    // if files doesn't open
    if(inFile.fail())
    { cout<<"file did not open please check it\n";
        exit ( 1);
    }
    
    // if file opens, write out names and miles into the arrays
    for(i=0;i<5;i++)
    {
        inFile>>names[i];
        for(j=0;j<7;j++)
            inFile>>mile[i][j];
    }
}

// Averages the mile
void getAvg(int mile[][7],int avg[])
{
    int i,j,total;
    //for five people
    for(i=0;i<5;i++)
    {
        // for 7 different miles
        for(j=0;j<7;j++)
            total+=mile[i][j];
        avg[i]=total/7.;
    }
}

// outputs the result
void printOutput(string names[],int mile[][7],int avg[])
{
    int i,j;
    
    // output names
    for(i=0;i<5;i++)
    {
        cout << "\nName: " <<names[i] << "\n";
    // output miles
        cout << "Miles ran: ";
    for(j=0;j<7;j++)
        cout << mile[i][j] << " ";
    // output average
    cout<< "\n Average: " << avg[i] << " miles" <<"\n\n";
    }
}
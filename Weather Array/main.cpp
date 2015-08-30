//
//  main.cpp
//   
//
//  Created by JLegendary on 8/30/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//   JLegendary@me.com
//


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int lowestTemp(int arrary[2][12], int size);
int higestTemp(int arrary[2][12], int size);
double avgLowTemp(int arrary[2][12], int size);
double avgHighTemp(int arrary[2][12], int size);

int main()
{
    const  int NO_MONTS=12;
    int year;
    string location ;
    int temperature [2][12];

    cout<<"Enter year "<<endl;
    cin>>year;
    cout<<"Enter Location"<<endl;
    cin>>location;

    cout<<"Enter Lowest Temperature's "<<endl;

    for(int i=0; i<NO_MONTS; i++)
    {
        cin>>temperature[0][i];
    }
    cout<<"Enter High Temperature's   "<<endl;

    for(int i=0; i<NO_MONTS; i++)
    {
        cin>>temperature[1][i];
    }

    cout<<"Lowest Temp For  "<<location<<" year "<<year<<" is " <<lowestTemp(temperature,12)<<endl;
    cout<<"Highest Temp For "<<location<<" year "<<year<<" is " <<higestTemp(temperature,12)<<endl;

    cout<<"Avg Low Temp For  "<<location<<" year "<<year<<" is " <<avgLowTemp(temperature,12)<<endl;
    cout<<"Avg High Temp For "<<location<<" year "<<year<<" is " <<avgHighTemp(temperature,12)<<endl;

    return 0;
}


int lowestTemp(int arrary[2][12], int size)
{
    int temp=arrary[0][0];
    for(int i=0; i<size; i++)
    {
        cout<<arrary[0][i]<<endl;
        if(arrary[0][i]<temp)
        {
            temp=arrary[0][i];
        }

    }
    return temp;
}


int higestTemp(int arrary[2][12], int size)
{

    int temp=0;
    for(int i=0; i<size; i++)
    {

        if(arrary[1][i]>temp)
        {
            temp=arrary[1][i];
        }

    }
    return temp;
}


double avgLowTemp(int arrary[2][12], int size)
{
    int temp=0;
    for(int i=0; i<size; i++)
    {
        temp+=arrary[0][i];

    }
    return temp/size;
}


double avgHighTemp(int arrary[2][12], int size)
{

    int temp=0;
    for(int i=0; i<size; i++)
    {

        temp+=arrary[1][i];
    }
    return temp/size;
}
//
//  main.cpp
//   Student Score Range
//
//  Created by JLegendary on 8/28/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//   JLegendary@me.com


#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int counter[8], score, i;
    ifstream infile;
    for(i=0;i<8;i++)
        counter[i]=0;
    infile.open("input.txt");
    infile>>score;
    while(score! = -999)
    {
        i=score/25 - 1;
        counter[i]++;
        infile>>score;
    }
    int first = 0, last = 24;
    for(i=0;i<8;i++)
    {
         cout<<"score between "<<first<<" - "<<last<<" is: "<<counter[i]<<endl;
        first = last+1;
        last = first+24;
        if(i==6)
            last++;
    }
    infile.close();
}
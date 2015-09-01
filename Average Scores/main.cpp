//
//  main.cpp
//   Average Scores
//
//  Created by JLegendary on 9/1/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//   JLegendary@me.com
//


#include <iostream>
#include <fstream>
using namespace std;

void getscore(string[],int[][5]);
void getaverage(int[][5],double[]);
void print(string[],int[][5],double[]);

int main()
{
    double avg;
    int grades[10][5];
    string names[10];
    double average[10];
    int total;

    getscore(names,grades);
    getaverage(grades,average);
    print (names,grades,average);

    return 0;
}

void print(string names[],int grades[][5],double avg[])
{
    int i,j;
    cout<<"name\t   test grades\taverage\tgrade\n";
    for(i=0;i<10;i++)
    {
        cout<<names[i]<<"\t";

        for(j=0;j<5;j++)
            cout<<grades[i][j]<<" ";
        cout<<"\t"<<avg[i]<<"\t";

        if(avg[i]>=90)
            cout<<"A"<<endl;
        else if(avg[i]>=80)
            cout<<"B"<<endl;
        else if(avg[i]>=70)
            cout<<"C\n";
        else if(avg[i]>=60)
            cout<<"D\n";
        else
            cout<<"F\n";
    }
}

void getaverage(int grades[][5],double avg[])
{
    int i,j,total;

    for(i=0;i<10;i++)
    {
        total=0;
        for(j=0;j<5;j++)
            total+=grades[i][j];
        avg[i]=total/5.;
    }
}

void getscore(string names[],int grades[][5])
{
    ifstream in;
    int i,j;
    in.open("StudentData.txt");
    if(in.fail())
    { cout<<"file did not open please check it\n";
        return 0;
    }
    
    for(i=0;i<10;i++)
    {
        cin>>names[i];
        for(j=0;j<5;j++)
            cin>>grades[i][j];
        cin.ignore('\n',10);
    }
}
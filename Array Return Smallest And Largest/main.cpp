//
//  main.cpp
//  
//
//  Created by JLegendary on 8/26/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>
#include <iomanip>

using namespace std;
int smallestIndex(int *arrary, int size);
int largestIndex(int *arrary, int size);

int main()
{
    int size=0;
    cout<<"Enter Size of array"<<endl;
    cin>>size;
    int arrary[size];
    
    for(int i=0; i<size; i++)
    {
        
        cin>>arrary[i];
        
    }
    int smalIndexT=smallestIndex(arrary,size);
    int largestIndexT=largestIndex(arrary,size);
    cout<<"Smallest index is    :"<<smalIndexT<<endl;
    cout<<"Largest  index is    :"<<largestIndexT<<endl;
    
}


int smallestIndex(int array[], int size)
{
    int smallIndex=array[0];
    for(int index=1; index<size; index++)
    {
        if(array[index]< array[smallIndex])
        {
            smallIndex = index;
            index+=1;
        }
        
    }
    return smallIndex;
}


int largestIndex(int array[], int size)
{
    int largestIndex=array[0];
    for(int index=0; index<size; index++)
    {
        
        if(array[index]> array[largestIndex])
        {
            largestIndex=index;
            index+=1;
        }
        
        
    }
    return largestIndex;
    
}
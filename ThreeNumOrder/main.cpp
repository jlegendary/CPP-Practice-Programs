//
//  main.cpp
//
//  Created by JLegendary on 8/5/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//
//

#include <iostream>
using namespace std;

int num1, num2, num3;
int tempNum;

int main()
{
    
    cout << "Enter in 3 numbers: " << endl;
    cin >> num1 >> num2 >> num3;
    
    if (num1<num2 && num1<num3){
        if(num3<num2){
            tempNum=num2;
            num2=num3;
            num3=tempNum;
        }
    }else if (num2<num1&& num2<num3){
        tempNum=num1;
        num1=num2;
        num2=tempNum;
        
        if(num2>num3){
            tempNum=num2;
            num2=num3;
            num3=tempNum;
        }
    }else{
        tempNum=num3;
        num3=num1;
        num1=tempNum;
        if(num2>num3){
            tempNum=num2;
            num2=num3;
            num3=tempNum;
            
            
        }
        
    }
    
    cout << "Numbers in ascending order are: " << num1 << " " << num2 << " " << num3 << endl;
    
    
    return 0;
}
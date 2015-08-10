//
//  main.cpp
//
//  Created by JLegendary on 8/5/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//

#include <iostream>
using namespace std;

int num1, num2;
char op;

int main() {
    cout << "Enter an integer, operation, then another integer: ";
    cin >> num1 >> op >> num2;
    
    if (op == '+')
        cout << num1 + num2 << endl;
    else if (op == '-')
        cout << num1 - num2 << endl;
    else if (op == '*')
        cout << num1 * num2 << endl;
    else if (op == '/' && num2 != 0)
        cout << num1 / num2 << endl;
    else if (op == '/' && num2 == 0)
        cout << "0" << endl;
    
    
    return 0;
}

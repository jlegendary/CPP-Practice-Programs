
#include <iostream>
#include <iomanip>
using namespace std;

    //variables
double mass;
double density;
double volume;

int main()
{
    //input
    cout << "Enter mass in grams and density in grams per cubic centimeter: " << endl;
    cin >> mass >> density;
    
    //formula for volume
    volume = mass / density;
    
    //output to two decimal places
    cout << fixed << showpoint << setprecision(2);
    
    //output the volume
    cout << "\nThe volume is: " << volume << "cm^3" << endl;
    return 0;
}
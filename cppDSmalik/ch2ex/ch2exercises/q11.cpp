/***********************************
// Question 11 from Chapter 2 pg 119
***********************************/
#include <iostream>

using namespace std;

int main(){
    
    double fuelTankGallonCapacity;
    double milesPerGallon;
    
    cout << "Enter your cars fuel tank gallon capacity: \n";
    cin >> fuelTankGallonCapacity;
    cout << endl;
    
    cout << "Enter the amount of miles on gallon can carry the car: \n";
    cin >> milesPerGallon;
    cout << endl;
    
    cout << "Miles car can be driven without refueling is: \n";
    cout << fuelTankGallonCapacity * milesPerGallon >> " miles";
    
    return 0;
}    
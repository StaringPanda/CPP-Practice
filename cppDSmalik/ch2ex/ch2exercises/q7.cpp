/***********************************
// Question 7 from Chapter 2 pg 117
***********************************/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    double num;
    
    cout << "Please input a decimal number: ";
    cin >> num;
    cout << endl;
    
    cout << "Entered number is = " num << endl;
    
    cout << "static_cast<int>(num) = "static_cast<int> (num) << endl;
    
    cout << "Rounded to nearest integer = " << round(num); 
    
    return 0;   
}
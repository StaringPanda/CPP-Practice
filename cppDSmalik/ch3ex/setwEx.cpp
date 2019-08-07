/*******************************************************************
// This example shows how the setw function works, Pg 149/150
// The setw manipulator is used to output the value of an 
// expression in a specific number of columns.
// The value of an expression can either be a string or number.
//
// Additonally setfill(); from Pg 152/153 is displayed here.
*******************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int miles = 245;
    int speed = 55;
    double hours = 35.45;
    double error = 3.7564;
    
    cout << fixed << showpoint;
    cout << "123456789012345678901234567890" << endl;
    
    cout << setw(5) << miles << endl;
    
    cout << setprecision(2);
    
    cout << setfill('^') << setw(5) << miles << setw(5) << speed << setw(6) << hours << setw(7) << error << endl << endl;
    
    cout << setfill(' ') << setw(5) << speed << setw(5) << miles << setw(4) << hours << setw(7) << error << endl << endl;
    
    cout << setw(2) << miles << setw(6) << hours << setw(7) << error << endl << endl;
    
    cout << setw(2) << miles << setw(7) << "error" << error << endl;
    
    return 0;   
}
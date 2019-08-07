/***********************************************************************
// Shows fixed, showpoint and setprecision from Pg 148
***********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265;

int main(){
    
    double radius = 12.67;
    double height = 12.00;
    
    cout << fixed << showpoint; //  remove this after running, run again to see different output
    
    cout << setprecision(2) << "Line 18: setprecision(2)" << endl;
    cout << "Line 19: radius = " << radius << endl;
    cout << "Line 20: height = " << height << endl;
    cout << "Line 21: volume = " << PI * radius * radius * height << endl;
    cout << "Line 22: Pi = " << PI << endl << endl;
    
    cout << setprecision(3) << "Line 18: setprecision(3)" << endl;
    cout << "Line 25: radius = " << radius << endl;
    cout << "Line 26: height = " << height << endl;
    cout << "Line 27: volume = " << PI * radius * radius * height << endl;
    cout << "Line 28: Pi = " << PI << endl << endl;
    
    cout << setprecision(4) << "Line 18: setprecision(4)" << endl;
    cout << "Line 31: radius = " << radius << endl;
    cout << "Line 32: height = " << height << endl;
    cout << "Line 33: volume = " << PI * radius * radius * height << endl;
    cout << "Line 34: Pi = " << PI << endl << endl;
    
    cout << "Line 36: " << setprecision(3) << "Radius = " << radius << setprecision(2) << ", Height = " << height << setprecision(4) << ", Pi = " << PI << endl;
    
    return 0;   
}
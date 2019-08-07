/*****************************************************************
// Example from Pg 210 shows how checking the comparison of
// floating point numbers for equality may not behave as you
// would expect.
//
// x = 1.0 and y = 0.999999~ so the if (x == y) is false, however
// if you evaluate the equation in y wiht pen and paper you will
// get 1.0 as a result.
//
// One way to check whether two floating point numbers are 
// equal is to check whether the absolute value of their
// difference is less than a certain tolerance.
//
// The function fabs(), finds the absolute value of a floating
// point integer.
//
// Not a good example of the fabs() function, gives correct 
// answer regardless of presence or absence of fabs() or 
// reversing the positions of x and y.
*****************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    
    double x = 1.0;
    double y = 3.0 / 7.0 + 2.0 / 7.0 + 2.0 / 7.0;
    
    cout << fixed << showpoint << setprecision(17);
    
    cout << "3.0 / 7.0 + 2.0 / 7.0 + 2.0 / 7.0 = " << 3.0 / 7.0 + 2.0 / 7.0 + 2.0 / 7.0 << endl;
    
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    if (x == y){
        cout << "x and y are the same." << endl;
    }else{
        cout << "x and y are not the same." << endl;
    }
    
    if (fabs(y - x) < 0.000001){
        cout << "x and y are the same within the tolerance 0.000001." << endl;
    }else{
        cout << "x and y are not the same within the tolerance 0.000001." << endl;
    }
    return 0;   
}
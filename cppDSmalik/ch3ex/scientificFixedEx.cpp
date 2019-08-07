/********************************************************************************
// Example of scientific, fixed and setprecision() manipulators for numerical
// output.
// Note that scientific and fixed functions work with the <iostream> and cout 
// objects.
// The setprecision works with <iomanip> and cout object.
//
// Some compilers will need cout.setf(ios::fixed); in place of cout >> fixed;
// and cout.setf(ios::scientific); in place of cout scientific.
// Pg 145/146
********************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double hours = 35.45;
    double rate = 15.00;
    double tolerance = 0.01000;
    
    cout << "hours = " << hours << ", rate = " << rate << ", pay = " << hours * rate << ", tolerance = " << tolerance << endl << endl;
    
    cout << scientific;
    cout << "scientific notation: " << endl;
    cout << "hours = " << hours << ", rate = " << rate << ", pay = " << hours * rate << ", tolerance = " << tolerance << endl << endl;
    
    cout << fixed;
    cout << "Fixed decimal notation: " << endl;
    cout << "hours = " << hours << ", rate = " << rate << ", pay = " << hours * rate << ", tolerance = " << tolerance << endl << endl;
    
    cout.unsetf(ios::fixed); // disables the fixed manipulator, unnecessary because setprecision(); will override it in this instance.
    
    cout << setprecision(2);
    cout << "Setprecision decimal notation: " << endl;
    cout << "hours = " << hours << ", rate = " << rate << ", pay = " << hours * rate << ", tolerance = " << tolerance << endl << endl;
    
    
    return 0;   
}
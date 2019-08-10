/*****************************************************************
// User defined function example from Pg 359 - 360
//
// Logically you would write all user defined functions before
// the main function to ensure they are complied and will 
// execute before the complier reaches the main function,
// but in C++ programmers customarily place the function main
// before all user defined functions.
//
// When user functions are written a function prototype must
// be written in your program before the main function, if
// this is not done the program will suffer a compilation error 
// because main is read before the user defined functions.
//
// The prototype is a promise to the complier that the function
// definition will appear later in the program.
//
// Furthermore, if you write a function prototype but not
// the definition, the program may compile but will not 
// execute.
//
// Function variable names do not have to declared in the 
// function prototype parameter list, but the datatype must
// entered.
*****************************************************************/
#include <iostream>

using namespace std;

double larger (double, double);
double compareThree (double x, double y, double z);

int main(){
    
    double one, two;
    
    cout << "The larger of 5 and 10 is " << larger(5, 10) << endl;
    
    cout << "Enter two numbers: ";
    cin >> one >> two;
    cout << endl;
    
    cout << "The largest of " << one << " and " << two << " is " << larger(one, two) << endl;
    
    cout << "The largest of 43.48, 34.00 and 12.65 is " << compareThree(43.48, 34.00, 12.65) << endl;
    
    return 0;   
}

double larger (double x, double y){
    
    if (x > y){
        return x;
    }
    return y;
}

double compareThree (double x, double y, double z){
    
    return larger(x, larger(y, z));
}
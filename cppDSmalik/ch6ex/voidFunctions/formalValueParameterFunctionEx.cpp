/*****************************************************************
// Formal parameter example from Pg 383.
//
// In a function a formal parameter makes a copy of the actual
// parameter, making the formal parameter a separate variable
// with its own copy of the data, stored in a different memory
// location.
//
// Actual parameters remain unchanged and have no knowledge of
// of what is happening to to formal parameters.
//
// Hence, functions with only formal/value parameters have
// limitations.
//
// To see a quick example of a formal/reference parameter, place
// the amphersand(&) symbol after int in the function definition
// and in its prototype (int& num)
//
// Run to see a different result.
*****************************************************************/
#include <iostream>

using namespace std;

int funcValueParam(int);

int main(){
    
    int number = 8;
    
    cout << "Before calling the function funcValueParam, number = " << number << endl;
    
    funcValueParam(number);
    
    cout << "After calling the function funcValueParam, number = " << number << endl;
    
    return 0;   
}

int funcValueParam(int num){
    
    cout << "In the function funcValueParam, before changing, num = " << num << endl;
    
    num = 15;
    
    cout << "In the function funcValueParam, after changing, num = " << num << endl;
}
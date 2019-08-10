/*****************************************************************
// The following examples are some predefined functions from
// Pg 349.
//
// There are previous examples in earlier chapters but they
// are not explicitly talked about.
*****************************************************************/
#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>

using namespace std;

int main(){
    
    int num;
    double firstNum, secondNum;
    char ch = 'T';
    
    cout << fixed << showpoint << setprecision (2) << endl;
    
    cout << "Is " << ch << " a lowercase letter? " << islower(ch) << endl;
    
    cout << "Uppercase a is " << static_cast<char> (toupper('a')) << endl;
    
    cout << "4.5 to the power of 6.0 = " << pow(4.5, 6.0) << endl;
    
    cout << "Enter two decimal numbers:";
    cin >> firstNum >> secondNum;
    cout << endl;
    
    cout << firstNum << " to the power of " << secondNum << " = " << pow(firstNum, secondNum) << endl;
    
    cout << "5.0 to the power of 4 = " << pow(5.0, 4) << endl;
    
    firstNum = firstNum + pow(3.5, 7.2);
    cout << "firstNum + pow(3.5, 7.2) = " << firstNum << endl;
    
    num = -32;
    cout << "The absolute value of " << num << " = " << abs(num) << endl;
    
    cout << "The squareroot of 28.00 = " << sqrt(28.00) << endl;
    
    
    return 0;   
}
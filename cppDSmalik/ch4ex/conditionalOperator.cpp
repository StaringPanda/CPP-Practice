/*****************************************************************
// Conditonal Operator (?:) example Pg 222
// This is a ternary operator, which means it takes three
// arguments.
//
// This type of statement is called a conditional expression.
// It is evaluated as follows:
// If expression1 evaluates to a nonzero integer (ie. to true)
// the result of the conditonal expression is expression2 (a)
// Otherwise the result is expression3 (b)
//
// Note while the if else statement works perfectly fine, the
// use of the conditional operator makes the writing more 
// concise.
*****************************************************************/
#include <iostream>

using namespace std;

int main(){
    
    int a, b, max;
    
    cout << "Enter two integer values separated by space: " << endl;
    cin >> a >> b;
    cout << endl;
    
    cout << "If statement example:" << endl;
    if (a >= b)
        max = a;
    else
        max = b;
    cout << max << endl;
    
    cout << "\nConditional Operator example: " << endl;
    max = (a >= b) ? a : b;
    cout << max << endl;
    
    return 0;   
}
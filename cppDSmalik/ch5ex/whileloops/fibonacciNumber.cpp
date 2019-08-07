/*****************************************************************
// Fibonacci sequence from Pg 291 - 295
//
// The true first and second Fibonacci Numbers are 0 and 1
// but this program will let the user determine their own
// starting point for the fibonacci sequence, making the number
// at nth position change.
//
// Modified to give correct nth number with the sequence 
// beginning from 0 and 1.
*****************************************************************/
#include <iostream>

using namespace std;

int main(){
    
    int previousNum1 = 0;
    int previousNum2 = 1;
    int current;
    int counter;
    int nthFibonacci;
    
    // cout << "Enter first Fibonacci number: " << endl;
    // cin >> previousNum1;
    // cout << endl;
    
    // cout << "Enter second Fibonacci number: " << endl;
    // cin >> previousNum2;
    // cout << endl;
    
    cout << "First and second numbers are: " << previousNum1 << " & " << previousNum2 << endl;
    
    cout << "Enter the number position of a Fibonacci number you would like to see:" << endl;
    cin >> nthFibonacci;
    cout << endl;
    
        if (nthFibonacci == 1){
            // current = previousNum1;
            // cout << current << endl;
            cout << previousNum1 << endl;
        }
        else if (nthFibonacci == 2){
            // current = previousNum2;
            // cout << current << endl;
            cout << previousNum2 << endl;
        }else{
            counter = 3;
            while (counter <= nthFibonacci){
                current = previousNum1 + previousNum2;
                previousNum1 = previousNum2;
                previousNum2 = current;
                counter++;
            }
            cout << "Fibonacci number at position " << nthFibonacci << " is: " << current << endl;
        }
    
    return 0;   
}
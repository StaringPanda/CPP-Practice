/*****************************************************************
// Fibonacci Sequence from Chapter 5 modified to use a 
// function.
*****************************************************************/
#include <iostream>

using namespace std;

int nthFibonacciNum(int first, int second, int nthFibNum);

int main(){
    
    int firstFibonacciNum;
    int secondFibonacciNum;
    int nthFibonacci;
    
    cout << "Enter first Fibonacci number: " << endl;
    cin >> firstFibonacciNum;
    cout << endl;
    
    cout << "Enter second Fibonacci number: " << endl;
    cin >> secondFibonacciNum;
    cout << endl;
    
    cout << "First and second numbers are: " << firstFibonacciNum << " & " << secondFibonacciNum << endl;
    
    cout << "Enter the number position of a Fibonacci number you would like to see:" << endl;
    cin >> nthFibonacci;
    cout << endl;
    
    cout << "The Fibonacci number at position " << nthFibonacci << " is " << nthFibonacciNum(firstFibonacciNum, secondFibonacciNum, nthFibonacci) << endl; 
    
    return 0;   
}

int nthFibonacciNum(int first, int second, int nthFibNum){
    
    int current;
    int counter;
    
    if (nthFibNum == 1){
        current = first;
        }
        else if (nthFibNum == 2){
            current = second;
        }else{
            counter = 3;
            while (counter <= nthFibNum){
                current = second + first;
                first = second;
                second = current;
                counter++;
            }
        }
    return current;
}
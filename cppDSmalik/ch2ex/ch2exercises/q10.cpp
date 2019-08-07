/***********************************
// Question 10 from Chapter 2 pg 119
***********************************/
#include <iostream>

using namespace std;

int main (){
    
    double num1, num2, num3, num4, num5, total;
    
    cout << "Please enter 5 Decimal Numbers serparated by spaces: " << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cout << endl;
    
    total = num1 + num2 + num3 + num4 + num5;
    
    cout << "Total of the numbers = " << total << endl;
    
    cout << "static_cast(int) <total>; = " << static_cast<int> (total); 
    
    return 0;
}    
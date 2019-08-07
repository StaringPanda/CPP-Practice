/*****************************************************************
// assert() function example from Pg 234-236
*****************************************************************/
#include <iostream>
//#define NDEBUG // Disables all assert functions
#include <cassert>

using namespace std;

int main(){
    
    int numerator;
    int denominator;
    int quotient;
    double hours;
    double rate;
    double wages;
    char ch;
    
    cout << "Please enter numerator and denominator values, separated by space: " << endl;
    cin >> numerator >> denominator;
    cout << endl;
    
    assert(denominator != 0);
    quotient = numerator / denominator;
    cout << quotient << endl;
    
    cout << "Please enter hours worked and payrate of employee, separated by space: " endl;
    assert(hours > 0 && (0 < rate && rate <= 15.50));
    if (hours > 0 && (0 < rate && rate <= 15.50)){
        wages = rate * hours;
        cout << wages << endl;
    }
    
    assert('A' <= ch && ch <= 'Z');
    if ('A' <= ch && ch <= 'Z')
        cout << ch;
    
    return 0;   
}
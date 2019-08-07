#include <iostream>

using namespace std;

const int HALF_DOLLAR = 50;
const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;

int main (){
    
    int cents;
    int halfDollarAmt;
    int quarterAmt;
    int dimeAmt;
    int nickelAmt;
    
    cout << "Enter amount of cents you have: " << endl;
    cin >> cents;
    cout << endl;
    
    halfDollarAmt = cents / HALF_DOLLAR;
    cout << "Half Dollar(s) = " << halfDollarAmt << "\n" << endl;
    cents = cents % HALF_DOLLAR;
    
    quarterAmt = cents / QUARTER;
    cout << "Quarter(s) = " << quarterAmt << "\n" << endl;
    cents = cents % QUARTER;
    
    dimeAmt = cents / DIME;
    cout << "Dime(s) = " << dimeAmt << "\n" << endl;
    cents = cents % DIME;
    
    nickelAmt = cents / NICKEL;
    cout << "Nickel(s) = " << nickelAmt << "\n" << endl;
    cents = cents % NICKEL;
    
    cout << "Cent(s) = " << cents << endl;
    
    return 0;
    
}    
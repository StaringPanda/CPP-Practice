/***********************************
// Question 13 from Chapter 2 pg 119
***********************************/
#include <iostream>

using namespace std;

const double MARKUP_PERCENTAGE = 0.1;
const double SALES_TAX_RATE = 0.05;

int main(){
    
    double defaultPrice;
    //double markupCost;
    //double sellingPrice;
    double salesTax;
    //double finalPrice;
    
    cout << "Enter items original price: " << endl;
    cin >> defaultPrice;
    cout << endl;
    
    cout << "Item(s) origianl price is = $" << defaultPrice << endl;
    cout << "Item(s) percentage mar-up is = 10%" << endl;
    
    //markupCost = defaultPrice * MARKUP_PERCENTAGE;
    defaultPrice = defaultPrice + defaultPrice * MARKUP_PERCENTAGE;
    cout << "Item(s) mark-up, selling price is = $" << defaultPrice << endl;
    cout << "Item(s) sales tax rate is = 5% " << endl;
    
    salesTax = defaultPrice * SALES_TAX_RATE;
    cout << "Items(s) with sales tax added = $" << salesTax << endl << endl;
    
    defaultPrice = salesTax + defaultPrice;
    cout << "Item(s) final price is = $" << defaultPrice;
    
    
    return 0;
}
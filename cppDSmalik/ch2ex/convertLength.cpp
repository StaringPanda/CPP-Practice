/***************************************************************************
// Simple program that converts inch and feet values to centimeters 
// users input both inch and feet values, then the program calculates
// the centimeters of the given length. 
***************************************************************************/

# include <iostream>

using namespace std;

const double INCH_TO_CENTIMETER = 2.54;
const int FOOT_TO_INCH = 12;

int main (){
    
    int inches;
    int feet;
    int totalInches;
    double totalCentimeters;
    
    cout << "Please enter value for inches: " << endl;
    cin >> inches;
    cout << endl;
    
    cout << "Please enter value for feet: " << endl;
    cin >> feet;
    cout << endl;
    
    totalInches = (feet * FOOT_TO_INCH) + inches;
    
    cout << "The total inches is:\n" << totalInches << "in\n" << endl;
    
    totalCentimeters = totalInches * INCH_TO_CENTIMETER;
    
    cout << "Total feet and inches mesurements in centimeters is:\n" << totalCentimeters << "cm";
    
    return 0;
}
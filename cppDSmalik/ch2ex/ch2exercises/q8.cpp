/***********************************
// Question 8 from Chapter 2 pg 118
***********************************/
#include <iostream>
#include <string> //a.

using namespace std; //b.

const int SECRECT = 11;
const double RATE = 12.50; //c.

int main(){
    
    int num1, num2, newNum;
    string name;
    double hoursWorked, wages; //d.
    
    cout << "Please input two integers separated by a space: " << endl;
    cin >> num1 >> num2;
    cout << endl; //e.
    
    cout << "The value of num1 = " << num1 << " and the value of num2 = " << num2 << "." << endl; //f.
    
    newNum = num2 + (num1 * 2);
    
    cout << endl << "The value of newNum = " << newNum << "." << endl; //g.
    
    newNum = newNum + SECRECT;
    
    cout << endl << "The SECRECT value of newNum = " << newNum << "." << endl; //h.
    
    cout << endl << "Please enter the employees last name: \n";
    cin >> name;
    cout << endl; //i.
    
    cout << "Please enter a decimal number between 1 & 70: " << endl;
    cin >> hoursWorked;
    cout << endl; //j.
    
    wages = RATE * hoursWorked; //k.
    
    cout << "Name:         " << name << endl;
    cout << "Pay Rate:     $" << RATE << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Salary:       $" << wages << endl; //l.
    
    return 0;   
}
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    
    string name = "Jessica";
    double gpa = 3.75;
    int scholarship = 7850;
    
    cout << "123456789012345678901234567890" << endl;
    cout << fixed << showpoint << setprecision(2);
    
    cout << left;
    
    cout << setw(10) << name << setw(7) << gpa << setw(8) << scholarship << endl;
    
    cout << setfill('*');
    cout << setw(10) << name << setw(7) << gpa << setw(8) << scholarship << endl;
    
    cout << setw(10) << name << setfill('#') << setw(7) << gpa << setw(8) << scholarship << endl;
    
    cout << setw(10) << setfill('@') << name
         << setw(7) << setfill('#') << gpa
         << setw(8) << setfill('^') << scholarship
         << endl;
         
    cout << right;
    cout << setfill(' ');
    cout << setw(10) << name << setw(7) << gpa << setw(8) << scholarship << endl;
    
    return 0;   
}
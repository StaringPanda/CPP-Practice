/***********************************
// Question 6 from Chapter 2 pg 117
***********************************/
#include <iostream>
#include <string> //a.

using namespace std; //b.

int main(){
    
    string name;
    double studyHours; //c.
    
    cout << "Please enter your name: ";
    cin >> name;
    cout << endl;
    
    cout << "Please enter hours studied: ";
    cin >> studyHours;
    cout << endl; //d.
    
    cout << "Hello, " << name << "! on Saturday, you need to study " << studyHours << " hours for the exam." << endl; //e.
    
    return 0;   
}
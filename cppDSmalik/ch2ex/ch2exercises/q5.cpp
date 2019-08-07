/***********************************
// Question 5 from Chapter 2 pg 116
***********************************/
#include <iostream>

using namespace std;

const double PI = 3.14;

int main(){
    
    double radius;
    double area;
    double circumference;
    
    
    cout << "Enter the Radius: ";
    cin >> radius;
    cout << endl;
    
    area = PI * radius * radius;
    cout << "Area = " << area << endl;
    
    circumference = 2 * PI * radius;
    cout << "Circumference = " << circumference << endl;
    
    return 0;
}
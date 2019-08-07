/*****************************************************************
// Compound if statment from Pg 216
// While this program will run without the curly parentheses, 
// leaving them out of the first if statement will cause the 
// else to pair with the if on line 20 instead of the desired 
// one on line 19. 
//
// Test with sample GPA values (3.91, 3.8, 1.95)
// Then test without the curly parentheses
//
// Note that no output is written if the GPA is greater than
// or equal to 2.0 and less than or equal to 3.9
*****************************************************************/
#include <iostream>

using namespace std;

int main(){
    
    double gpa;
    
    cout << "Enter the GPA: ";
    cin >> gpa;
    cout << endl;
    
    if (gpa >= 2.0){
        if (gpa >= 3.9)
            cout << "Dean\'s Honor List. " << endl;
    }else{
        cout << "The GPA is below the graduation requirement. \nSee your academic advisor. " << endl;
    }
    return 0;   
}
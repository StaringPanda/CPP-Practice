/*******************************************************
// simple if, else if and nested if example, Pg 207
// Shows how if statements can be structured 
// with an else if layout and a nested if 
// layout.
// Note that the second else if layout is also
// a nested if (nest if == else if)
*******************************************************/
#include <iostream>

using namespace std;

int main(){
    
    int temperature;
    
    cout << "Enter the current Farenheit temperature: " << endl;
    cin >> temperature;
    cout << endl;
    
        if (temperature >= 50){
            if (temperature >= 80){
                cout << "Good day for swimming." << endl;
            }else{
                cout << "Good day for golfing." << endl;
            }
        }else{
            cout << "Good day to play tennis" << endl;
        }
        
        cout << endl << endl;
    
    
        if (temperature >= 50 && temperature < 80){
            cout << "Good day for golfing." << endl;
        }
        else if (temperature >= 80){
            cout << "Good day for swimming." << endl;
        }else{
            cout << "Good day to play tennis" << endl;
        }    
    
    return 0;
}
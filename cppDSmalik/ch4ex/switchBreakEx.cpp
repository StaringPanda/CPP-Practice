/*****************************************************************
// Example from Pg 228
// This shows the effect of the break statement in the switch.
// Break is not essential in the running of a switch statement,
// but its presence or lack there of, can produce unexpected
// results.
//
// Compile and run the program and enter the values requested
// to test this, add and remove breaks in the appropiate 
// location and re-compile and run to observe different 
// outputs.
*****************************************************************/
#include <iostream>

using namespace std;

int main(){
    
    int num;
    
    cout << "Enter an integer between 0 and 7: " << endl;
    cin >> num;
    cout << endl;
    cout << "The number you entered is " << num << endl;
    
    switch(num){
        
        case 0:
        
        case 1:
            cout << "Learning to use ";
            
        case 2:
            cout << "C++\'s ";
            
        case 3:
            cout << "switch structure." << endl;
        break;
        
        case 4:
        
        break;
        
        case 5:
            cout << "This program shows the effect ";
            
        case 6:
        
        case 7:
            cout << "of the break statement." << endl;
        break;
        
        default:
            cout << "The number is out of range." << endl;
    }
    
    cout << "Out of the switch structure." << endl;
    
    return 0;   
}
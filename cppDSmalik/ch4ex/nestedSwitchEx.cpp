/*****************************************************************
// Nested switch example from Pg 231
// Compile, run and follow user prompts, trace through the
// code while there is outputted results on the cmd line.
// Study the code and understand how the switch and nested
// switch works.
//
// Note that true and false can be replaced by 1 and 0 if
// desired, in instances where a yes or no is the outcome
// switch expressions can evaluate to a logical value.
//
// Side note, there is no fixed rules that exist in deciding
// whether to choose switch over if else.
// Switch is generally used when the range of values is finite,
// and if else is used when the range is infinite.
// If a double is used and the range of numbers can be fractional
// the number of values is infinite.
// static_cast<int> can be used to reduce to a finite number
// but this may not be desired.
*****************************************************************/
#include <iostream>

using namespace std;

int main(){
    
    int age;
    
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << endl << endl;
    
    switch (age >= 18){
        
        case true:
            cout << "Old enough to be drafted." << endl;
            cout << "Old enough to vote." << endl;
            
            switch (age >= 21){
                
                case true:
                    cout << "Old enough to drink." << endl;
                break;
                
                case false:
                    cout << "Not old enough to drink." << endl;
            }
        break;
        
        case false:
            cout << "Not old enough to be drafted." << endl;
            cout << "Not old enough to vote." << endl;
            cout << "Not old enough to drink." << endl;
    }
    
    return 0;   
}
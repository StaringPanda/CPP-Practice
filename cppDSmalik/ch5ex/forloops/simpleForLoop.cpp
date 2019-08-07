/*****************************************************************
// Simple for loop example from Pg 301
*****************************************************************/
#include <iostream>

using namespace std;

int main(){
    
    int newNum;
    int sum = 0;
    double avg;
    
    for (int i = 1; i <= 5; i++){
        cout << "Enter a whole number: " << endl;
        cin >> newNum;
        cout << endl;
        sum = sum + newNum;
    }
    
    avg = sum / 5;
    cout << "The sum is " << sum << endl;
    cout << "The average is " << avg << endl;
    
    return 0;   
}
/*****************************************************************
// For loop example from Pg 302
//
// Modified to be terminated with a sentinel value.
*****************************************************************/
#include <iostream>

using namespace std;

int main(){
    
    int counter;
    int sum;
    int n;

        while (n != -1){
            cout << "Enter the number of positive integers to be added. \nThis will always start from 1. \nExit program by entering -1." << endl;
            cin >> n;
            sum = 0;
            
            for (counter = 1; counter <= n; counter++){
                sum = sum + counter;
            }
            if (n == -1){
                cout << "Program has been terminated." << endl;
            }else{ 
            cout << "The sum of the first " << n << " positive integers is " << sum << endl << endl;
            }
        }
    
    return 0;   
}
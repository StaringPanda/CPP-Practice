/*****************************************************************
// Exercise from Pg 303 - 306
*****************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

const int N = 20;

int main(){
    
    int counter;
    int num;
    int zeroCount = 0;
    int oddCount = 0;
    int evenCount = 0;
    
    cout << "Please enter " << N << " integers, positive, negative or zeros" << endl;
    cout << "The numbers you entered are: " << endl;
    
    for (counter = 1; counter <= N; counter++){
        cin >> num;
        cout << num << " ";
        
        switch (num % 2){
            case 0:
                evenCount++;
                if (num == 0){
                    zeroCount++;
                }
                break;
            case 1:
            case -1:
                oddCount++;
        }
    }
    
    cout << "There are " << evenCount << " evens, which includes " << zeroCount << " zeros." << endl;
    cout << "The number of odd numbers is: " << oddCount << endl;
    
    return 0;   
}
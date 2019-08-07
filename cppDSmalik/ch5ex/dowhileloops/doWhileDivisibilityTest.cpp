/*****************************************************************
// do while example from Pg 310
*****************************************************************/
#include <iostream>

using namespace std;

int main(){
    
    int num;
    int temp;
    int sum;
    
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << endl;
    
    temp = num;
    
    sum = 0;
    
    do {
        
        sum = sum + num % 10;
        num = num / 10;
    }
    while (num > 0);
    
    cout << "The sum of the digits = " << sum << endl;
    
    if (sum % 9 == 0){
        cout << temp << " is divisible by 3 and 9" << endl;
    }
    else if (sum % 3 == 0){
        cout << temp << " is divisible by 3 and not by 9" << endl;
    }else{
        cout << temp << " is not divisible by 3 or 9" << endl;
    }
    
    return 0;   
}
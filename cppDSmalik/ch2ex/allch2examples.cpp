# include <iostream>

using namespace std;

const int NUMBER = 12; 

int main(){
    
    int firstNum;
    int secondNum;
    
    firstNum = 18;
    cout << "Line 13: firstNum = " << firstNum << endl;
    cout << "Line 14: Enter an Integer: " << endl;
    cin >> secondNum;
    cout << endl;
    cout << "Line 17: secondNum = " << secondNum << endl;
    
    firstNum = firstNum + NUMBER + 2 * secondNum;
    
    cout << "Line 21: The new value of " << "firstNum = " << firstNum << endl;
   
    return 0;   
}
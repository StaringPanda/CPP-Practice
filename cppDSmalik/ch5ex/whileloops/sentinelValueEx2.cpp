/*****************************************************************
// Sentinel value example from Pg 278
*****************************************************************/
#include <iostream>

using namespace std;

int main(){
    
    char letter;
    int num;
    int digit;
    
    cout << "Program to convert uppercase letters to their corresponding telephone digits." << endl;
    cout << "To stop the program enter #." << endl;
    
    cout << "Enter an Uppercase letter: ";
    cin >> letter;
    cout << endl;
    
    while (letter != '#'){
        
        cout << "Letter: " << letter;
        cout << ", Corresponding telephone digit: ";
        
        num = static_cast<int> (letter) - static_cast<int> ('A');
        
        if (num >= 0 && num < 26){
            
            digit = (num / 3) + 2;
            
            if (((num / 3 == 6) || (num / 3 == 7)) && (num % 3 == 0)){
                digit = digit -1;
            }
            
            if (digit > 9){
                digit = 9;
            }
            
            cout << digit << endl;
        }else{
            cout << "Invalid input." << endl;
        }
        
        cout << "\nEnter another uppercase letter to fing its corresponding telephone digit." << endl;
        cout << "To stop the program enter #." << endl;
        
        cout << "Enter a letter: " << endl;
        cin >> letter;
        cout << endl;
    }
    
    return 0;   
}
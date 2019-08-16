/*****************************************************************
// Palindrome function example from Pg 368
*****************************************************************/
#include <iostream>

using namespace std;

bool isPalindrome (string str);

int main(){
    
    string s;
    
    cout << "Please enter any letters or values into the text field \nto get a true result enter a palindrome:" << endl;
    cin >> s;
    cout << endl;
    
        if (isPalindrome(s) == true){
            cout << "True";
        }else{
            cout << "False";
        } 
    return 0;
}

bool isPalindrome(string str){
    
    int length = str.length();
    
    for (int i = 0; i < length / 2; i++){
        if (str[i] != str[length - 1 - i]){
            return false;
        }
        return true;
    }
}
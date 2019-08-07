#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string oneWord;
    string sentence;
    
    cout << "Enter a single word to store in string variable, typing more than one will result in following words being ignored! " << endl;
    cin >> oneWord;
    cout << oneWord << endl << endl;
    
    cin.ignore(200, '\n');
    
    cout << "Enter a sentence of multiple words, the function getline(); will store the entire sentence in the string variable!! " << endl;
    getline(cin, sentence);
    cout << sentence;
    
    return 0;   
}
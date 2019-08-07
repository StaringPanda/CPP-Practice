/********************************************************************************
// Shows get, putback and peek functions in operation, ignore is left out
// Note that the peek function is used in an assignment statement, its not
// a stand-alone statement like the others. Furthermore its argument/parameter
// parentheses is empty.
// Use "abcd" as the user entered string to ease understanding of these functions
// Pg 136, 137 and 138 have in-depth explanations.
*********************************************************************************/

#include <iostream>

using namespace std;

int main (){
    
    char ch;
    
    cout << "Line 18: Enter a string: ";
    cin.get(ch);
    cout << endl;
    cout << "Line 21: After first cin.get(ch); ch = " << ch << endl;
    
    cin.get(ch);
    cout << "Line 24: After Second cin.get(ch); ch = " << ch << endl;
    
    cin.putback(ch);
    cin.get(ch);
    cout << "Line 28: After putback and then cin.get(ch); ch = " << ch << endl;
    
    ch = cin.peek();
    cout << "Line 31: After cin.peek(); ch = " << ch << endl;
    
    cin.get(ch);
    cout << "Line 34: After cin.get(ch); ch = " << ch << endl;
    
    return 0;
    
}    
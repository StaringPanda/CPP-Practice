/*****************************************************************
// Void function example from Pg 381
//
// Void functions are used when you don't need to return any
// particular datatype.
// The function is used in the for loop and will be executed 
// by the amount of times the user enters for numOfLines.
*****************************************************************/
#include <iostream>

using namespace std;

void printStars(int, int);

int main(){
    
    int numOfLines;
    int numOfBlanks;
    int counter;
    
    cout << "Enter number of star lines (1 to 20) to be printed: ";
    cin >> numOfLines;
    
    while (numOfLines < 0 || numOfLines > 20){
        cout << "Entered number must be between 1 and 20" << endl;
        cout << "Enter number of star lines (1 to 20) to be printed: ";
        cin >> numOfLines;
    }
    
    cout << endl << endl;
    numOfBlanks = 30;
    
    for (counter = 1; counter <= numOfLines; counter++){
        printStars(numOfBlanks, counter);
        numOfBlanks--;
    }
    return 0;
}

void printStars(int blanks, int starsInLine){
    
    int count;
    
    for (count = 1; count <= blanks; count++){
        cout << " ";
    }
    
    for (count = 1; count <= starsInLine; count++){
        cout << " *";
    }
    cout << endl;
}
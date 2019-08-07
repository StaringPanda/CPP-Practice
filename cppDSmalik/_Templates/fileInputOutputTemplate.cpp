/*****************************************************************
//
*****************************************************************/
#include <iostream> // add additional header files if needed
#include <fstream>

using namespace std;

int main(){
    // Declare file stream variables.
    ifstream inData;
    ofstream outData;
    
    // open files.
    inData.open(""); // open input, filepath, file name and extension go inbetween double quotes
    outData.open(""); // open output
    
    // Code space for data manipulation
    
    // close the files.
    inData.close();
    outData.close();
    
    // Note, delete template comments and place more meaningful ones for your program
    
    return 0;
}
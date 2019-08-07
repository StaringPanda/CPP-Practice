/*****************************************************************
// Example from Pg 270
// Consider how while loops are written, reversing the two 
// statements in the second while outputs different results
// compared to the first.
*****************************************************************/
#include <iostream>

using namespace std;

int main(){
    
    int i;
    
    i = 0;
    
    while (i <= 20){
        cout << i << " ";
        i = i + 5;
    }
    
    cout << endl << endl;
    
    i = 0;
    
    while (i <= 20){
        i = i + 5;
        cout << i << " ";
    }
    
    return 0;   
}
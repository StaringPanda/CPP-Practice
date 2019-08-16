/*****************************************************************
// Example from Pg 375
*****************************************************************/
#include <iostream>

using namespace std;

int larger(int, int);

int main(){
    
    double num;
    double max;
    int count;
    
    cout << "Enter 10 numbers." << endl;
    cin >> num;
    max = num;
    
    for (count = 1; count < 10; count++){
        cin >> num;
        max = larger(max, num);
    }
    
    cout << "The Largest number is " << max << endl;
    
    return 0;   
}

int larger(int m, int n){
    
    if (m > n){
        return m;
    }else{
        return n;
    }
}
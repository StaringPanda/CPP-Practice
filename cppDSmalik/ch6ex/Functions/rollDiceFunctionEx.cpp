/*****************************************************************
// 
*****************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int rollDice(int);

int main(){
    
    int sum;
    
    cout << "The number of dice are rolled to get the sum 10 = " << rollDice(10) << endl;
    
    cout << "The number of dice are rolled to get the sum 6 = " << rollDice(6) << endl;
    
    cout << "Enter the desired sum of numbers to be rolled from two dice between 2 ans 12 inclusive: ";
    cin >> sum;
    cout << endl;
    
    do {
        cout << "Number must be between 2 and 12 inclusive, Try again: ";
        cin >> sum;
        cout << endl;  
    }
    while (sum < 2 || sum > 12);
    
    cout << "The number of dice are rolled to get the sum " << sum << " = " << rollDice(sum) << endl;
    
    return 0;   
}

int rollDice(int num){
    
    int die1;
    int die2;
    int sum;
    int rollCount = 0;
    
    srand(time(0));
    
    do {
        
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        sum = die1 + die2;
        rollCount++;
    }
    while (sum != num);
    
    return rollCount;
}
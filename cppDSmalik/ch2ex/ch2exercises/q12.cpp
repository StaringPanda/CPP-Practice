/***********************************
// Question 12 from Chapter 2 pg 119
***********************************/
#include <iostream>

using namespace std;

const int HOURS = 3600;
const int MINUTES = 60;

int main(){
    
    int hours;
    int minutes;
    int seconds;
    
    cout << "Enter seconds elapsed for an events given timeframe: " << endl;
    cin >> seconds;
    cout << endl;
    
    hours = seconds / HOURS;
    seconds = seconds % HOURS;
    
    minutes = seconds / MINUTES;
    seconds = seconds % MINUTES;
    
    cout << hours << ":" << minutes << ":" << seconds << "." << endl;
    
    return 0;
}
/*****************************************************************
// While loop example from Pg 268
// User is prompted to enter calories burned each day at training
// once day passes 7 the program exits the loop and continues
// running the rest of the code.
//
// Note that day and week are the control variables and must
// be initalised, otherwise the loop may not execute at all.
//
// Modified to work with a nested while loop, no further 
// reading was required to achieve this (Yay me).
*****************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int calBurnedInADay;
    int calBurnedInAWeek;
    int weeklyCalsBurned;
    int day;
    int week;
    
    day = 1;
    week = 1;
    calBurnedInAWeek = 0;
    weeklyCalsBurned = 0;
    
    while (week <= 4){
        while (day <= 7){
            
            cout << "Enter calories burned for day " << day << ": " << endl;
            cin >> calBurnedInADay;
            cout << endl;
            
            calBurnedInAWeek = calBurnedInAWeek + calBurnedInADay;
            day++;
        }
        weeklyCalsBurned = weeklyCalsBurned + calBurnedInAWeek;
        cout << "Average number of calories burned each day in week " << week << ": " << calBurnedInAWeek / 7 << endl << endl;
        day = 1;
        calBurnedInAWeek = 0;
        week++;
    }

    cout << "Average number of calories burned over four weeks: " << static_cast<double>(weeklyCalsBurned) / 4 << endl;
    
    return 0;   
}
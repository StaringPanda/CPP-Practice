/*****************************************************************
// Sentinel value example from Pg 276
// This while loop will run infinitely until the value -1 is 
// entered by the user when requested for a volunteers name.
//
// This is very useful if a user is unsure of how much data 
// they will need to enter.
*****************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const string SENTINEL = "-1";

int main(){
    
    string name;
    int numOfVolunteers;
    int numOfBoxesSold;
    int totalNumOfBoxesSold;
    double costOfOneBox;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Enter the volunteers name and the number of boxes sold, end with -1: " << endl;
    
    totalNumOfBoxesSold = 0;
    numOfVolunteers = 0;
    
    cin >> name;
    
    while (name != SENTINEL){
        
        cin >> numOfBoxesSold;
        cout << endl;
        
        totalNumOfBoxesSold = totalNumOfBoxesSold + numOfBoxesSold;
        numOfVolunteers++;
        cout << "Enter the volunteers name and the number of boxes sold, end with -1: " << endl;
        cin >> name;
    }
    
    cout << endl;
    
    cout << "The total number of boxes sold: " << totalNumOfBoxesSold << endl;
    
    cout << "Enter the cost of one box: " << endl;
    cin >> costOfOneBox;
    cout << endl;
    
    cout << "The total money made by selling cookies : $" << totalNumOfBoxesSold * costOfOneBox << endl;
    
    if (numOfVolunteers != 0)
        cout << "The average number of boxes sold overall: " << totalNumOfBoxesSold / numOfVolunteers << endl;
    else
        cout << "No input." << endl;
    
    return 0;   
}
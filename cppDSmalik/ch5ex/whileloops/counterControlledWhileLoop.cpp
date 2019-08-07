/*****************************************************************
// Counter controlled while loop example from Pg 273
// A variable usually called counter is used to control when
// the loop is to finish running, usually the counter is less
// than another given variable, usually entered by the user.
//
// With each loop iteration the counter must increase its value
// by the appropiate amount, until it becomes greater than or
// equal to the value entered by the user.  
//
// The if will catch that theres no input if the counter is 
// equal to 0.
*****************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    
    string name;
    int numOfVolunteers;
    int numOfBoxesSold;
    int totalNumOfBoxesSold;
    int counter;
    double costOfOneBox;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Enter the number of volunteers: " << endl;
    cin >> numOfVolunteers;
    cout << endl;
    
    totalNumOfBoxesSold = 0;
    counter = 0;
    
    while (counter < numOfVolunteers){
        cout << "Enter the volunteers name and the number of boxes sold: " << endl;
        cin >> name >> numOfBoxesSold;
        cout << endl;
        
        totalNumOfBoxesSold = totalNumOfBoxesSold + numOfBoxesSold;
        counter++;
    }
    
    cout << "The total number of boxes sold: " << totalNumOfBoxesSold << endl;
    
    cout << "Enter the cost of one box: " << endl;
    cin >> costOfOneBox;
    cout << endl;
    
    cout << "the total money made by selling cookies : $" << totalNumOfBoxesSold * costOfOneBox << endl;
    
    if (counter != 0)
        cout << "The average number of boxes sold overall: " << totalNumOfBoxesSold / counter << endl;
    else
        cout << "No input." << endl;
    
    return 0;   
}
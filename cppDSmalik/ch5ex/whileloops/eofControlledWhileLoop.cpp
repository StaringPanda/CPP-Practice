/*****************************************************************
// End of File controlled while loop from Pg 287 - 290.
*****************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    
    string firstName;
    string lastName;
    double testScore;
    char grade = ' ';
    double sum = 0;
    int count = 0;
    
    ifstream inFile;
    ofstream outFile;
    
    inFile.open("C:\\Users\\Rob\\Desktop\\Cpp code\\cppfiles\\Ch5_scoresIn.txt");
    
    if (!inFile){
        cout << "Cannot open input file \nProgram terminates! " << endl;
        return 1;
    }
    
    outFile.open("C:\\Users\\Rob\\Desktop\\Cpp code\\cppfiles\\Ch5_scoresOut.txt");
    
    outFile << fixed << showpoint << setprecision(2);
    
    inFile >> firstName >> lastName;
    inFile >> testScore;
    
    while (inFile){
        sum = sum + testScore;
        count++;
        
        switch (static_cast<int> (testScore) / 10){
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                grade = 'F';
                break;
            case 6:
                grade = 'E';
                break;
            case 7:
                grade = 'D';
                break;
            case 8:
                grade = 'C';
                break;
            case 9:
                grade = 'B';
            case 10:
                grade = 'A';
                break;
            default:
                cout << "Invalid score." << endl;
        }
        
        outFile << left << setw(12) << firstName << setw(12) << lastName
                << right << setw(4) << testScore << setw(2) << grade << endl;
                
        inFile >> firstName >> lastName;
        inFile >> testScore;
    }
    
    outFile << endl;
    
    if (count != 0){
        cout << "Class Average: " << sum / count << endl;
    }else{
        outFile << "No Data." << endl;
    }
    
    inFile.close();
    outFile.close();
    
    return 0;   
}
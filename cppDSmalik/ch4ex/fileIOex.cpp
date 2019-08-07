/*****************************************************************
// File input/output example from Pg 219
// Files must be created prior to program execution or the 
// program will terminate. 
// If an outfile doesn't exist one may be auto-created as
// a default, manually creating one will overwrite the
// default.
// Create both prior to execution to avoid confusion.
//
// Filepath of files must be specified, this can change from
// system to system or if either files are moved to new 
// directiories, then the new filepath(s) must be defined
// in the open() function.
//
// Data should be entered in the order the program has 
// the desired data to be entered and should be separated
// by a space.
// In this example firstName, LastName, test1, test2, test3,
// test4 and test5 are all requested in that order.
//
// Follow the filepath to the test.txt in file explorer
// open it up, type in test data and run the program.
// If its successful the testavg file should hold the data
// in a more neat and tidy format, with the average testscore
// too.
*****************************************************************/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    
    ifstream inFile;
    ofstream outFile;
    
    double test1, test2, test3, test4, test5;
    double average;
    
    string firstName;
    string lastName;

    inFile.open("C:\\Users\\Rob\\Desktop\\Cpp code\\cppfiles\\test.txt");
    
    if(!inFile){
        cout << "Cannot open the input file. \nThe program terminates. " << endl;
        return 1;
    }
    
    outFile.open("C:\\Users\\Rob\\Desktop\\Cpp code\\cppfiles\\testavg.txt");
    
    outFile << fixed << showpoint << setprecision(2);
    
    cout << "Processing Data: " << endl << endl;
    
    inFile >> firstName >> lastName;
    outFile << "Student name: " << firstName << " " << lastName << endl;
    
    inFile >> test1 >> test2 >> test3 >> test4 >> test5;
    outFile << "Test scores:" << setw(5) << test1 << setw(5) << test2 << setw(5) << test3 << setw(5) << test4 << setw(5) << test5 << endl;
    
    average = (test1 + test2 + test3 + test4 + test5) / 5.0;
    
    outFile << "Average test score: " << setw(6) << average << endl;
    
    cout << "Success!" << endl;

    inFile.close();
    outFile.close();
    
    return 0;   
}
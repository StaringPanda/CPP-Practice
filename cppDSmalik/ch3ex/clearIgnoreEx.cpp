/********************************************************************
// Demostrates how input failure can occur and how the program can 
// handle it using the clear() function with the instanciated cin
// object of the istream class.
// Furthermore the ignore() function is used to skip any garbage 
// data from the buffer by telling the program to simply ignore it,
// its parameter/argument field in this example tells it to skip
// the next 200 characters or if the character count on a line is
// less than 200, it resumes reading data when it hits a \n 
//
// Use this sample data to test:
// Fail: (Sam 35 q56 6.2)
// Success: (Sam 35 156 6.2)
// Enter both in this given order, found on Pg 143
********************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string name;
    int age = 0;
    int weight = 0;
    double height = 0.0;
    
    cout << "Line 13: Enter name, age, weight and height: " << endl;
    cin >> name >> age >> weight >> height;
    cout << endl;
    
    cout << "Line 17: Name: " << name << endl;
    cout << "Line 18: Age: " << age << endl;
    cout << "Line 19: Weight: " << weight << endl;
    cout << "Line 20: Height: " << height << endl;
    
    cin.clear();
    
    cin.ignore(200, '\n');
    
    cout << "Line 13: Enter name, age, weight and height: " << endl;
    cin >> name >> age >> weight >> height;
    cout << endl;
    
    cout << "Line 30: Name: " << name << endl;
    cout << "Line 31: Age: " << age << endl;
    cout << "Line 32: Weight: " << weight << endl;
    cout << "Line 33: Height: " << height << endl;
    
    return 0;   
}
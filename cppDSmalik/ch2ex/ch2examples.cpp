#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << endl;
    /*******************************************************************
    // shows the order of precedence in operation. ()* division % + -  
    // Additionaly shows how mixed expressions work,
    // if integer and floating point data types are used together
    // the integer will be converted to a floating point number 
    *******************************************************************/
    cout << "Example on Pg 50: \n" << endl;
    
    cout << "3 / 2 + 5.5 = " << 3 / 2 + 5.5 << endl;
    cout << "15.6 / 2 + 5 = " << 15.6 / 2 + 5.5 << endl;
    cout << "4 + 5 / 2.0 = " << 4 + 5 / 2.0 << endl;
    cout << "4 * 3 + 7 / 5 - 25.5 = " << 4 * 3 + 7 / 5 - 25.5 << endl;
    
    cout << "\n" << endl;
    
    cout << "Example on Pg 52: \n" << endl;
    
    /*******************************************************************************
    // Type Conversion (Casting)
    // When a value of one data type is automatically changed to another data type,
    // an implicit type coercion is said to have occurred.
    // the previous examples show that if you're not careful about data types,
    // implicit type coercion can generate unexpected results.
    // To avoid this, C++ provides for explicit type conversion through the use
    // of a type cast operator, also called type conversion or type casting.
    // 
    // On second last statement, 15 gets casted to 15.0 then divided by 2
    // On last statement, 15 gets divided by 2 first and then cast to double giving 7.0
    *******************************************************************************/
    
    cout << "static_cast<int> (7.9) = " << static_cast<int> (7.9) << endl;
    cout << "static_cast<int> (3.3) = " << static_cast<int> (3.3) << endl;
    cout << "static_cast<double> (25) = " << static_cast<double> (25) << endl;
    cout << "static_cast<double> (5 + 3) = " << static_cast<double> (5 + 3) << endl;
    cout << "static_cast<double> (15) / 2 = " << static_cast<double> (15) / 2 << endl;
    cout << "static_cast<double> (15 / 2) = " << static_cast<double> (15 / 2) << endl;
    cout << "static_cast<int> (7.8 + static_cast<double> (15) / 2) = " << static_cast<int> (7.8 + static_cast<double> (15) / 2) << endl;
    cout << "static_cast<int> (7.8 + static_cast<double> (15 / 2)) = " << static_cast<int> (7.8 + static_cast<double> (15 / 2)) << endl;
    
    cout << "\n" << endl;
    
    cout << "Casting with int and char datatypes: \n" << endl;
    
    /******************************************************************************
    // Casting with int and char datatypes, char uses ASCII
    ******************************************************************************/
    
    cout << "static_cast<int> ('A') = " << static_cast<int> ('A') << endl;
    cout << "static_cast<int> ('8') = " << static_cast<int> ('8') << endl;
    cout << "static_cast<char> (65) =  " << static_cast<char> (65) << endl;
    cout << "static_cast<char> (56) = " << static_cast<char> (56) << endl;
    
    cout << "\n" << endl;
    
    cout << "Casting with C-like casting expressions: \n" << endl;
    
    /********************************************************************************
    // Casting with C-like expressions is not recommended in C++ because it is less 
    // stable than static_cast which is designed for C++
    ********************************************************************************/
    
    cout << "int(2.2) = " << int(2.2) << endl;
    cout << "double(3.4 + 5.5) = " << double(3.4 + 5.5) << endl; 
    
    cout << "\n" << endl;
    
    cout << "const datatype is used and walk-through: \n" << endl;
    
    /*****************************************************************************
    // Examples of the const datatype and a small example of tracing values 
    // through what programmers call a walk-through, this is a valuable tool
    // to learn and practice.
    *****************************************************************************/
    
    const double CONVERSION = 2.54f;
    cout << CONVERSION;
    
    cout << "\n" << endl;
    
    int num1, num2, num3; 
    num1 = 18;
    num1 = num1 + 27;
    num2 = num1;
    num3 = num2 / 5;
    num3 = num3 / 4;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    cout << "\n" << endl;
    
    cout << "Example of user inputted data: \n" << endl;
    
    /*****************************************************************************
    // Example showing how to perform user inputted data using numeric data
    // and strings. Pg65
    *****************************************************************************/
    
    string firstName;
    string lastName;
    int age;
    double weight;
    
    cout << "Enter first name, last name, age and weight, separated by spaces: " << endl;
    cout << endl;
    
    cin >> firstName >> lastName;
    cin >> age >> weight;
    
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Age: " << age << endl;
    cout << "Weight" << weight << endl;
    
    cout << "\n" << endl;
    
    cout << "Example of walk-through debugging technique: \n Must look at source code to practice this, start from line 134: \n" << endl;
    
    /*****************************************************************************
    // A more complex version of variable manipulation showing the effectiveness
    // of learning the walk-through technique, mastering this can make debugging
    // code a lot easier for programmers.
    // Take the below values as they are in the book on page 68, length = 10.5, 
    // width = 4.0, name = Amy & ch = A
    // Look at the code and produce the result you would expect along with the
    // actual result(expected may be your actual, good for you!;)).
    ******************************************************************************/
    
    int count, temp;
    double length, width, area;
    char ch;
    string name;
    
    count = 1;
    count = count + 1;
    cout << "Please enter length and width values, separated by spaces: " << endl;
    cin >> length >> width;
    area = length * width;
    cout << "Please enter name: " << endl;
    cin >> name;
    length = length + 2;
    width = 2 * length - 5 * width;
    area = length * width;
    cout << "Please enter a single uppercase character: " << endl;
    cin >> ch;
    cout << endl;
    temp = count + static_cast<int> (ch);
    
    cout << "count = " << count <<"\n" << "temp = " << temp << "\n" << "area = " << area << "\n" << "name = " << name << "\n" << "character = " << ch << endl;
    
    cout << "\n" << endl;
    
    cout << "This shows how output statments work: \n" << endl;
    
    /****************************************************************************
    // Shows how the output statement and Stream Insertion Operator can
    // can be used and show how their placements can effect how data is
    // printed to the screen, some results can be unexpected especially 
    // when comparing the results to the code.
    ****************************************************************************/
    
    int a, b;
    a = 65;
    b = 78;
    
    cout << 29 / 4 << endl;
    cout << 3.0 / 2 << endl;
    cout << "Hello There.\n";
    cout << 7 << endl;
    cout << 3 + 5 << endl;
    cout << "3 + 5";
    cout << " **";
    cout << endl;
    cout << 2 + 3 * 6 << endl;
    cout << "a" << endl;
    cout << a << endl;
    cout << b << endl;
   
    return 0;
}
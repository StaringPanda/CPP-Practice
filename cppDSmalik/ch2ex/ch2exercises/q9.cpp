/***********************************
// Question 9 from Chapter 2 pg 119
***********************************/
#include <iostream>

using namespace std;

int main(){
    
    double score1, score2, score3, score4, score5, average;
    
    cout << "Please enter the 5 test scores separated by space: \n";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    cout << endl;
    
    average = (score1 + score2 + score3 + score4 + score5) / 5;
    
    cout << "Average score = " << average;
    
    return 0;   
}
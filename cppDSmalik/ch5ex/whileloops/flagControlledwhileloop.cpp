/*****************************************************************
// Flag controlled while loop example from Pg 283
//
// This loop will run until the LCV is flagged to be true or
// false respectively, bool is used.
//
// Random number generation is achieved with the rand() function
// in the cstdlib. this function will output what appear to be 
// random numbers, however, each time the program is run it 
// output the same random numbers!
//
// This is because rand() uses an alogrithm that produces the 
// same sequence of random numbers each time the program is
// executed on the same system.
//
// The function srand() can be used, this takes input as an 
// unsigned int, which acts as the seed for the algorithm.
//
// By specifying a different seed each time, different random
// numbers will be produced. The function time() from the ctime
// header is used to achieve this, when set to zero it returns
// the amount of seconds that have elapsed since Jan 1st 1970,
// which will produce different random numbers every second.
*****************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

int main(){
    
    int rng;
    double guessNum;
    bool isGuessed;
    
    srand(time(NULL));
    rng = rand() % 100;
    
    isGuessed = false;
    
    while (!isGuessed){
        
        cout << "Enter a whole number greater than or equal to zero and less than 100:" << endl;
        cin >> guessNum;
        
        static_cast<int> (guessNum);
        
        if (guessNum == rng){
            cout << "You guessed the correct number." << endl;
            isGuessed = true;
        }
        else if (guessNum < rng){
            cout << "Your guess is lower than the hidden number. \nGuess again!" << endl << endl;
        }else{
            cout << "Your guess is higher than the hidden number. \nGuess again!" << endl << endl;
        }
    }
            
    return 0;   
}
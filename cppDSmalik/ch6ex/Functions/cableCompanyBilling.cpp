/*****************************************************************
// Cable company billing example from Pg 369 - 373
//
// This example uses functions that do not take any arguments.
//
// Note that the function code is not DRY and can be further
// refined to remove repeating code 
//
// (Hint: functions can be used within all other functions)
*****************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

const double RES_BILL_PROC_FEES = 4.50;
const double RES_BASIC_SERV_COST = 20.50;
const double RES_COST_PREM_CHANNEL = 7.50;

const double BUS_BILL_PROC_FEES = 15.00;
const double BUS_BASIC_SERV_COST = 75.00;
const double BUS_BASIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;

double residential();
double business();

int main(){
    
    int accountNumber;
    char customerType;
    double amountDue;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "This program computes a cable bill. " << endl;
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << endl;
    
    cout << "Enter customer type: R, r (Residential), B, b (Business): ";
    cin >> customerType;
    cout << endl;
    
    switch (customerType){
        
        case 'r':
        case 'R':
            amountDue = residential();
            cout << "Account number = " << accountNumber << endl;
            cout << "Amount due = $" << amountDue << endl;
            break;
        case 'b':
        case 'B':
            amountDue = business();
            cout << "Account number = " << accountNumber << endl;
            cout << "Amount due = $" << amountDue << endl;
            break;
        default:
            cout << "Invalid customer type." << endl;   
    }
    return 0;   
}

double residential(){
    
    int noOfPremiumChannels;
    double billAmount;
    
    cout << "Enter the number of premium channels used: ";
    cin >> noOfPremiumChannels;
    cout << endl;
    
    billAmount = RES_BASIC_SERV_COST + RES_BILL_PROC_FEES + noOfPremiumChannels * RES_COST_PREM_CHANNEL;
    
    return billAmount;
}

double business(){
    
    int noOfBasicServiceConnections;
    int noOfPremiumChannels;
    double billAmount;
    
    cout << "Enter the number of basic service connections: ";
    cin >> noOfBasicServiceConnections;
    cout << endl;
    
    cout << "Enter the number of premium channels used: ";
    cin >> noOfPremiumChannels;
    cout << endl;
    
        if (noOfBasicServiceConnections <= 10){
            billAmount = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + noOfPremiumChannels * BUS_COST_PREM_CHANNEL;
        }else{
            billAmount = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + (noOfBasicServiceConnections - 10) * BUS_BASIC_CONN_COST + noOfPremiumChannels * BUS_COST_PREM_CHANNEL;
        }
    return billAmount;
}
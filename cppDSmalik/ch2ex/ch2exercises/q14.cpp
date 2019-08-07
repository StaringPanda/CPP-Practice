/***********************************
// Question 14 from Chapter 2 pg 120
***********************************/
#include <iostream>
#include <iomanip>

using namespace std;

const double BYTE = 1024;
const double KILOBYTE = BYTE;
const double MEGABYTE = KILOBYTE * 1024;
const double GIGABYTE = MEGABYTE * 1024;

const double CBYTE = 1000;
const double CKILOBYTE = CBYTE;
const double CMEGABYTE = CKILOBYTE * 1000;
const double CGIGABYTE = CMEGABYTE * 1000;

int main(){
    
    double comercialHDDcapactiy;
    double actualHDDcapacity;
    
    cout << "Enter HDD capacity in GB: " << endl;
    cin >> comercialHDDcapactiy;
    
    comercialHDDcapactiy = comercialHDDcapactiy * CGIGABYTE;

    actualHDDcapacity = comercialHDDcapactiy / GIGABYTE;
    
    cout << "Actual HHD capacity in GB = " << fixed << setprecision(2) <<  actualHDDcapacity << endl <<endl;
    
    cin.clear();
    cin.ignore(200, '\n');
    
    //cout << fixed << setprecision(2) << GIGABYTE;
    
    cout << "Enter HDD capacity in MB: " << endl;
    cin >> comercialHDDcapactiy;
    
    comercialHDDcapactiy = comercialHDDcapactiy * CMEGABYTE;

    actualHDDcapacity = comercialHDDcapactiy / MEGABYTE;
    
    cout << "Actual HHD capacity in MB = " << fixed << setprecision(2) <<  actualHDDcapacity;
    
    return 0;
}
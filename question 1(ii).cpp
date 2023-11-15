#include <iostream>
using namespace std:

int main () {
    int year ;

    //Input the year for the user 
    cout << "Enter a year: ";
    cin >> year;

    //Check if the year is a leap year 
    if (year %4 == 0) {
        cout << year <<  " is a leap year " << endl;
        } else {
            cout << year << "is not  a leap year " << endl;
        }
        retun 0;
}
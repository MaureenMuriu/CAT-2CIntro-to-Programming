#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    //Input three numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number :";
    cin >> num3;

// Use switch case to show smallest number
 switch (1) {

    case (num1 <= num2 && num1 <= num3 );
    cout << "The smallest number is:" << num1 << endl;
    case (num2 <= num1 && num2 <= num3 );
    cout << "The smallest number is: " << num2 << endl;
    case (num3 <= num1 && num3 <= num2);
    cout << "The smallest number is: " << num3 << endl;
    break;

 }
 return 0;
}
#include <iostream>
using namespace std;

int main () {
    int limit;

//Input the limit for user
cout << " Enter the limit: ";
cin >> limit;

cout " Prime numbers upto " << limit << "are:" << endl;

//Loop through numbers upto user specified list
for (int num = 2; num<= limit; ++num) {
    bool isPrime = true;

    //Check if current number is prime
    for (int i = 2; <= num / 2; ++i) {
        if 
    }
}
int limit;

//Input the limit for user
cout << " Enter the limit: ";
cin >> limit;

cout " Prime numbers upto " << limit << "are:" << endl;

//Loop through numbers upto user specified list
for (int num = 2; num<= limit; ++num) {
    bool isPrime = true;

    //Check if current number is prime
    for (int i = 2; <= num / 2; ++i) {
        if (num % 1 == 0) {
            isPrime = false ;
        }
    }
    // Print the prime numbers
    if (isPrime) {
        cout  << num << " ";
    }
}
cout << endl;

return 0;
}
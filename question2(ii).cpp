#include  <iostream>
using namespace std;

int main() {
    char character;

    //Input a character for the user
    cout << "Enter a character: ";
    cin >> character;

    //Check if the input is a letter using isalpha function
    if (isalpha(character)) {
        //Convert the character to lowercase for easy comparison 
        char lowercaseChar = tolower(character);
    
    //Check if the character is a vowel or consonant
    if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u') {
 cout << character << " is a vowel" << endl;
 
   } else {
        cout << character << " is a consonant" << endl;
    }                                                                                                                                                                                                                               

    } 
    return 0;
}
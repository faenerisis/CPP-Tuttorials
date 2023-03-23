#include <iostream>

using std::cout;
using std::cin;

int main(){
    int number = 5;
    int guessedNumber;
    bool keepgoing = true;
    
    while (keepgoing) {
        cout << "Guess the number!: \n";
        cin >> guessedNumber;
        if (guessedNumber == number) {
            cout << "Thats it you gussed it right ! \n";
            keepgoing = false;
        }
        if ( guessedNumber != number) {
            cout << "You gussed it wrong try again ! \n";
            keepgoing = true;
        }
    }
}

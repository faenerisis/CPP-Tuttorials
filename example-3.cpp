#include <iostream>

using std::cout;
using std::cin;

int main(){
    int firstNumber;
    int secondNumber;
    bool keepgoing = true;
    int answer;
    
    while (keepgoing) {
        cout << "Enter the first number: " << "\n";
        cin >> firstNumber;
        cout << "The first number is, " << firstNumber <<" enter the second number: " << "\n";
        cin >> secondNumber;
        
        if (firstNumber < secondNumber) {
            cout << "The first number " << firstNumber << ", is less than second number," << "\n";
        }
        if (firstNumber == secondNumber) {
            cout << "The first number " << firstNumber << ", is equal to the second number" << "\n";
        }
        if (firstNumber > secondNumber) {
            cout << "The first number is " << firstNumber<< ", is greater than second number" << "\n";
        }
        cout << "Compare another pair? 0 means no, ";
        cin >> answer;
        if (answer == 0) {
            keepgoing = false;
        }
    }
}

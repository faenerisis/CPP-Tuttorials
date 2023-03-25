#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

int main(){
    string name;
    cout << "Who are you ? ";
    cin >> name;
    string greeting = "Hi";
    if (name == "Kubi") {
        greeting += ", master Kubi!";
    }
    cout << greeting << "\n";
    
    long l = greeting.length();
    cout << "\"" + greeting + "\" is " << l << " characters long." << "\n";
    string beginnig = greeting.substr(greeting.find(' ') + 1);
    cout << beginnig << "\n";
    if (beginnig == name) {
        cout << "expected result." << "\n";
    }
    return 0;
}

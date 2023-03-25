#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

int main() {
    bool isItTrue = true;
    while (isItTrue) {
        string word1;
        string word2;
        string controlWord;
        
        cout << "Gimme the first word ! ";
        cin >> word1;
        cout << "\n";
        cout << "Gimme the second word ! ";
        cin >> word2;
        cout << "First word is " + word1 + ", and then the second word is " + word2 + ".\n";
        if( word1.length() > word2.length()) {
            cout << "First word is longer than second word" << "\n";
        }
        if (word1.length() < word2.length()) {
            cout << "Second word is longer than first word" << "\n";
        }else {
            cout << "They are at the same length \n";
        }
        cout << "\n" << "Do you wish to continue y/n ? ";
        cin >> controlWord;
        if (controlWord == "y") {
            isItTrue = true;
        }else {
            isItTrue = false;
        }
    }
    return 0;
}

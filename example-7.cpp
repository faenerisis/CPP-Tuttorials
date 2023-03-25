#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

#include <vector>
using std::vector;
using std::begin;
using std::end;

#include <algorithm>
using std::sort;
using std::count;

int main() {
    vector<int> nums;
    
    for (int i = 0; i < 10; i++) {
        nums.push_back(i);
        cout << nums[i] << " \n";
    }
    cout << "int vector nums has " << nums.size() << " elements." << "\n";
    /*
    for (auto item : nums) {
        cout << item << " ";
    }
    */
    cout << "\n";
    
    vector<string> words;

    for (int i = 0; i < 3; i++) {
        string s;
        if (i != 3) {
            cout << i + 1 << " enter a word: ";
            cin >> s;
            words.push_back(s);
        }
    }
    
    for (auto item : words) {
        cout << item << " ";
    }
    cout << "\n";
    return 0;
}

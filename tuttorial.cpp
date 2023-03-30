#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

#include <vector>
using std::vector;
using std::begin;
using std::end;

int main() {
    int n, i, j;
    
    cout << "Length ? ";
    cin >> n;
    string arr[n];
    
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    
    cout << '\n';
    
    for (j = n-1; j >= 0; j--) {
        cout << arr[j] << ' ';
    }
    
    return 0;
}

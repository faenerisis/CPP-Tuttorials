#include <iostream>
using std::cin;
using std::cout;

int main() {
    int x;
    cout << "Enter a number" << '\n';
    cin >> x;
    
    bool prime = true;
    int i = 2;
    
    while (i <= x/i) {
        int factor = x/i;
        if (factor*i == x) {
            cout << "factor found: " << i << " * " << factor << '\n';
            prime = false;
            break;
        }
        i = i + 1;
    }
    
    cout << x << " is ";
    if (prime) {
        cout << "prime" << '\n';
    } else {
        cout << "not prime" << '\n';
    }
    return 0;
}

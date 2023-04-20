#include <iostream>
using std::cin;
using std::cout;

int main() {
    int x, i;
    cout << "Enter a number" << '\n';
    cin >> x;
    
    bool prime = true;
    for (i=2; i <= x/i; i = i + 1) {
        int factor = x/i;
        if (factor*i == x) {
            cout << "factor found: " << i << " * " << factor << '\n';
            prime = false;
            break;
        }
    }
    cout << x << " is ";
    if (prime) {
        cout << "prime" << '\n';
    } else {
        cout << "not prime" << '\n';
    }
    
    return 0;
}

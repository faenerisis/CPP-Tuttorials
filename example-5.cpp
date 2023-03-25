#include <iostream>

using std::cout;
using std::cin;

double add(double x, double y) {
    return x + y;
}

double add(double a, double b, double c) {
    return  a + b + c;
}

bool test(bool x) {
    return x;
}

bool test(double x) {
    return x > 0;
}

int main() {
    int total = add(3, 4);
    cout << "3 + 4 is " << total << "\n";
    
    double another = add(1.2, 3.4);
    
    cout << "\n";
    cout << "1.2 + 3.4 is " << another << "\n";
    
    auto totalofthree = add(1.1, 2.2, 3.3);
    cout << "\n";
    cout << "1.1 + 2.2 + 3.3 is " << totalofthree << "\n";
    
    if (test(true)) {
        cout << "\n";
        cout << "true passes the test" << "\n";
    }
    if (test(3.2)) {
        cout << "\n";
        cout << "3.2 passes the test" << "\n";
    }
    /*
     if (test(3)) {
         cout << "\n";
         cout << "3.2 passes the test" << "\n";
     }
    */
    
    return 0;
}

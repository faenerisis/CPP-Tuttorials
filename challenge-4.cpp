#include <iostream>
#include <string>
using namespace std;

void employee_profile() {
    
    double hourly_wage = 23.50;
    string name;
    int age;
    cin >> name;
    cin >> age;
    
    cout << name << " " << age << " " << hourly_wage;
}

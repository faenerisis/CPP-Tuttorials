#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

//Blue print
class Employee {
public:
    string Name;
    string Company;
    int Age;
    
    void IntroduceYourself() {
        cout << "Name: - " << Name << '\n';
        cout << "Company: - " << Company << '\n';
        cout << "Age: - " << Age << '\n';
    }
};

int main() {
    Employee emp1;
    emp1.Name = "Kubi";
    emp1.Company = "TurkNet";
    emp1.Age = 23;
    
    emp1.IntroduceYourself();
}

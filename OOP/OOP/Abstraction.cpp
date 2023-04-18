#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;
public:
    //setter
    void setName(string name) {
        Name = name;
    }
    //getter
    string getName(){
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if (age >= 18) {
            Age = age;
        }
    }
    int getAge() {
        return Age;
    }
    void IntroduceYourself() {
        cout << "Name: " << Name << '\n';
        cout << "Company: " << Company << '\n';
        cout << "Age: " << Age << '\n';
    }
    void AskForPromotion(){
        if (Age > 30) {
            cout << Name << ", you got promoted!" << '\n';
        } else {
            cout << Name << ", sorry you are to young to get promotion!" << '\n';
        }
    }
    //Constructor
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    Employee emp1 = Employee("Kubi", "TurkNet", 32);
    emp1.IntroduceYourself();
    Employee emp2 = Employee("Ahmet", "Ithaki", 23);
    emp2.IntroduceYourself();
    
    emp1.AskForPromotion();
    emp2.AskForPromotion();
}

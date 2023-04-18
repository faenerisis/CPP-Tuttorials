#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

//Super class
class Employee:AbstractEmployee {
private:
    string Company;
    int Age;
protected:
    string Name;
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

//Sub class
class Developer:public Employee {
public:
    string FavLanguage;
    Developer(string name, string company, int age, string fav) :Employee(name, company, age) {
        FavLanguage = fav;
    }
    void FixBug() {
        cout << getName()<<" fixed bug using " << FavLanguage << '\n';
    }
};

class Teacher:public Employee {
public:
    string Subject;
    void PrepareLesson() {
        cout << Name << " is preparing " << Subject << " lessons." << '\n';
    }
    Teacher(string name, string company, int age, string subject) :Employee(name, company, age) {
        Subject = subject;
    }
};

int main() {
    Employee emp1 = Employee("Kubi", "TurkNet", 32);
    emp1.IntroduceYourself();
    cout << '\n';
    Teacher teach1 = Teacher("Saldina", "Binance", 25, "OOP");
    teach1.IntroduceYourself();
    teach1.PrepareLesson();
}

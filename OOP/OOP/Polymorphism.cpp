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
    void AskForPromotion() {
        if (Age > 30) {
            cout << Name << ", you got promoted!" << '\n';
        } else {
            cout << Name << ", sorry you are to young to get promotion!" << '\n';
        }
    }
    void Work() {
        cout << Name << " is cheking email, task backlog, etc..." << '\n';
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
private:
    string FavLanguage;
public:
    void setFavLanguage(string favLanguage) {
        FavLanguage = favLanguage;
    };
    string getFavLanguage() {
        return FavLanguage;
    };
    Developer(string name, string company, int age, string fav) :Employee(name, company, age) {
        FavLanguage = fav;
    }
    void FixBug() {
        cout << getName()<<" fixed bug using " << FavLanguage << '\n';
    }
    virtual void Work() {
        cout << Name << " is fixing bugs and writing " << FavLanguage << " code..." << '\n';
    }
};

class Teacher:public Employee {
private:
    string Subject;
public:
    void setSubject(string subject) {
        Subject = subject;
    };
    string getSubject() {
        return Subject;
    };
    void PrepareLesson() {
        cout << Name << " is preparing " << Subject << " lessons." << '\n';
    }
    Teacher(string name, string company, int age, string subject) :Employee(name, company, age) {
        Subject = subject;
    }
    void Work() {
        cout << Name << " is teaching " << Subject << '\n';
    }
};

int main() {
    Developer dev1 = Developer("Joe", "Microsoft", 35, "C#");
    dev1.IntroduceYourself();
    dev1.Work();
    cout << '\n';
    Teacher teach1 = Teacher("Saldina", "Binance", 25, "OOP");
    teach1.IntroduceYourself();
    teach1.Work();
    cout << '\n';
    Employee* e1 = &dev1;
    Employee* e2 = &teach1;
    
    e1->Work();
    e2->Work();
}

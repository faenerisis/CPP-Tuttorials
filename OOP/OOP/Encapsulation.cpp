
#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

//Blue print
class Employee {
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
    //Constructor
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    Employee emp1=Employee("Kubi", "TurkNet", 23);
    emp1.IntroduceYourself();
    
    emp1.setAge(18);
    emp1.setCompany("Meta");
    cout << emp1.getName() << " " << emp1.getCompany() << " " << emp1.getAge() << '\n';
    /*
    emp1.Name = "Kubi";
    emp1.Company = "TurkNet";
    emp1.Age = 23;
    emp1.IntroduceYourself();
     */
}

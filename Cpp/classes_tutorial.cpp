#include <iostream>

using namespace std;

class Employee {
public:
    string Name;
    string Company;
    int Age;

    void Intro() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    //constructor
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {

    /*    
    Employee employee1;
    employee1.Name = "Varun";
    employee1.Company = "Nexteer";
    employee1.Age = 28;
    employee1.Intro();
    */

    Employee employee1 = Employee("Varun","Noccarc",25);
    employee1.Intro();
    

}
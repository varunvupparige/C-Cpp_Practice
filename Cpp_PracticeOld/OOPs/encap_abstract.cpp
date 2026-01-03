#include <iostream>

using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;

public:

    void setName(string name) { //setter
        Name = name;
    }

    string getName() { //getter
        return Name;
    }

    void setCompany(string company) { //setter
        Company = company;
    }

    string getCompany() { //getter
        return Company;
    }

    void setAge(int age) { //setter
        Age = age;
    }

    int getAge() { //getter
        return Age;
    }

    void Intro() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    void AskForPromotion() {
        if (Age > 30)
            cout << Name << " got promoted" << endl;
        else
            cout << Name << " did not get promoted" << endl;
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
    //employee1.Intro();

    employee1.setAge(28);
    cout << employee1.getName() << " is "<< employee1.getAge() << " years old" << endl;   
    employee1.AskForPromotion(); 

}
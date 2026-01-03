#include <iostream>

using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee {
private:
    string Company;
    int Age;

protected:
    string Name;

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

// developer is derived class and Employee is the parent class. Inheritance!
class Developer: public Employee {

public:
    string FavProgLang;
    Developer(string name, string company, int age, string favlang)
        :Employee(name, company, age)
    {
        FavProgLang = favlang;
    }
    void FixBug() {
        cout << getName() << " fixed bug using " <<FavProgLang << endl;
    }
};

class Teacher: public Employee {
public:
    string Subject;
    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
    {
        Subject = subject;
    }

    void PrepLesson() {
        cout << Name << "is prepping lessons for " << Subject << endl;
    }
};


int main() {

    Developer d = Developer("Varun","Nexteer",25,"C++");
    d.FixBug();
    d.AskForPromotion();

    Teacher t = Teacher("John","Bapuji",45, "PE");
    t.AskForPromotion();

}
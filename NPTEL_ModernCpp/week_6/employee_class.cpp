//polymoprphic hierarchy with flexible design
#include <iostream>
#include <string>
#include <vector>
using namespace std;


// abstract base class
class Employee {
    protected:
        string name_;
        vector<Employee*> reports;
    public:
        virtual void salary_processing() = 0;
        static vector<Employee*> staffs;
        void add_staff(Employee* e) { staffs.push_back(e); }
};

class Engineer: public Employee {
    public:
        Engineer(const string& name) { name_ = name; add_staff(this); }
        void salary_processing() { cout << "processing for engineers" << endl; }
};

class Manager : public Employee {
    public:
        Manager(const string& name) { name_ = name; add_staff(this); }
        void salary_processing() { cout << "processing for managers" << endl; }
};

vector<Employee*> Employee::staffs;

int main() {

    Engineer e1("Swagita"), e2("Varun");
    Manager m1("Sasmita"), m2("Sunitha");

    vector<Employee*>::const_iterator it; //it is a pointer like object; so its a pointer to a pointer of employee type here

    for(it = Employee::staffs.begin(); it < Employee::staffs.end(); ++it) {
        (*it)->salary_processing();
    }
}
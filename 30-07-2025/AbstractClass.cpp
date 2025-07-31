#include<iostream>
using namespace std;

class Employee{
    protected:
        string name;
        int empId;
        double baseSalery;
        static int employeeCount;
    public :
        Employee(string name, int empId, double baseSalery){
            this->name = name;
            this->empId = empId;
            this->baseSalery = baseSalery;

            employeeCount++;
        }

        // pure virtual function
        virtual double calculateSalery() = 0;

        virtual ~Employee(){
            cout<<"Destructor called for Employee : "<<name<<endl;
        }

        void showBasicInfo(){
            cout<<"Name : "<<name<<", ID: "<<empId<<endl;
        }

        static int getEmployeeCount(){
            return employeeCount;
        }
};

int Employee::employeeCount = 0;

class Manager: public Employee{
    double bonus;

    public: 
        // constructor listing
        Manager(string n, int id, double salery, double b)
            : Employee(n, id, salery), bonus(b) {}


        // overriding the pure virtual function
        double calculateSalery() override {
            return baseSalery + bonus;
        }

        ~Manager(){
            cout<<"Destructor called for Manager: "<<name<<endl;
        }
};

int main(){

    Employee* e1 = new Manager("Vijay Pradeep", 101, 50000, 15000);

    e1->showBasicInfo();

    cout << "Total Salary: " << e1->calculateSalery() << endl;
    cout << "Total Employees: " << Employee::getEmployeeCount() << endl;

    // free memory
    delete e1;


    return 0;
}
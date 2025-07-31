#include<iostream>
using namespace std;

class Employee;

class Finance{
    public:
        friend void showBonus(Employee& e1);
};

class Employee{
    private:
        int empId;
        int salary;
        
    public:
    Employee(int id, int sal) {
        empId = id;
        salary = sal;
    }

    friend void showBonus(Employee& e);
};

void showBonus(Employee& e) {
    double bonus = 0.1 * e.salary;
    cout << "Employee ID: " << e.empId << ", Bonus: " << bonus << endl;
}

int main(){

    /*
    1.  Friend Function – Employee Bonus Access
        Problem Statement:
        Design two classes: Employee and Finance.
        Employee has private data: empId, salary
        Finance class has a friend function showBonus() that accesses salary from Employee to compute bonus = 10% of salary
    */

    Employee e1(101, 50000);
    Finance f1;

    showBonus(e1);

    return 0;
}
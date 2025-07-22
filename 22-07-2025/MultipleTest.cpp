#include<iostream>
using namespace std;

class Person {
    string name;
    int age;
public:
    void setPersonInfo(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Taxpayer {
    long long int aadhar;
    string pan;
public:
    void setTaxInfo(long long int aadhar, string pan) {
        this->aadhar = aadhar;
        this->pan = pan;
    }

    void displayTaxInfo() {
        cout << "Aadhar: " << aadhar << endl;
        cout << "PAN: " << pan << endl;
    }
};

class Employee : public Person, public Taxpayer { 
    int empId;
    int salary;
public:
    void setEmployeeInfo(string name, int age, long long int aadhar, string pan, int empId, int salary) {
        setPersonInfo(name, age);
        setTaxInfo(aadhar, pan);
        this->empId = empId;
        this->salary = salary;
    }

    void displayEmployeeDetails() {
        displayPersonDetails();
        displayTaxInfo();
        cout << "Employee ID: " << empId << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1;
    e1.setEmployeeInfo("Aryan", 22, 123456789012, "ABCDE1234F", 101, 50000);
    e1.displayEmployeeDetails();

    return 0;
}
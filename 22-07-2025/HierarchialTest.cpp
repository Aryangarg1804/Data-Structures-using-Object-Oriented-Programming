#include<iostream>
#include<string>
using namespace std;

class Employee{
    int id;
    string name;

    public:
        Employee(int id, string name){
            this->id = id;
            this->name = name;
        }

        void show(){
            cout<<id<<endl;
            cout<<name<<endl;
        }
};

class Intern : public Employee{
    int duration;

    public : 
        Intern(int id,string name, int duration) : Employee(id, name){
            this->duration = duration;
        }

        void show(){
            Employee::show();
            cout<<duration<<endl;
        }
};

class Manager : public Employee{
    string department;

    public:
        Manager(int id,string name, string department) : Employee(id, name){
            this->department = department;
        }

        void show(){
            Employee::show();
            cout<<department<<endl;
        }
};

class Developer : public Employee{
    string techStack;

    public:
        Developer(int id, string name, string techStack) : Employee(id, name){
            this->techStack = techStack;
        }

        void show(){
            Employee::show();
            cout<<techStack<<endl;
        }
};

class SeniorDeveloper : public Developer {
    string stack;
    int experience;

    public:
        SeniorDeveloper(int id, string name,string techStack, string stack, int experience) : Developer(id, name,techStack){
            this->stack = stack;
            this->experience = experience;
        }

        void show(){
            Developer::show();
            cout<<stack<<endl;
            cout<<experience<<endl;
        }
};


class AssociateDeveloper : public Developer{
    string stack;

    public:
        AssociateDeveloper(int id, string name,string techStack, string stack) : Developer(id, name, techStack){
            this->stack = stack;
        }

        void show(){
            Developer::show();
            cout<<stack<<endl;
        }
};

int main() {
    // Employee emp(101,"Anhad");
    // emp.show();

    // Developer dev(102,"Aryan", "C++");
    // dev.show();

    Manager mgr(103,"Akshat", "Computer Science");
    mgr.show();

    // Intern intern( 104,"Ayush", 6);
    // intern.show();

    // SeniorDeveloper seniorDev(105,"Granth", "Java", "Full Stack", 10);
    // seniorDev.show();

    // AssociateDeveloper assocDev( 106,"Pratham", "Python", "Data Science");
    // assocDev.show();

    return 0;
}
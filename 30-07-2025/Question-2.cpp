#include<iostream>
using namespace std;

class Admin;  // Forward declaration

class Student {
private:
    string name;
    int rollNo;
    int marks[3];

public:
    Student(string n, int r, int m1, int m2, int m3) {
        name = n;
        rollNo = r;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    // Declare Admin as a friend class
    friend class Admin;
};

class Admin {
public:
    void evaluateStudent(Student& s) {
        int total = s.marks[0] + s.marks[1] + s.marks[2];
        double average = total / 3.0;

        cout << "Student Name: " << s.name << ", Roll No: " << s.rollNo << endl;
        cout << "Average Marks: " << average << endl;

        if (average >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main() {


    /*
    2. Friend Class – College Portal
        Problem Statement:
        Create two classes: Student and Admin
        Student has private data: name, rollNo, marks[3]
        Declare Admin as a friend class
        Admin calculates average and determines pass/fail based on access to Student's private data
    */
   
    Student s1("Aryan", 101, 55, 60, 70);
    Admin admin;

    admin.evaluateStudent(s1);

    return 0;
}

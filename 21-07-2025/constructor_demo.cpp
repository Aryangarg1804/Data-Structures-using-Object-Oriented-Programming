// #include<iostream>
// using namespace std;

// // constructureTest.cpp
// // default Constructor
// class A{
//     public:
//         A(){
//             cout<<"I am the default constructure";
//         }
// };

// int main(){

//     A a1;

//     return 0;
// }










#include<iostream>
using namespace std;

// parameterised Constructor
class Student{
    int id;
    string name;
    string department;
    public:
    Student(int id, string name, string department){
        this->id = id;
        this->name = name;
        this->department = department;
    }

    void show(){
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<department<<endl;
    }
};

int main(){

    Student s1(1001, "Aryan", "CSE");
    s1.show();



    return 0;
}
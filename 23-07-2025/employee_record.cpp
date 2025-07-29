#include<iostream>
using namespace std;

struct Employee{
    int id ;
    string name;
    string dept;

    void setData(int id, string name, string dept){
        this->id = id;
        this->name = name;
        this->dept = dept;
    }

    void getData(){
        cout<<id<<endl<<name<<endl<<dept<<endl;
    }
};

int main(){

    Employee e1;
    e1.setData(101,"abc", "HR");
    e1.getData();

    return 0;
}
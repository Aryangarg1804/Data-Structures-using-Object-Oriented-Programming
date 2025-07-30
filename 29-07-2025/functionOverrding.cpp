#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show() {
        cout << "I am a Base class" << endl;
    }
};

class Derived : public Base {
    public:
    void show() {
        cout << "I am a derived class" << endl;
    }
};


int main() {
    
   

    Base* ptr;
    Derived d1;
    ptr = &d1;
    ptr->show(); 

    return 0;
}
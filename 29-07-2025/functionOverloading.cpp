#include<iostream>
using namespace std;

class Addition {
    int a, b;
public:
    void add(int x, int y) {
        a = x;
        b = y;
        cout << "Sum: " << a + b << endl;
    }

    void add(int a, int b, int c) {
        cout << "Sum: " << a + b + c << endl;
    }


    void add(int a, float b) {
        cout << "Sum: " << a + b << endl;
    }   

    void add(float a, float b) {
        cout << "Sum: " << a + b << endl;
    }

};

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
    
    // Addition add;
    // add.add(5, 10);
    // add.add(5, 10, 15);
    // add.add(5, 10.5f);
    // add.add(5.5f, 10.5f);


    Base* ptr;
    Derived d1;
    ptr = &d1;
    ptr->show(); 

    return 0;
}
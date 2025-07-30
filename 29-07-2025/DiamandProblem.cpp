#include<iostream>
using namespace std;

class A{
    public:
    virtual void show() {
       cout<<"From class A"<<endl;
    }
};

class B: public A{
    public:
    void show() override{
       cout<<"From class B"<<endl;
    }
};  


class C: public A{
    public:
    void show() override{
       cout<<"From class C"<<endl;
    }
};

class D: public B, public C{
    public:
    void show() override{
       cout<<"From class D"<<endl;
    }
};

int main() {
    
    D d1;
    d1.B::show(); // Calls B's show
    d1.C::show(); // Calls C's show
    d1.D::show(); // Calls D's show

    return 0;
}
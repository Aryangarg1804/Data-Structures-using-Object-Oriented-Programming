#include<iostream>
using namespace std;

class A;
class B{
    public:
        void display(A& a1);
};

class A{
    int a = 110;
    public:
    friend void B::display(A& a1);
};

void B:: display(A& a3){ // this function never come between 
    cout<<a3.a<<endl;
}

int main(){

    A a2;
    B b2;
    b2.display(a2);

    return 0;
}
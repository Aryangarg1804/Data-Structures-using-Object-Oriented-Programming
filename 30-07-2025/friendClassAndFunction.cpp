#include<iostream>
using namespace std;

class A{
    private:
        int a;
    protected:
        int b;
    public:
        A(int a, int b){
            this->a = a;
            this->b = b;
        }

        friend void show(A& a1);
};

void show(A& a1){
    cout<<a1.a<<" "<<a1.b<<endl;
}

int main(){

    A a2(10,20);
    show(a2);


    return 0;
}
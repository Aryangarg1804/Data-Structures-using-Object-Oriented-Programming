#include<iostream>
using namespace std;

class FirstBaseClass{
    int a, b;
    public:
    FirstBaseClass(int a, int b){
        this->a = a;
        this->b = b;
    }

    void firstBaseClassInfo(){
        cout<<a<<" "<<b<<endl;
    }
};

class SecondBaseClass : public FirstBaseClass{
    int c, d;
    public:
    SecondBaseClass(int a, int b, int c, int d) : FirstBaseClass(a, b){
        this->c = c;
        this->d = d;
    }

    void secondBaseClassInfo(){
        firstBaseClassInfo();
        cout<<c<<" "<<d<<endl;
    }
};

class FirstDerivedClass : public SecondBaseClass{
    int i,k;
    public : 
    FirstDerivedClass(int a, int b, int c, int d, int i , int k) : SecondBaseClass(a, b, c, d){
        this->i = i;
        this->k = k;
    }

    void DisplayInfo(){
        secondBaseClassInfo();
        cout<<i<<" "<<k<<endl;
    }
};

int main(){

    FirstDerivedClass c(1 ,2,3,4, 5, 6);
    c.DisplayInfo();

    return 0;
}
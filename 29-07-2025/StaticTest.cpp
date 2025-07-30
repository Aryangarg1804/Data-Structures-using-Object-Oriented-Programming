#include<iostream>
using namespace std;

class A {
   static int count;
public:
    A(){
    count++;
    }

    static void show(){
        cout << "Count: " << count << endl;
    }
    
};

int A:: count = 0;

int main() {

    A a1;
    A::show();   
    A a2;
    A::show();
    A a3;
    A::show();


    return 0;
}
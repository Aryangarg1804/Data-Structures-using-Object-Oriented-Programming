#include<iostream>
using namespace std;
namespace Banking{
    void display(){
        cout<<"Banking System"<<endl;
    }
}

namespace Shopping{
    void display(){
        cout<<"Shopping cart Display"<<endl;
    }
}

int main(){

    Banking::display();
    Shopping::display();

    return 0;
}
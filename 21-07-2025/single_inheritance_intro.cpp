#include<iostream>
using namespace std;

// singleinheritancetest.cpp
class Account{
    int accountId;
    string accountHolder;
    public:
    Account(){
        cout<<"I am a parent class"<<endl;
    }

};

class SavingAccount : public Account{
    public:
    SavingAccount(){
        cout<<"I am the child class of Account"<<endl;
    }
};

// first parent class is created and then child class

int main(){

    SavingAccount sa;
    

    return 0;
}

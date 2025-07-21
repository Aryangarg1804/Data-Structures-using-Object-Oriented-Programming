#include<iostream>
using namespace std;


class Account{
    int accountId;
    string accountHolder;
    public:
    Account(int accountId, string accountHolder){
        this->accountId = accountId;
        this->accountHolder = accountHolder;
    }


    void show(){
        cout<<accountId<<endl;
        cout<<accountHolder<<endl;
    }

};

class SavingAccount : public Account{
    string accountType;

    public:
    SavingAccount(int accountId, string accountHolder, string accountType) : Account(accountId, accountHolder){
        this->accountType = accountType;
    }

    void show(){
        Account::show();
        cout<<accountType<<endl;
    }

};



int main(){

    SavingAccount sa(123, "Aryan", "Saving");
    sa.show();
    

    return 0;
}



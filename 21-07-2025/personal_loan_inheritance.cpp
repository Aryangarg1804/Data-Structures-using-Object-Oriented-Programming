

















#include<iostream>
#include<string>
using namespace std;

class Loan{
    int account_id;
    int loan_id;
    string name;
    int price;
    public : 
        Loan(int account_id, int loan_id, string name,int price){
            this->account_id = account_id;
            this->loan_id = loan_id;
            this->name = name;
            this->price = price;
        }

        void show(){
            cout<<account_id<<endl;
            cout<<loan_id<<endl;
            cout<<name<<endl;
            cout<<price<<endl;
        }
};


class PersonalLoan : protected Loan {

    string loanType;
    public:
    PersonalLoan(int account_id, int loan_id, string name,int price, string loanType) : Loan(account_id, loan_id, name, price){
        this->loanType = loanType;
    }

    void show(){
        Loan::show();
        cout<<loanType<<endl;
    }
};



int main(){

    PersonalLoan p1(1234, 12222, "Aryan", 100000, "personal");
    p1.show();

    return 0;
}
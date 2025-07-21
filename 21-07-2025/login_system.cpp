#include<iostream>
#include<string>
using namespace std;

bool Login(string UserName, string passWord){
    return UserName == "Aryan garg" && passWord == "Aryan123";
}

int main(){

    string user;
    string password;
    for(int i =0;i<3;i++){
        cout<<"Enter username : ";
        getline(cin,user);
        cout<<"Enter password : ";
        getline(cin, password);
        if(Login(user, password)){
            cout<<"Login Succesfully";
            break;
        } else{
            cout<<"Wrong details Try again : "<<endl;
            cout<<2-i<<" Attempt Left"<<endl;
        }
    }

    return 0;
}
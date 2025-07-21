#include<iostream>
using namespace std;
// Nested namespace

namespace App{
    namespace Banking {
        void greet(){
            cout<<"Welcome to the Banking App!" << endl;
        }
    }
}

int main(){

    App::Banking::greet();


    return 0;
}
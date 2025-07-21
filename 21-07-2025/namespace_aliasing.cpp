#include<iostream>
using namespace std;


// namespace Aliasing
namespace ReserverBankofIndia{
    void rules(){
        cout<<"Folow RBI Guidelines"<<endl;
    }
}

namespace RBI = ReserverBankofIndia; // alias

int main(){

    // Now use alias
    RBI::rules();

    return 0;
}
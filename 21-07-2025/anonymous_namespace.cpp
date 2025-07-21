#include<iostream>
using namespace std;
// Anonymous namespace (used to hide details in one file)
namespace {
    int secretCode = 1234; // only available in this file
    void displaySecret(){
        cout<<"Secret Code : "<<secretCode<<endl;
    }
}

int main(){

    displaySecret(); // Accessible
    // secretCode++ // Accessible

    return 0;
}
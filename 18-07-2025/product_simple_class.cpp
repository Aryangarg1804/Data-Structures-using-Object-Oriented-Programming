#include<iostream>
using namespace std;

class Product {
    int product = 100;

    public:
        void show(){
            cout<<product<<endl;
        }
};

int main(){

    Product p1;
    p1.show();

    return 0;
}

#include<iostream>
using namespace std;

class Product {
    int Product_id;
    string category;
    string name;
    int price;
    public:
        Product(int Product_id, string category, string name, int price){
            this->Product_id = Product_id;
            this->category = category;
            this->name = name;
            this->price = price;
        }

        void show(){
            cout<<Product_id<<endl;
            cout<<category<<endl;
            cout<<name<<endl;
            cout<<price<<endl;
        }

};


int main(){
    
    Product p1(1, "Food", "Burger", 100);
    p1.show();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Product {
    int productId;
    string Productname;
    float price;
public:
    Product(int id = 0, string name = "", float pr = 0.0f) {
        productId = id;
        Productname = name;
        price = pr;
    }

    void show() {
        cout << productId << endl;
        cout << Productname << endl;
        cout << price << endl;
    }
};

int main() {
    Product p1(101, "Laptop", 59999.99f);
    p1.show();
    return 0;
}
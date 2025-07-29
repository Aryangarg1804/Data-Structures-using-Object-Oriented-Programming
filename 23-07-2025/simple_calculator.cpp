#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double sub(double a, double b) {
        return a - b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero." << endl;
            return 0;
        }
        return a / b;
    }

    double multi(double a, double b) {
        return a * b;
    }
};

int main() {
    Calculator calc;
    double x, y;
    

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "Addition: " << calc.add(x, y) << endl;
    cout << "Subtraction: " << calc.sub(x, y) << endl;
    cout << "Multiplication: " << calc.multi(x, y) << endl;
    cout << "Division: " << calc.divide(x, y) << endl;

    return 0;
}
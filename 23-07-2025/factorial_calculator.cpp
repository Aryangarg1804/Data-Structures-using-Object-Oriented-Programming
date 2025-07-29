#include <iostream>
using namespace std;

class Factorial {
    int number;
public:
    void set(int num) {
        number = num;
    }

    int compute() {
        if (number < 0) {
            cout << "Factorial is not defined for negative numbers." << endl;
            return -1;
        }
        if (number > 12) return -2; 

        int result = 1;
        for (int i = 2; i <= number; ++i) {
            result *= i;
        }
        return result;
    }

    void show() {
        int result = compute();
        if (result == -1) return;
        if (result == -2) {
            cout << "Out of range (factorial exceeds 4-byte int)" << endl;
            return;
        }
        cout << "Factorial of " << number << " is: " << result << endl;
    }
};

int main() {
    Factorial f;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    f.set(num);
    f.show();

    return 0;
}

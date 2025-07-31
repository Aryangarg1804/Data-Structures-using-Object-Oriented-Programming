#include<iostream>
#include<cmath>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual double getArea() = 0;

    // Virtual destructor for proper cleanup
    virtual ~Shape() {}
};

// Derived class: Rectangle
class Rectangle : public Shape {
    double length, breadth;

public:
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    double getArea() override {
        return length * breadth;
    }
};

// Derived class: Circle
class Circle : public Shape {
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double getArea() override {
        return M_PI * radius * radius; // M_PI = 3.14159...
    }
};

int main() {

    /*
    3. Abstract Class – Shape Area Calculator 
    Problem Statement:
    Create an abstract class Shape with a pure virtual function getArea()
    Derive Rectangle and Circle classes and implement getArea()
    In main(), create base class pointers to derived objects and calculate area
    */

    // Base class pointer
    Shape* shape1;
    Shape* shape2;

    // Rectangle object
    Rectangle r(5, 3);
    shape1 = &r;
    cout << "Area of Rectangle: " << shape1->getArea() << endl;

    // Circle object
    Circle c(4);
    shape2 = &c;
    cout << "Area of Circle: " << shape2->getArea() << endl;

    return 0;
}

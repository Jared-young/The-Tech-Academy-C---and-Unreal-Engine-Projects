// Assignment 215.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

class Shape {
protected:
    std::string color;

public:
    Shape(const std::string& col) : color(col) {}

    virtual double getArea() const = 0; // Pure virtual function
};

class Rectangle : public Shape {
private:
    double height;
    double width;

public:
    Rectangle(const std::string& col, double h, double w)
        : Shape(col), height(h), width(w) {}

    double getArea() const override {
        return height * width;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(const std::string& col, double b, double h)
        : Shape(col), base(b), height(h) {}

    double getArea() const override {
        return 0.5 * base * height;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(const std::string& col, double r) : Shape(col), radius(r) {}

    double getArea() const override {
        return 3.14159 * std::pow(radius, 2);
    }
};

int main() {
    Rectangle rectangle("Blue", 4.0, 5.0);
    Triangle triangle("Red", 3.0, 6.0);
    Circle circle("Green", 2.5);

    std::cout << "Rectangle Area: " << rectangle.getArea() << std::endl;
    std::cout << "Triangle Area: " << triangle.getArea() << std::endl;
    std::cout << "Circle Area: " << circle.getArea() << std::endl;

    return 0;
}


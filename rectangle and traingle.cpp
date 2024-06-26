#include <iostream>
#include<cmath>
class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double area() const override {

        double s = (side1 + side2 + side3) / 2;
        return std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    Rectangle rectangle(4, 5);
    Triangle triangle(3, 4, 5);

    std::cout << "Rectangle:" << std::endl;
    std::cout << "Area: " << rectangle.area() << std::endl;
    std::cout << "Perimeter: " << rectangle.perimeter() << std::endl;

    std::cout << "\nTriangle:" << std::endl;
    std::cout << "Area: " << triangle.area() << std::endl;
    std::cout << "Perimeter: " << triangle.perimeter() << std::endl;

    return 0;
}

#include<iostream>
using namespace std;

// Encapsulation: Shape data is encapsulated in the ShapeData class
class ShapeData {
private:
    double area; // Private data member for storing area
public:
    void setArea(double a) { area = a; }  // Setter to set the area (Encapsulation)
    double getArea() const { return area; }  // Getter to access the area (Encapsulation)
};

// Abstraction: Base class defining the common interface for shapes
class Shape {
public:
    virtual void calculateArea() = 0;  // Pure virtual function to be implemented by derived classes
    virtual void displayArea() = 0;  // Pure virtual function to display the area
};

// Circle class uses composition for ShapeData (Encapsulation), does not inherit directly
class Circle : public Shape {
private:
    double radius;  // Private member for radius (Encapsulation)
    ShapeData shapeData;  // Composition: Circle has ShapeData for area

public:
    Circle(double r) : radius(r) {}  // Constructor to initialize radius
    void calculateArea() override {
        double area = 3.14 * radius * radius;
        shapeData.setArea(area);  // Set the calculated area using encapsulation
    }
    void displayArea() override {
        cout << "Area of Circle: " << shapeData.getArea() << endl;  // Display area using encapsulation
    }
};

// Rectangle class uses composition for ShapeData (Encapsulation), does not inherit directly
class Rectangle : public Shape {
private:
    double length, width;  // Private members for length and width (Encapsulation)
    ShapeData shapeData;  // Composition: Rectangle has ShapeData for area

public:
    Rectangle(double l, double w) : length(l), width(w) {}  // Constructor to initialize length and width
    void calculateArea() override {
        double area = length * width;
        shapeData.setArea(area);  // Set the calculated area using encapsulation
    }
    void displayArea() override {
        cout << "Area of Rectangle: " << shapeData.getArea() << endl;  // Display area using encapsulation
    }
};

// Polymorphism: Using base class pointer to refer to derived class objects
int main() {
    Shape* shape1 = new Circle(5);  // Circle object
    Shape* shape2 = new Rectangle(4, 6);  // Rectangle object

    shape1->calculateArea();  // Polymorphism: Calls Circle's calculateArea
    shape1->displayArea();  // Polymorphism: Calls Circle's displayArea

    shape2->calculateArea();  // Polymorphism: Calls Rectangle's calculateArea
    shape2->displayArea();  // Polymorphism: Calls Rectangle's displayArea

    delete shape1;
    delete shape2;

    return 0;
}
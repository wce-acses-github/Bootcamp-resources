#include<iostream>
using namespace std;

// Encapsulation: Shape data is encapsulated in the ShapeData class
class ShapeData {
//Write your code here for ENCAPSULATION


};

// Abstraction: Base class defining the common interface for shapes
class Shape {
//Write your code here for ABSTRACTION

};

//Inheritance: inherited from shape
class Circle : public Shape {
//Write your code here for INHERITANCE 1

};

class Rectangle : public Shape {
//Write your code here for INHERITANCE 2

};



// Polymorphism: Using base class pointer to refer to derived class objects

int main() {
    Shape* shape1 = new Circle(5);  // Circle object
    Shape* shape2 = new Rectangle(4, 6);  // Rectangle object

    shape1->calculateArea(); 
    shape1->displayArea();

    shape2->calculateArea();
    shape2->displayArea();

    delete shape1;
    delete shape2;

    return 0;
}
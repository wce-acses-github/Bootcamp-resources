#include <iostream>
using namespace std;

class Grandparent {
public:
    void message() {
        cout << "This is the grandparent class." << endl;
    }
};

class Parent : public Grandparent {
public:
    void show() {
        cout << "This is the parent class." << endl;
    }
};

class Child : public Parent {
public:
    void display() {
        cout << "This is the child class." << endl;
    }
};

int main() {
    Child childObj;

    // Call the grandparent class method
    childObj.message();

    // Call the parent class method
    childObj.show();

    // Call the child class method
    childObj.display();

    return 0;
}

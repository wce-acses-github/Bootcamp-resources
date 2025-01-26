#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "This is the parent class." << endl;
        // cout<<endl;
    }
};

class Child : public Parent {
public:
    void display() {
        cout << "This is the child class." << endl;
    }
};

int main() {
    Parent parentObj;
    Child childObj;

    // Call the parent class method
    parentObj.show();

    // Call the parent class method using the child object
    childObj.show();

    // Call the child class method
    childObj.display();

    return 0;
}

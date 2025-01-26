#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "This is the parent class." << endl;
    }
};

class Child1 : public Parent {
public:
    void display1() {
        cout << "This is child 1." << endl;
    }
};

class Child2 : public Parent {
public:
    void display2() {
        cout << "This is child 2." << endl;
    }
};

int main() {
    Child1 obj1;
    Child2 obj2;

    obj1.show();
    obj1.display1();

    obj2.show();
    obj2.display2();

    return 0;
}

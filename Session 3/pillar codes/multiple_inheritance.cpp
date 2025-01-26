#include <iostream>
using namespace std;

class Base1 {
public:
    void show1() {
        cout << "This is base class 1." << endl;
    }
};

class Base2 {
public:
    void show2() {
        cout << "This is base class 2." << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void display() {
        cout << "This is the derived class." << endl;
    }
};

int main() {
    Derived obj;
    obj.show1();
    obj.show2();
    obj.display();
    return 0;
}

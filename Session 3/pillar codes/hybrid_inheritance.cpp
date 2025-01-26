#include <iostream>
using namespace std;

// Base class
class A {
public:
    void show() {
        cout << "This is class A." << endl;
    }
};

// Derived class B inheriting A
class B : public A {
public:
    void displayB() {
        cout << "This is class B, derived from class A." << endl;
    }
};

// Derived class C inheriting A
class C : public A {
public:
    void displayC() {
        cout << "This is class C, derived from class A." << endl;
    }
};

// Derived class D inheriting B and C
class D : public B, public C {
public:
    void displayD() {
        cout << "This is class D, derived from classes B and C." << endl;
    }
};

int main() {
    D obj;

    obj.B::show();
    obj.C::show();
    obj.displayB();
    obj.displayC();
    obj.displayD();

    return 0;
}

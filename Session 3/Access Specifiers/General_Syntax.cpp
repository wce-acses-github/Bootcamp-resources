#include <iostream>
using namespace std;

class Cpp_Bootcamp {
public:
    int session_1;

private:
    int session_2 ;

protected:
    int session_3;

public:
    // Constructor to initialize private and protected members
    Cpp_Bootcamp() {
        session_2= 0;
        session_3 = 0;
    }

    // Public method to set private and protected members
    void setsession_value(int value) {
        session_2 = value;
    }

    void setsession_val(int value) {
        session_3 = value;
    }

    // Public method to display all member variables
    void display() {
        cout << "Public Variable: " << session_1<< endl;
        cout << "Private Variable: " << session_2 << endl;
        cout << "Protected Variable: " << session_3 << endl;
    }
};

int main() {
    Cpp_Bootcamp obj;
    obj.session_1 = 42;          // Accessing public member
    obj.setsession_value(10);       // Accessing private member via public method
    obj.setsession_val(20);     // Accessing protected member via public method

    obj.display();               // Displaying all member values

    return 0;
}
#include <iostream>
using namespace std;

class Encapsulation {
private:
    int val;

public:
    // Setter to modify val
    void modifyValue(int count) {
        val = count;
        // cout<<"Val is modified"<<endl;
        // cout<<endl;
    }

    // Getter to access val
    int retrieveCount() {
        // cout<<"Print modified val"<<endl;
        return val;
    }
};

int main() {
    Encapsulation obj;
    // Set count using the setter
    obj.modifyValue(42);
    // Access count using the getter
    cout << "The count is: " << obj.retrieveCount() << endl;
    return 0;
}

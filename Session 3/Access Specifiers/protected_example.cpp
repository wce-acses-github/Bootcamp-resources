#include<iostream>
using namespace std;
class Cpp_Bootcamp{
protected:
int x; // protected data member

public:
Cpp_Bootcamp(int val) {
x= val;
 }
};
class Day_1 : public Cpp_Bootcamp {
public:
Day_1(int val) : Cpp_Bootcamp(val) {}

void showData() {
cout << "Protected data from base class: " << x << endl;
 }
};
int main() {
Day_1 obj(10);
obj. showData(); // Derived class access protected data from Base class

return 0;
}
#include <iostream>
using namespace std;

void swapByReference(int &a, int &b) {
    int temp = a; 
     a = b;
     b = temp;
}

int main() {
    int x,y;
    cin >> x >> y;
    cout << "Before swap: x=" << x << " y=" << y << "\n";
    swapByReference(x,y);
    cout << "After swap: x=" << x << " y=" << y << endl;
    return 0;
}

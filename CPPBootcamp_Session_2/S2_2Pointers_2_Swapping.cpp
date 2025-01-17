#include <iostream>
using namespace std;

void swap1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


int main() {
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    swap1(x, y); 
    cout << "After swap1: x = " << x << ", y = " << y << endl;

    swap2(&x, &y); 
    cout << "After swap2: x = " << x << ", y = " << y << endl;

    return 0;
}

#include <iostream>
using namespace std;

int factorial(int n)
{
    //base case
    if(n == 0)
        return 1;
    return n * factorial(n-1);
}

int main() {
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    int *p = NULL;
    cout << *p << endl;

    return 0;
}

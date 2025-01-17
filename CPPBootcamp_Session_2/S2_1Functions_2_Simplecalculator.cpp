#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b != 0)
        return (double)a / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int main() {
    int choice, x, y;

    do {
        cout << "Calculator Menu:\n";
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> x >> y;
        }

        if (choice == 1) {
            cout << "Result: " << add(x, y) << endl;
        } else if (choice == 2) {
            cout << "Result: " << subtract(x, y) << endl;
        } else if (choice == 3) {
            cout << "Result: " << multiply(x, y) << endl;
        } else if (choice == 4) {
            cout << "Result: " << divide(x, y) << endl;
        } else if (choice == 5) {
            cout << "Exiting the program. Goodbye!" << endl;
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }

        cout << endl;  
    } while (choice != 5);

    return 0;
}

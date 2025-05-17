#include <iostream>
using namespace std;

void showMenu() {
    cout << "\n====== Super Efficient Calculator ======\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "0. Exit\n";
    cout << "Choose an operation: ";
}

int main() {
    int choice;
    double a, b;

    while (true) {
        showMenu();
        cin >> choice;

        if (choice == 0) {
            cout << "Goodbye! Thank you for using Super Efficient Calculator!" << endl;
            break;
        }

        cout << "Enter two numbers to perform the operation: ";
        cin >> a >> b;

        switch (choice) {
            case 1:
                cout << "Result: " << a + b << endl;
                break;
            case 2:
                cout << "Result: " << a - b << endl;
                break;
            case 3:
                cout << "Result: " << a * b << endl;
                break;
            case 4:
                if (b != 0)
                    cout << "Result: " << a / b << endl;
                else
                    cout << "Error: Cannot divide by zero!" << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    }

    return 0;
}

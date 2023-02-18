#include <iostream>

using namespace std;

int main() {
    cout << "Calculator (C5)" << endl;

    double a, b;
    char op;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter b: ";
    cin >> b;

    switch (op) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
            return 101;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cout << "Choose the Operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the Number 1: ";
    cin >> a;

    cout << "Enter the Number 2: ";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << "a + b: " << a + b;
        break;
    case '-':
        cout << "a - b: " << a - b;
        break;
    case '/':
        if (b != 0)
            cout << "a / b: " << a / b;
        else
            cout << "Error: Division by zero is not allowed.";
        break;
    case '*':
        cout << "a * b: " << a * b;
        break;
    default:
        cout << "Invalid Operator";
        break;
    }

    return 0;
}

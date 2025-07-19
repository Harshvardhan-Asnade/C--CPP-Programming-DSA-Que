#include<iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter your number: ";
    cin >> a;

    if (a > 0) {
        cout << "Positive Number";
    }
    else if (a < 0) {
        cout << "Negative";
    }
    else {
        cout << "Zero";
    }

    return 0;
}

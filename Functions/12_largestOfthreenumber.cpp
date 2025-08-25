#include <iostream>
using namespace std;

int largestofthree(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    }
    else if (b >= c) {
        return b;
    }
    else {
        return c;
    }
}

int main() {
    int a, b, c;
    cout << "Enter the 3 numbers: ";
    cin >> a >> b >> c;
    cout << "Largest number is: " << largestofthree(a, b, c);
    return 0;
}
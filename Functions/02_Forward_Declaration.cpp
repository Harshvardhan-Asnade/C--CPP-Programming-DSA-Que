#include <iostream>
using namespace std;

int Sum(int a, int b); // Forward declaration with correct parameters

int main() {
    int a, b;
    cin >> a >> b;
    int Sum1 = Sum(a, b);
    cout << "the sum of a and b is " << Sum1;
    return 0;
}

int Sum(int a, int b) {
    return a + b;
}
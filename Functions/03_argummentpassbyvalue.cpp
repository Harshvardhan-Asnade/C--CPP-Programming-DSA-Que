#include <iostream>
using namespace std;

int Sum(int a, int b) {
    int sum = a + b;
    return sum;
}

int Diff(int a, int b) {   
    int diff = a - b;
    return diff;    
}

int main() {
    int a, b;
    cin >> a >> b;
    int sum = Sum(a, b);   
    int difference = Diff(a, b);   
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;
    cout << "The difference of " << a << " and " << b << " is " << difference << endl;
    return 0;
}
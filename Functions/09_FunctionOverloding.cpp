#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

string add(string a, string b) {
    return a + b;
}

int main() {
    cout << add(5, 3) << endl;
    cout << add(3.14, 2.86) << endl;
    cout << add(1, 2, 3) << endl;
    cout << add("Hello ", "World") << endl;
    
    return 0;
}

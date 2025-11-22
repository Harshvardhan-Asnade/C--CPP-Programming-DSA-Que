#include <iostream>
using namespace std;

void PassbyReference(int *ptr) {
    *ptr = 30;
    cout << *ptr << endl;
}

int main() {
    int a = 20;
    PassbyReference(&a);
    cout << a;
    return 0;
}
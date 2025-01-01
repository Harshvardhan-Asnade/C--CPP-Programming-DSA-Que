#include <iostream>
using namespace std;
int main()
{
    int a = 16;
    int b = 3;
    int q = a / b;
    int r = a - (b * q);
    // int r = a % b;
    cout << r;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter The Vaule of A : ";
    cin >> a;
    cout << "Enter The Vaule of B : ";
    cin >> b;
    cout << "Enter The Vaule of C : ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << a << " " << "A is MAX";
    }
    if (c > b && c > a)
    {
        cout << c << " " << "C is MAX";
    }
    if (b > a && b > c)
    {
        cout << b << " " << "B is MAX ";
    }
}

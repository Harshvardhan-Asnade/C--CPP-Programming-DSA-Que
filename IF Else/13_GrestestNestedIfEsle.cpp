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
    if (a > b)
    {
        if (a > c)
        {
            cout << a << "is greatest";
        }
        else
        {
            cout << c << "is greatest";
        }
    }
    else
    {
        if (b > a)
        {
            cout << b << "is greatest";
        }
        else
        {
            cout << c << "is greatest";
        }
    }
}
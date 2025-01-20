#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter A Number of Day : ";
    cin >> x;
    switch ((x <= 7 && x % 2 != 0) || (x >= 8 && x % 2 == 0))
    {
    case 1:
        cout << "31 Days"; break;
    }
    switch (x == 4 || x == 6 || x == 9 || x == 11)
    {
    case 1:
        cout << "30 Days";
    }
    switch (x)
    {
    case 2:
        cout << "28 Days ";
        break;

    default:
        cout << "Invaild Months";
        break;
    }
}
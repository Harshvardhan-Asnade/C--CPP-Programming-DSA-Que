#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter A Number of Day : ";
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Tuseday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thursday";
        break;
    case 6:
        cout << "firday";
        break;
    case 7:
        cout << "Satuday";
        break;

    default:
        cout << "invaild no";
    }
}
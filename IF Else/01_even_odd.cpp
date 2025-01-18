#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << " Enter A Number : 2";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "Number is Even ";
    }
    if (a % 2 != 0)
    {
        cout << "Number is Odd ";
    }
//Or
    // else
    // {
    //     cout << "Number is Odd ";
    // }

    return 0;
}
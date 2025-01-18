#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << " Enter A Number : ";
    cin >> a;
    if (a % 5 == 0)
    {
        cout << a <<" "<<"Number is Divisible By 5 ";
    }
    if (a % 5 != 0)
    {
       cout << a <<" "<< "Number is Not Divisible By 5 ";
    }
//Or
    // else
    // {
    //    cout << "Number is Not Divisible By 5 ";
    // }

    return 0;
}
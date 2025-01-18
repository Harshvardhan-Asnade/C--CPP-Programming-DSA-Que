#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    if (n % 3 == 0 && n % 5 == 0)
    {
        cout << " The Number is Divisble by both 3 and 5";
    }

    else
    {
        cout << " The Number is Not Divisble by both 3 and 5";
    }
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    if ((n % 5 == 0 || n % 3 == 0) && n % 15 == 0)
    {
        cout << " The Number is Divisble by both 3 and 5 but not 15";
    }
    else
    {
        cout << " Not Matching Condition";
    }
}
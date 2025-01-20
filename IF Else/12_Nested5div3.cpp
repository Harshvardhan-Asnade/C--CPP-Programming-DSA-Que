#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    if (n % 3 == 0 )
    {
        if (n % 5 == 0)
        {
            cout << " The Number is Divisble by both 3 and 5";
        }

        else   
        {
            cout << " Not Matching Condition";
        }
    }
    else
    {
        cout << " Not Matching Condition";
    }
}
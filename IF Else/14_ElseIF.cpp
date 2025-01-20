#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Mark : ";
    int n;
    cin >> n;
    if (n >= 91) 
    {
        cout << "Excellent";
    }
    else if (n >= 81)
    {
        cout << "Very Good";
    }
    else if (n >= 71)
    {
        cout << "Good";
    }
    else if (n >= 41)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }
}
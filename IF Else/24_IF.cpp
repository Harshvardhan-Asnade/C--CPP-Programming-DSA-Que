#include <iostream>

int main()
{
    int marks;
    cout << "Enter your marks ";
    cin >> marks;
    if (marks < 33)
    {
        cout << "fails";
    }
    else
    {
        cout << "pass";
    }
    return 0;
}
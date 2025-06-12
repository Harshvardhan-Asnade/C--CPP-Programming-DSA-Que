#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cout << "Enter MARKS OF A: ";
    cin >> A;
    cout << "Enter MARKS OF B: ";
    cin >> B;
    cout << "Enter MARKS OF C: ";
    cin >> C;

    if (A < B && A < C)
    {
        cout << "A GETS THE LEAST MARKS";
    }
    else if (B < A && B < C)
    {
        cout << "B GETS THE LEAST MARKS";
    }
    else
    {
        cout << "C GETS THE LEAST MARKS";
    }
}
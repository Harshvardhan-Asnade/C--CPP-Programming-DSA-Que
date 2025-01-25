#include <iostream>
using namespace std;
int main()
{ //  print ap 1,3,5,7,9,11 upto n
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int i;
    for (i = 1; i < n; i++)
    {        if (i % 2 != 0)
            cout << i << endl;
    }
}
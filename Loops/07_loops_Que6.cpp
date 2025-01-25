#include <iostream>
using namespace std;
int main()
{ //  print ap 1,3,5,7,9,11 upto n
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int i, a = 1;
    for (i = 1; i <=n; i++)
    {
        cout << a << endl;
        a = a * 2;
    }
}
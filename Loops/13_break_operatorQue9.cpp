#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    bool flag = true;

    if (n == 1)
    {
        cout << n << " is neither a prime nor a composite number" << endl;
        return 0;
    }

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }

    if (flag == true)
    {
        cout << n << " is a prime number" << endl;
    }
    else
    {
        cout << n << " is not a prime number" << endl;
    }

    return 0;
}

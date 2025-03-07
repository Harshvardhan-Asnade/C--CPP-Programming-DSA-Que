#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int x = 0;
    int num = number; // Store original number

    while (number > 0)
    {
        x = x * 10 + (number % 10); // Build reverse number
        number /= 10;
    }

    cout << "The sum of number and its reverse is " << num + x << endl;
    return 0;
}

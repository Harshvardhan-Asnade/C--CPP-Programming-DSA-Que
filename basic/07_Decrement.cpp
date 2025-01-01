#include <iostream>
using namespace std;
int main()
{
    int x = 7;
    // Predecrement
    cout << "Preincrement" << "\n";
    cout << x << endl;
    cout << x-- << endl;
    cout << x << endl
         << "\n";

    // postdecrement
    x = 7;
    cout << "Postincrement" << "\n";
    cout << x << endl;
    cout << --x << endl;
    cout << x << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int x = 7;
    // Preincrement
    cout << "Preincrement" << "\n";
    cout << x << endl;
    cout << x++ << endl;
    cout << x << endl
         << "\n";

    // postincrement
    x = 7;
    cout << "Postincrement" << "\n";
    cout << x << endl;
    cout << ++x << endl;
    cout << x << endl;
}
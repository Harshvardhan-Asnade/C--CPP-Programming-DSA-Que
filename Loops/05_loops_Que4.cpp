#include <iostream>
using namespace std;
int main()
{ //  print 1 to 100 EVEN NUMBER
    int i;
    for (i = 0; i < 190;)
    {
        // i = i + 19;
        // cout << i << endl;
        i++;
        if (i % 19 == 0)
            cout<< i << endl;
    }
}
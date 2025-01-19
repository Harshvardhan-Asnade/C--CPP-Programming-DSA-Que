#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character :";
    cin >> ch;
    int a = (int)ch;
    if (a >= 97 && a <= 122)||(a >= 65 && a <= 90){
            cout<< "The Characte is alphabet";
        }
    else
    {
        cout << "The Character is not an aplphabet";
    }
}
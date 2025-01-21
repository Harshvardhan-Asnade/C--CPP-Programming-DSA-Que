#include <iostream>
using namespace std;
int main()
{ // Area of circle vs Perimeter
    float r;
    cout << "Enter Radius : ";
    cin >> r;
    float Area = 3.14 * r * r;
    float Perimeter = 3.14 * 2 * r;
    cout << "Area of circle : " << Area<<endl;
    cout << "Perimeter of circle : " << Perimeter<<endl;
    if (Area > Perimeter)
        cout << "Area of Circle is Largest";
    else
    {
        cout << "Perimeter of Circle is Largest";
    }
}

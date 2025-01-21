#include <iostream>
using namespace std;
int main()
{ // Area of circle vs Perimeter
    float R;
    cout << "Enter Radius : ";
    cin >> R;
    float Area = 3.14 * R * R;
    float Perimeter = 3.14 * 2 * R;
    cout << "Area of circle : " << Area<<endl;
    cout << "Perimeter of circle : " << Perimeter<<endl;
    if (Area > Perimeter)
        cout << "Area of Circle is Largest";
    else
    {
        cout << "Perimeter of Circle is Largest";
    }
}

#include <iostream>
using namespace std;
int main()
{
    int a, b, rectangle, square;
     //input
    cout << "Enter The Value of a : ";
    cin >> a;

    cout << "Enter The Value of b : ";
    cin >> b;

    rectangle = a * b;
    float circle = 3.14 * a * a;
    square = a * a;
    cout << "Area of square :" << square << "\n ";
    cout << "Area of rectangle :" << rectangle << "\n";
    cout << "Area of circle: " << circle;
}
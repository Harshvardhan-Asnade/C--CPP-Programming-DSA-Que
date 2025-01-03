#include <iostream>
using namespace std;
int main()
{
    int a = 2, b = 3, pie = 3.14, rectangle, square;
    // area
    rectangle = a * b;
    float circle = pie * a * a;
    square = a * a;
    cout <<"Area of square :" << square << "\n ";
    cout<<"Area of rectangle :" << rectangle << "\n";
    cout <<"Area of circle: " << circle;
}
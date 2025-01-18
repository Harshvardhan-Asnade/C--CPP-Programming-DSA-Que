#include <iostream>
using namespace std;
int main()
{
    int Cost;
    cout << " Enter The Cost Price : ";
    cin >> Cost;
    int Sell;
    cout << " Enter The Sell Price : ";
    cin >> Sell;
    if (Sell > Cost)
    {
        cout << "Profit = " << Sell - Cost;
    }

    if (Cost > Sell)
    {
        cout << "Loss = " << -(Sell - Cost);
    } 
    if (Sell == Cost)
    {
        cout << "No Profit No Loss";
    };
}
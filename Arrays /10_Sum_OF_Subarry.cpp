#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            int CurrSum = 0;

            for (int i = start; i <= end; i++) {
                
                CurrSum += arr[i];
            }

            cout << "=> Sum = " << CurrSum << endl;
        }
        cout << endl;
    }

    return 0;
}
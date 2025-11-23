#include <iostream>
using namespace std;

int BinarySearch(int size, int arr[], int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            cout << "Key Found at Index: " << mid << endl;
            return mid;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Key Not Found" << endl;
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    BinarySearch(size, arr, 4);
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    int copyarr[size];
    for(int i =0;i<=size-1;i++){
        int j = size-i-1;
        copyarr[i]=arr[j];
    }
    for(int i =0;i<=size-1;i++){
        arr[i]=copyarr[i];
    }
    for(int i =0;i<=size-1;i++){
        cout<<arr[i]<<endl;
    }
    return 0;


}
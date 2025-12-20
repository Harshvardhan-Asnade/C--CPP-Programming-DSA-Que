#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,2,3,4,5};
    int n =sizeof(arr)/sizeof(int);
    for(int start = 0 ; start <= n-1; start++){
    for(int end = start; end <= n-1; end++){
        for(int i = start; i <= n-1; i++) 
            cout << arr[i]; cout<<",";
    }
    cout << endl; 
}
}
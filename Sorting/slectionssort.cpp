#include<iostream>
using namespace std;
int main(){
    int arr[] ={13,46,24,52,220,9};
    int n=sizeof(arr)/sizeof(int);
    for(int i = 0 ;i<n;i++){
         int mini=i;
        for(int j =i;j<n;j++){
        if(arr[j]<arr[mini]){
            mini=j;
        }

        }
        swap(arr[i],arr[mini]);  
    }  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,";
    }
}
#include <iostream>
using namespace std;
int LinearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
        cout<<"Index : "<<i<<endl; ;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,22,33,99,50};
    int size=sizeof(arr)/sizeof(int);
    int n;
    cout<<"VAULE TO BE SEARCHEDS : " ;
    cin>>n;
    LinearSearch(arr,size,n);
    return 0;
}
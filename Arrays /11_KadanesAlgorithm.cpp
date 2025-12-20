#include<iostream>
#include<climits>
using namespace std ;
int main(){
      int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int MAXSUM =INT_MIN;
    int CurrSum=0;
    for(int i=0;i<n;i++){
        CurrSum = CurrSum+arr[i];
        MAXSUM=max(CurrSum,MAXSUM);
        if(CurrSum<0){
            CurrSum=0;
        }
    } cout<<MAXSUM;
}
#include<iostream>
#include<climits>
#include <algorithm>
using namespace std ;
int main(){
    int arr[]= {7,6,4,3,1};
    int size = sizeof(arr)/sizeof(int);
  
    int sell;
    int BestBuy=INT_MAX;int profit ;
    int Bestprofit =0;
    for(int i = 0; i < size; i++){


        BestBuy=min(sell,BestBuy);
        profit=sell-BestBuy;
        Bestprofit=max(profit,Bestprofit);
      
    
    } 
      cout<<Bestprofit;
}
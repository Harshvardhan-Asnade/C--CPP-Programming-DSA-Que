#include <iostream>
using namespace std;
int SumOFdigits(int num){
    int sum=0;
    while(num!=0){
        int digit=num%10;
        sum+=digit;
        num/=10;
    }
    return sum;
}   
int main(){
    int num;
    cin>>num;
    int sum=SumOFdigits(num);
    cout<<sum;
}

#include <iostream>
#include<cmath>
using namespace std;
int sum(int a,int b){
  int ans = pow(a,2)+pow(b,2)+2*a*b ;
  return ans ;
}
int main() 
{
    int a,b;
    cin>>a;cin>>b;
    int ans =sum(a,b);
    cout<<ans;
}
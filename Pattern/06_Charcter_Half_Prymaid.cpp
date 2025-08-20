#include <iostream>
using namespace std;
int main(){
    char ch ='A';
    int n;cout<<"Enter the Value of n : ";cin>>n;
    for(int i = 1;i<=n;i++){
     for(int j=1;j<=i;j++)
        cout<<ch++;
        cout<<endl;
    }
    
}
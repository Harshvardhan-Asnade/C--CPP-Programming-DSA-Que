#include <iostream>
using namespace std;
int main(){
int arrays[10]={1,2,3};
int n =sizeof(arrays)/sizeof(int);
 for(int i = 0;i<=n-1;i++){
    cout<<arrays[i]<<endl;
 }  
return 0;
}
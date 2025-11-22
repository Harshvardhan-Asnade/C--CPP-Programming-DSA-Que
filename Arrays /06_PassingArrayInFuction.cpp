#include <iostream>
using namespace std;
void funct(int arr[]){
    arr[0]=1000;
}
int main(){
int arr[]={1,2,3,4,5};
funct(arr);
cout<<arr[0];
return 0;

}
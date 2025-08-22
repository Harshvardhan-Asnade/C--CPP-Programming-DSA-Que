#include <iostream>
using namespace std;
bool isEven(int a){
    if(a%2 == 0){
        return true;
    }
    else{
        return false;
    }       
}
int main(){
    int a ;
    cin>>a;
    int Even = isEven(a);
    if(Even==1){
        cout<<"the number is even";
    
    } 
    else{
        cout<<"the number is odd";
    }
    
}
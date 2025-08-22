# include <iostream>
using namespace std;
int Factorial(int a){
    int fact = 1;
    for(int i = 1; i<=a; i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int a;
    cin>>a;
    int fact = Factorial(a);
    cout<<fact;
}
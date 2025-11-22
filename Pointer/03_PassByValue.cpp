#include <iostream>
using namespace std;

void Passbyvalue(int a) {
    a = 23;
   cout<<a<<endl;
}

int main() {
    int a = 20;
    Passbyvalue(a);
    cout<<a<<endl;
    return 0;

}
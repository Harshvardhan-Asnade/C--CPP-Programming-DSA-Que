#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char ch[] = {'f','b','c','a','d','e'};

    sort(ch, ch + 6,greater<char>());    

    for(int i = 0; i < 6; i++) {
        cout << ch[i] << " , ";
    }

    return 0;
}
#include <iostream>
using namespace std;

char Character(char ch) {
    if (ch == 'z') {
        return 'a';
    } else {
        char newch = char(int(ch) + 1);
        return newch;
    }
}

int main() {
    char ch;
    cout << "Enter the Character =";
    cin >> ch;
    cout << Character(ch);
    return 0;
}
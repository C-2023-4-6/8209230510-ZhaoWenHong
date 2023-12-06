#include <iostream>
using namespace std;

int num(char x) {
    x = toupper(x);
    if ('A' <= x && x <= 'F')
        return x - 'A' + 10;
    else
        return x - '0';
}
int parseHex(const char* const hexString) {
    int t = 0;
    for (int i = 0; i < strlen(hexString); i++) {
        t = t * 16 + num(hexString[i]);
    }
    return t;
}
int main()
{
    char s[100] = "";
    cin >> s;
    cout<<parseHex(s);
}


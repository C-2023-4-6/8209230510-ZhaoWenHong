#include <iostream>
using namespace std;

int indexof(const char* s1, const char* s2) {
    int i = 0, len, p = 0;  
    len = strlen(s1);
    for (i = 0; i < len; i++) {
        if (s1[p] == s2[i]) {
            for (p = 0; p < len; p++) {
                if (s1[p] != s2[i + p]) {
                    break;
                }
            }
            if (p == len )
                return i;
            else
                p = 0;
        }
    }
    return -1;
}
int main()
{
    char s1[100]="", s2[100] = "";
    cin >> s1 ;
    cin >> s2;
    cout<<indexof(s1, s2);
    return 0;
}


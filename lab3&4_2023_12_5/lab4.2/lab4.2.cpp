#include<iostream>
#include<string>
using namespace std;

int main() {
    int i, j, * pi, * pj;     //�˴���*��ʾ����ָ����������Ǽ�������
    pi = &i;
    pj = &j;
    i = 5; 
    j = 7;
    cout << i << '\t' << j << '\t' << pi << '\t' << pj << endl;;
    cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j;
	return 0;
}
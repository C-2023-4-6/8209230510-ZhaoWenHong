#include <iostream>
using namespace std;

void bubble(int *a, int len) {
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len-1-i; j++) {
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
}
int main()
{
	int n;
	cin >> n;
	int* p = new int[n] {0};
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	bubble(p,n);
	for (int i = 0; i < n; i++) {
		cout << p[i] << ' ';
	}
	delete[] p;
}

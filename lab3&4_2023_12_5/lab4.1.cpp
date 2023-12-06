#include<iostream>
#include<string>
using namespace std;

bool not_in(int x, int a[], int s); //not in
double arr(double list[]);// 冒泡排序
void merge(const int x[], const int y[], int n, int z[]);//合并数组
int indexOf(const string s1, const string s2);//找子串
void count(string s, int counts[]);//数字母

void lab41_1() {

	int t = 0, a[10] = { 0 },k=0,num=0;
	int s[10] = { 0 };
	cout << "enter the number:  ";
	for (int i = 0; i < 10; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < size(s); i++) {
		if (not_in(s[i], a, k)) {
			a[k] = s[i];
			k++;
		}
	}
	cout << "The distinct numbers are: ";
	for (int i = 0; i < k; i++) {
		cout << a[i] << ' ';
	}
}
static bool not_in(int x, int a[],int s) {
	bool flag = true;
	for (int i = 0; i < s; i++) {
		if (a[i]==x) {
			flag = false;
			break;
		}
	}
	return flag;
}

void lab41_2() {
	double a[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	arr(a);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
}
double arr(double list[10]) {
	bool changed = true;
	int listSize = 10;
	while (changed) {
			changed = false;
			for (int j = 0; j < listSize - 1; j++) {
				if (list[j] > list[j + 1])
				{
					swap(list[j], list[j + 1]);
					changed = true;
				}
			}
	}
	return 0;
}

void lab41_3() {
	bool a[100] = { false};
	for (int i = 1; i <= 100; i++) {
		for (int j = 0; j < 100; j += i) {
			a[j] = not a[j];
		}
	}
	for (int i = 0; i < 100; i++) {
		if (a[i])
			cout << i << ' ';
	}
}

void lab41_4() {
	int n;
	int a[80] = {}, b[80] = {}, c[160] = {0};
	cout << "输入数组长度" << endl;
	cin >> n;
	cout << "输入第一个数组";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "输入第二个数组";
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	merge(a, b, n, c);
	for (int i = 0; i < n*2; i++) {
		cout << c[i] << ' ';
	}
}
void merge(const int x[], const int y[], int n, int z[]) {
	int p_a = 0, p_b = 0,p=0;
	while(p_a<n&&p_b<n) {
		if (x[p_a] <= y[p_b]) {
			z[p] = x[p_a];
			p_a++;
		}
		else {
			z[p] = y[p_b];
			p_b++;
		}
		p++;
	}
	if (p_a < n) {
		for (int i = p_a; i < n; i++) {
			z[p] = x[i];
			p++;
		}
	}
	else {
		for (int i = p_b; i < n; i++) {
			z[p] = y[i];
			p++;
		}
	}
}

void lab41_5() {
	string s1, s2;
	cout << "输入第两个字符串：";
	getline(cin,s1);
	getline(cin, s2);
	cout << indexOf(s1, s2);
}
int indexOf(const string s1, const string s2) {
	int n,p=0;
	int i;
	for (i = 0; i < size(s2); i++) {
		if (s1[p] == s2[i]) {
			if (s2.substr(i, size(s1)) == s1) {
				return i;
			}
		}
	}
	return -1;
}

void lab41_6(){
	int counts[26] = { 0 };
	string s;
	getline(cin, s);
	count(s, counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i]!=0)
			cout << char(i + 'a') << "：" << int(counts[i]) << endl;
	}
}
void count(string s,int counts[]) {
	for (int i = 0; i < size(s); i++) {
		if ('a' <= s[i] && s[i] <= 'z') {
			counts[s[i] - 'a']++;
		}
		else  if ('A' <= s[i] && s[i] <= 'Z') {
			counts[s[i] - 'A']++;
		}
	}
}

int main() {
	int n;
	string s;
	cin >> n;
	void(*p[])() = {  lab41_1,lab41_2 ,lab41_3,lab41_4,lab41_5,lab41_6};
	getline(cin, s);
	p[n - 1]();
	return 0;
}
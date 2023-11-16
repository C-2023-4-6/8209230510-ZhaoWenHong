#include<iostream>
#include<string>
#include"stdio.h"
using namespace std;

int lab2_1() {
	char ch;
	cin >> ch;
	if ('a' <=ch && ch<='z') {
		cout << char(ch - 'a' + 'A') << endl;
	}
	else cout << int(ch) + 1 << endl;
	return 0;
}

int lab2_2() {
	double x,y;
	cin >> x;
	if (0 < x && x < 1)
		y = 3 - 2 * x;
	else
		if (1 <= x && x < 5)
			y = 2.0 / 4 / x + 1;
		else if (5 <= x && x < 10)
			y = x * x;
	if (0<x&&x<10)
		cout << y << endl;
	return 0;
}

int lab2_3() {
	double x, y, z;
	cin >> x >> y >> z;
	//double m = max(x, y, z);
	if (max(x,max(y,z)) < x + y + z - max(x,max(y,z))) {
		cout << "周长是：" << x + y + z << endl;
		if (x == y || x == z || y == z)
			cout << "是等腰三角形" << endl;
	}
	else cout << "不是三角形" << endl;
	return 0;
}

int lab2_4() {
	double x, y;
	char s;
	cin >> x >> s >> y;
	switch (s)
	{
	case '+':cout << x + y << endl; break;
	case '-':cout << x - y << endl; break;
	case '*':cout << x * y << endl; break;
	case '/':cout << x / y << endl; break;
	case '%':cout << int(x) % int(y) << endl; break;
	default: {cout << "非法字符" << endl; break; }
	}
	return 0;
}

int lab2_5() {
	char s1;
	bool flag = true;
	int a=0, b=0, c=0, d=0;
	cin >> s1;
	while (s1!='\n') {
		if ('A' <= s1 && s1 <= 'Z' || 'a' <= s1 && s1 <= 'z')
			a++;
		else
			if (' ' == s1)
				b++;
			else
				if ('0' <= s1 && s1 <= '9')
					c++;
				else d++;
		s1 = getchar();
	}
	cout << " 字母共有：" << a << "个" << endl;
	cout << " 空格共有：" << b << "个" << endl;
	cout << " 数字共有：" << c << "个" << endl;
	cout << " 其他字符共有：" << d << "个" << endl;
	return 0;
}

int lab2_6() {
	int x, y,a,b,t;
	cin >> x >> y;
	a = max(x, y);
	b = min(x, y);
	t = a % b;
	int i = a;
	while (true) {
		if (i % a == 0 && i % b == 0)
			break;
		else i++;
	}
	cout << "最小公倍数是：" << i << endl;
	while (t != 0) {
		a = b;
		b = t;
		t = a % b;
	}
	cout << "最大公因数是：" << b << endl;

	return 0;
}

int lab2_7() {
	char ch = '*';
	for (int j = 1; j <= 5; j++) {
		for (int i = 1; i <= j; i++)
			cout << ch;
		cout << "\n";
	}
	return 0;
}

int lab2_8() {
	double x(0), a, x1(0);
	cin >> a;
	 x = a;
	while (fabs(x1 - x) > 10e-5 && a>0) {
		x1 = x;
		x = 0.5 * (x1 + a / x1);
	}
	if (x > 0)
		cout << x << endl;
	else cout << "a是负数" << endl;
	return 0;
}

int lab2_9() {
	double sum=0;
	int day = 1, a = 2,amount=2;
	while (amount <= 100) {
		sum += a * 0.8;
		a = a * 2;
		amount += a;
		day++;
	}
	cout << "平均每天花了" << sum / (day-1) << "￥";
	return 0;
}

int main() {
	int a;
	cin >> a;
	switch (a)
	{
	case 1: lab2_1(); break;
	case 2:lab2_2(); break;
	case 3:lab2_3(); break;
	case 4:lab2_4(); break;
	case 5:lab2_5(); break;
	case 6:lab2_6(); break;
	case 7:lab2_7(); break;
	case 8:lab2_8(); break;
	case 9:lab2_9(); break;
	}
}
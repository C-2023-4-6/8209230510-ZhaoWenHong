#include<iostream>
#include<string>
#include<iomanip>
#include "mytemperature.h"
using namespace std;

static void  lab3_1() {
	int cdi(int x, int y);
	int cmu(int x, int y);
	int m, n;
	cin >> m>>n;
	cout << "最大公约数为" << cdi(m, n) << endl;
	cout << "最小公倍数为" << cmu(m, n) << endl;
}
int cdi(int x,int y) {
	int a, b;
	a = max(x, y);
	b = min(x, y);
	int t = a%b;
	while (t != 0) {
		a = b;
		b = t;
		t = a % b;
	}
	return b;
}
int cmu(int x, int y) {
	int a, b, t;
	a = max(x, y);
	b = min(x, y);
	t = a % b;
	int i = a;
	while (true) {
		if (i % a == 0 && i % b == 0)
			break;
		else i++;
	}
	return i;
}

static void lab3_2() {
	bool is_prime(int num);
	int a = 0,i=2,j=0;
	while(j<200) {
		if (is_prime(i)) {
			cout << i << ' ';
			a++;
			j++;
		}
		if (a == 10) {
			a = 0;
			cout << '\n';
		}
		i++;
	}
}
bool is_prime(int num) {
	bool flag = true;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0)
			flag = false;
	}
	return flag;
}

static void lab3_3() {
	double fah = 120.0;
	double cel = 40.0;
	cout << "Celsius" << "   " << "Fahrenheit" << " | " << "Fahrenheit" << "Celsius"<< endl;
	while (cel>=31.0){
		cout << fixed << setprecision(1) << setw(7) << cel << "   " << setw(10) << celsius_to_fash(cel) << " | ";
		cout << setw(10) << fahrenheit_to_cels(fah) << "   " << setw(7) << fah << endl;
		fah -=10.0;
		cel -= 1.0;
	}
}

void lab3_4() {
	cout << "我没有做第四题，我做的是第三题，看看我的第三题吧。" << endl;
	lab3_3();
}

void lab3_5() {
	int peach(int day);
	cout<<peach(1);
}
int peach(int day) {
	if (day == 10)
		return 1;
	else
		return (peach(day + 1) + 1) * 2;
}

int main() {
	void(*p[])() = {lab3_1,lab3_2,lab3_3,lab3_4,lab3_5 };
	int n;
	cout << "输入1—5执行1—5题" << endl;
	cin >> n;
	p[n-1]();
	return 0;
}


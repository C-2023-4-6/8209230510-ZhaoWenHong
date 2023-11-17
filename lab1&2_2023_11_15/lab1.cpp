#include<iostream>
#include<iomanip>
using namespace std;
#define p  3.14;
int lab1_2() {

	double r, h;
	std::cin >> r >> h;
	double v = r * r * h / 3 * p;
	std::cout << v;
	return 0;
}

int lab1_1() {
	int k = 0;
	int i = k + 1;
	cout << i++ << endl;
	//int i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}

int lab1_3() { 
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "bool length:" << sizeof(bool) << endl;
	cout << "float length:" << sizeof(float) << endl;
	return 0;
}

int lab1_4() {
	unsigned int testunint = 65534;//oxfffe
	cout << "output in unsigned int  type:"<<testunint << endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testunint) << endl;
	cout << "output in short type:" << static_cast<short>(testunint) << endl;//为什么结果为-2?:
	cout << "output in int type:" << static_cast<int>(testunint) << endl;
	cout << "output in double type:" << static_cast<double>(testunint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testunint) << endl;
	cout << "output in hex unsigned int type:" << hex << testunint << endl; //16进制输出
	cout << "output in oct unsigned int type:" << oct << testunint << endl; //8进制输出
	system("pause");
	cout << "以下是将实数转化为int" << endl;
	double x = 13.456;
	int y = int(x);
	cout << "转换前"<<x << endl;
	cout << "转换后"<<dec<<y << endl;
	return 0;
}

int lab1_5() {
	double h,t;
	cin >> h;
	t = (h - 32) / 1.8;
	cout<< fixed<<setprecision(2)<<t;
	return 0;
}

int main() {
	int a;
	cout << "输入数字1~5，对应1~5题" << endl;
	cin >> a;
	switch (a)
	{
	case 1: lab1_1(); break;
	case 2:lab1_2(); break; 
	case 3:lab1_3(); break;
	case 4:lab1_4(); break;
	case 5:lab1_5(); break;
	}
	return 0;
}
#include<iostream>
using namespace std;
class Time             // 定义Time类
{
public:
	void timeSet(int h,int m,int s) {
		hour = h;
		minute = m;
		sec = s;
	}
	void showTime() {
		cout << hour << ':' << minute << ':' << sec;
	}
private:              // 数据成员为私用的
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;   
	int hour, minute, sec;//定义t1为Time类对象
	cin >> hour>>minute>>sec;      //输入设定的时间 
	t1.timeSet(hour, minute, sec);
	t1.showTime();
	return 0;
}
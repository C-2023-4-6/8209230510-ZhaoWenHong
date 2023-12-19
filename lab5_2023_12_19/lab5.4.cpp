#include <iostream>
#include <string>
class stu
{
public:
	stu(int n, int s=0) {
		num = n;
		score = s;
	};

public:
	int num, score;
};

stu* max(stu a[5]) {
	stu* pin = &a[0];
	for (int i = 0; i <= 4; i++) {
		if (pin->score < a[i].score)
			pin = &a[i];
	}
	return pin;
}

int main()
{
	stu a[5] = { stu(1),stu(2),stu(3),stu(4),stu(5)};
	stu* p;
	std::cout << "输入五个学生的分数靴靴";
	for (int i = 0; i < 5; i++) {
		std::cin >> a[i].score;
	}
	p = max(a);
	std::cout << p->num;
}


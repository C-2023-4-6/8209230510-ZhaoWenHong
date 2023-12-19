#include <iostream>
class point
{
public:
	point(int xx=60,int yy=80) {
		x = xx;
		y = yy;
	}
	void setPoint(int i,int j) {
		x += i;
		y += j;
	}
	void display() const {
		std::cout << "新坐标是：(" << x << ',' << y << ')' << std::endl;
	}
private:
	int x, y;
};

int main()
{
	point p;
	int i, j;
	std::cout << "请输入坐标修改值";
	std::cin >> i >> j;
	p.setPoint(i, j);
	p.display();
	return 0;
}

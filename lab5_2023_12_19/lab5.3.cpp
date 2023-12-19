#include<iostream>
class cuboid
{
public:
	cuboid(int aa, int bb, int hh) {
		length = aa;
		width = bb;
		height = hh;
	}
	int volume() {
		return length * width * height;
	}
private:
	int length, width, height;
};

int main() {
	int a[3], b[3], h[3];
	for (int i = 0; i < 3; i++) {
		std::cout << "输入第" << i+1 << "组长方体数据：";
		std::cin >> a[i] >> b[i] >> h[i];
	}
	cuboid c1(a[0], b[0], h[0]), c2(a[1], b[1], h[1]), c3(a[2], b[2], h[2]);
	std::cout << "体积分别是：" << c1.volume() << ' ' << c2.volume() << ' ' << c3.volume();
	return 0;
}
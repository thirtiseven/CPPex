#include <iostream>

class point {
	private:
		int x, y;
	public:
		point(int a, int b) {
			x = a;
			y = b;
		}
		point& operator++();
		point operator++(int);
		point& operator--();
		point operator--(int);
		void show() {
			std::cout << x << " " << y << std::endl;
		}
};

point& point::operator++() {
	x++;
	y++;
	return *this;
}

point point::operator++(int) {
	point temp = *this;
	x++;
	y++;
	return temp;
}

point& point::operator--() {
	x--;
	y--;
	return *this;
}

point point::operator--(int) {
	point temp = *this;
	x--;
	y--;
	return temp;
}

int main(int argc, char *argv[]) {  
	int mx, my;
	std::cin >> mx >> my;
	point m(mx, my);	
	point test(0,0);
	test = m++;
	test.show();
	test = ++m;
	test.show();
	test = m--;
	test.show();
	test = --m;
	test.show();
	return 0;
}
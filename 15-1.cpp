#include <iostream>

class point {
	private:
		int x, y;
	public:
		point(int a = 0, int b = 0) {
			x = a;
			y = b;
		}
		point& operator++() {
			x++;
			y++;
			return *this;
		}
		point operator++(int) {
			point temp = *this;
			x++;
			y++;
			return temp;
		}
		point& operator--() {
			x--;
			y--;
			return *this;
		}

		point operator--(int) {
			point temp = *this;
			x--;
			y--;
			return temp;
		}
		void show() {
			std::cout << x << " " << y << std::endl;
		}
};

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
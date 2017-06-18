#include <iostream>

class point {
	private:
		float x, y;
	public:
		point(float a = 0, float b = 0) {
			x = a;
			y = b;
		}
		float get_point(int n) {
			switch(n) {
				case 1: 
					return x;
				case 2:
					return y;
				default:
					return x;
			}
		}
		void show() {
			std::cout << x << " " << y << std::endl;
		}
};

class rect {
	private:
		point left, right;
		float area;
	public:
		rect(point l, point r) {
			left = l;
			right = r;
		}
		rect() {
			point t(0,0);
			left = t;
			right = t;
		}
		float solve() {
			area = (right.get_point(1) - left.get_point(1)) * (left.get_point(2) - right.get_point(2));
			return area;
		}
		bool operator > (const rect& t) {
			return area > t.area;
		}
		bool operator < (const rect& t) {
			return area < t.area;
		}
};

int main(int argc, char *argv[]) {  
	int lx, ly, rx, ry, la, lb, ra, rb;
	std::cin >> lx >> ly >> rx >> ry;
	std::cin >> la >> lb >> ra >> rb;
	point ml(lx, ly);
	point mr(rx, ry);
	point nl(la, lb);
	point nr(ra, rb);
	rect m(ml, mr);
	rect n(nl, nr);
	m.solve();
	n.solve();
	if(m < n) {
		std::cout << "m < n" << std::endl;
	} else if(m > n) {
		std::cout << "m > n" << std::endl;
	} else {
		std::cout << "m = n" << std::endl;
	}
	return 0;
}
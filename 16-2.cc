#include <iostream>
#include <cmath>

class point {
	protected:
		double x, y;
	public:
		point(double a = 0, double b = 0) {
			x = a;
			y = b;
		}
		void give_value(double a, double b) {
			x = a;
			y = b;
		}
		double get_point(char m) {
			switch(m) {
				case 'x': 
					return x;
				case 'y':
					return y;
				default:
					return x;
			}
		}
		void show() {
			std::cout << x << " " << y << std::endl;
		}
};

class line : protected point {
	private:
		double dis;
		point s;
	public:
		line(double x1, double y1, double x2, double y2) : point(x2, y2){
			s.give_value(x1, y1);
		}
		double solve() {
			dis = sqrt(pow(s.get_point(x) - point::x, 2) + pow(s.get_point(y) - point::y, 2));
			return dis;
		}
};

int main(int argc, char *argv[]) {  
	double x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	line test(x1, y1, x2, y2);
	std::cout << test.solve() << std::endl;
	return 0;
}
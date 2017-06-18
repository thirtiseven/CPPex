#include <iostream>
#include <cmath>

class secant_method {
	protected:
		double x1, x2;
	public:
		secant_method(double begin, double end) {
			x1 = begin;
			x2 = end;
		}
		virtual double f(double x) = 0;
		void solve_x() {
			double x;
			if(f(x1) * f(x2) > 0) {
				std::cout << "no\n";
				return;
			}
			while(fabs(f(x)) > 1.0E-6) {
				x = (x1 * f(x2) - x2 * f(x1)) / (f(x2)-f(x1));
				if(f(x)*f(x1)>0) {
					x1 = x;
				} else {
					x2 = x;
				}
			}
			std::cout << x;
		}		
};

class f1 : public secant_method {
	double f(double x) {
		return (pow(x, 3) - 5 * pow(x, 2) + 16 * x - 80);
	}
	public:
		f1(double first = 0, double second = 0): secant_method(first, second) {
			
		}
};

int main(int argc, char *argv[]) {  
	secant_method *p = new f1(4.5, 5.5);
	p -> solve_x();
	return 0;
}
#include <iostream>

class rect {
	private:
		double left, top, right, bottom, c, s;
	public:
		void input_rect(){
			std::cin >> left >> top >> right >> bottom;
		}
		void solve_c(){
			c = (right - left) * 2 + (top - bottom) * 2;
		}
		void solve_s(){
			s = (right - left) * (top - bottom);
		}		
		void print_rect(){
			std::cout <<"C = " << c << ", S = " << s << std::endl;
		}
};

int main(int argc, char *argv[]) {
	int n;
	std::cin >> n;
	rect *p = new rect[n];
	for(int i = 0;i < n;i++) {
		p[i].input_rect();
		p[i].solve_c();
		p[i].solve_s();
		p[i].print_rect();
	}
	return 0;
}
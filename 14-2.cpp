#include <iostream>

class rect {
	private:
		double left, top, right, bottom, c, s;
	public:
		void input_rect(){
			std::cout << "Enter rect:" << std::endl;
			std::cin >> left >> top >> right >> bottom;
			if(left > right || top < bottom) {
				std::cout << "Invalid input. Enter again:" << std::endl;
				input_rect();
			}
		}
		void solve_c() {
			c = (right - left) * 2 + (top - bottom) * 2;
		}
		void solve_s() {
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
	}
	for(int i = 0;i < n;i++) {
		std::cout << "Data of " << i + 1 << "th rect: " << std::endl;
		p[i].print_rect();
	}
	delete[] p;
	return 0;
}
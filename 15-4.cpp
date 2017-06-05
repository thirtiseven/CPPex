#include <iostream>

class matrix {
	private:
		int *m, l, c;
	public:
		matrix(int line = 0, int col = 0) {
			l = line;
			c = col;
			m = new int[line * col + 1];
			std::cout << "Enter a matrix>>>\n"; 
			for(int i = 0; i < line * col; i++) {
				std::cin >> m[i];
			}
		}
		
		~matrix() {
			delete[] m;
		}
		
		void show() {
			for(int i = 0; i < l * c; i++) {
				std::cout << m[i] << " ";
				if((i+1)%c == 0) {
					std::cout << "\n";
				}
			}
			std::cout << "\n";
		}
		
		int get(int ca) {
			if(ca == -2) {
				return l;
			}
			if(ca == -1) {
				return c;
			}
			if(ca >=0) {
				return m[ca];
			}
			return 0;
		}
		
		matrix& operator+(matrix& add) {
			for (int i = 0; i < add.get(-1) * add.get(-2); i++) {
				m[i] = m[i] + add.get(i);
			}
			return *this;

		}
		
		matrix& operator-(matrix& min) {
			for (int i = 0; i < min.get(-1) * min.get(-2); i++) {
				m[i] = m[i] - min.get(i);
			}
			return *this;
		}
		
		matrix& operator=(matrix& equ) {
			for (int i = 0; i < equ.get(-1) * equ.get(-2); i++) {
				m[i] = equ.get(i);
			}
			return *this;
		}
		
};

int main(int argc, char *argv[]) {  
	int line, col;
	std::cin >> line >> col;
	matrix test1(line, col), test2(line, col), test3(line, col), test4(line, col);
	test1.show();
	test1 = (test2 + test4);
	test1.show();
	test1 = (test3 - test4);
	test1.show();
	return 0;
}


#include <iostream>
#include <string>

class my_string {
	private:
		std::string mem;
		std::string before_add;
		bool flag;
		
	public:
		std::string get_string() {
			return mem;
		}
		
		my_string() {
			flag = 0;
			std::cin >> mem;
		}
		
		my_string(std::string p) {
			flag = 0;
			mem = p;
		}
		
		my_string operator = (my_string s) {  
			mem = s.get_string();
			return *this;
		}  
		
		my_string operator + (my_string& add_part) {
			flag = 1;
			before_add = mem;
			mem += add_part.get_string();
			return *this;
		};
		
		int operator ~ () const{
			return mem.size();
		};
		
		void output() {
			if(flag) {
				std::cout << before_add << std::endl;
			} else {
				std::cout << mem << std::endl;
			}
		}
		
};

int main(int argc, char *argv[]) {  
	my_string test1, test2, test3;
	std::cout << ~test1 << " " << ~test2 << " " << ~test3 << std::endl;
	test2 = (test1 + test3);
	test1.output();
	test2.output();
	test3.output();
	return 0;
}
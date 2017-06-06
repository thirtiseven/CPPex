#include <iostream>

#define inf 0x7f7f7f7f

class my_array {
	protected:
		int size;
		int *arr;
	public:
		my_array(int n = 100) {
			size = n;
			arr = new int[size];
			for(int i = 0; i < size; i++) {
				std::cin >> arr[i];
			}
		}
		~my_array() {
			delete[]arr;
		}
		int& operator[] (int i) {
			return arr[i];
		}
};

class bound_check_array : protected my_array {
	protected:
		int my_lower_bound;
	public:
		bound_check_array(int lower = 0, int upper = 100) : my_array (upper - lower + 1) {
			my_lower_bound = lower;
		}
		~bound_check_array() { }
		int& operator[] (int i) {
			if(i >= my_lower_bound && i <= my_array::size + my_lower_bound) {
				return arr[i - my_lower_bound];
			} else {
				std::cout << "Segmentation fault\n";
				exit(2);
			}
		}
};

int main(int argc, char *argv[]) {  
	bound_check_array test(4,8);
	std::cout << test[6] << std::endl;
	std::cout << test[4] << std::endl;
	std::cout << test[8] << std::endl;
	//std::cout << test[1] << std::endl;
	std::cout << test[10] << std::endl;
	return 0;
}
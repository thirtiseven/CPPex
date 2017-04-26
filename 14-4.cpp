#include <iostream>
#define MAXSIZE 100000

class c_array {
	int size;
	int *p;
	public:
		c_array(int n = MAXSIZE) {
			size = n;
			p = new int[n];
		}
		~c_array() {
			delete[] p;
		}
		int& get_element(int i) {
			return p[i-1];
		}
		void input() {
			for(int i=0; i<size; i++) {
				std::cin >> p[i];
			}
		}
		void output() {
			for(int i=0; i<size; i++) {
				if(i > 0) {
					std::cout << " ";
				}
				std::cout << p[i];
			}
			std::cout << std::endl;
		}
		void bubble_sort() {
			for(int i=0;i<size-1;i++) {
				for(int j=0;j<size-1-i;j++) {
					if(p[j]>p[j+1]) {
						int temp = p[j];
						p[j] = p[j+1];
						p[j+1] = temp;
					}
				}
			}
		}
		int search(int n) {
			for(int i = 0; i < size; i++) {
				if(p[i]==n) {
					return i+1;
				}
			}
			return 0;
		}
};

int main(int argc, char *argv[]) {
	int test_array_size, test_element;
	std::cout << "Enter array size: \n>>>";
	std::cin >> test_array_size;
	c_array test_array(test_array_size);
	std::cout << "Enter array: \n>>>";
	test_array.input();
	test_array.output();
	std::cout << "Enter element's location you want to get: \n>>>";
	std::cin >> test_element;
	std::cout << test_array.get_element(test_element) << std::endl;
	test_array.bubble_sort();
	std::cout << "Sorted array:" << std::endl;
	test_array.output();
	std::cout << "Enter element you want to search: >>> \n";
	std::cin >> test_element;
	if(test_array.search(test_element)) { 
		std::cout << "Element " << test_element << " found in " << test_array.search(test_element) << " ." << std::endl;
	} else {
		std::cout << "No such element" << std::endl;
	}
	return 0;
}
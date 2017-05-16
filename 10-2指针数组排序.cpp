#include <iostream>

int main(int argc, char *argv[]) {
	int *p[10], a[10];
	for(int i = 0; i < 10; i++) {
		std::cin >> a[i];
		p[i] = &a[i];
	}
	int * temp;
	for(int i = 0; i < 10; i++) {
		for(int j = 0;j < 9-i; j++) {
			if(*p[j] > *p[j+1]){
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}
	}
	std::cout << *p[0];
	for(int j = 1; j < 10; j++){
		std::cout << ' ' << *p[j];
	}
	return 0;
}
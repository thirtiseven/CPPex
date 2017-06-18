#include <iostream>

void input(int *a, int n = 12) {
	for(int i = 0; i < n; i++) {
		std::cin >> *a++;
	}
}

void output(int *a,int n = 12) {
	for(int i = 0; i < n; i++) {
		std::cout << *a++;
		if((i + 1) % 4 == 0){
			std::cout << '\n';
		}
	}
}

int main(int argc, char *argv[]) {
	int a[12], *p;
	p = a;
	input(p);
	output(p);
	return 0;
}


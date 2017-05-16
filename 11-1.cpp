#include <iostream>

int sum(int a, int b){
	return a+b;
}

void my_swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

int main(void) {
	int a, b, c, (*p1)(int, int);
	void (*p2)(int *, int *);
	std::cout << "XXXXXXX";
	std::cin >> a >> b;
	p1 = sum;
	c = p1(a, b);
	p2 = my_swap;
	p2(&a, &b);
	std::cout << c << std::endl;
	std::cout << "a=" << a << "b=" << b << std::endl;
	return 0;
}
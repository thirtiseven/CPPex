#include <iostream>

struct {
	int a,b;
}s1, s2;

struct S {
	int a,b;
}s3,s4;

int main(int argc, char *argv[]) {
	std::cin >> s1.a >> s1.b >> s2.a >> s2.b;
	s3.a = s1.a;
	s3.b = s1.b;
	s4.a = s2.a;
	s4.b = s2.b;
	std::cout << s3.a << " " << s3.b << " " << s4.a << " " << s4.b << std::endl;
}
#include <iostream>

using namespace std;

int factorial(int a){
	int x = 1;
	for(int i = 1;i <= a;i++){
		x *= i;
	}
	return x;
}

int main(int argc, char *argv[]) {
	double e = 1.0;
	int a = 1;
	while(1.0/(double)factorial(a) > 10e-8){
		e += 1.0/(double)factorial(a++);
	}
	cout << e;
	return 0;
}